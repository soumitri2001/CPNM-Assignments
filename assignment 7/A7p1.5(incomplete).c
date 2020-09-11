#include <stdio.h>
#include <math.h>
#define EPS 0.000001
#define MAXIT 100
int c;
void gauss1(int n,float a[4][4],float b[4], float x[10]);
void pivot(int n,float a[4][4],float b[4],int k);
void jacobi( int n, float a[4][4],float b[10],float x[10],int *count, int *status);
int main()
{
    int ch,n=4,i,j,z,count,status;
    float a[4][4],b[4],x[4];
    printf("Program to find the solution of a series of linear equations\n");
    printf("Enter 1 for the system of equations 1\n");
    printf("Enter 2 for the system of equations 2\n");
    printf("Enter 3 for the system of equations 3\n");
    printf("Enter 1, 2 or 3\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        {
            float a[4][4]={{0,0,0,0},{0,1,1,1},{0,1,1,-1},{0,1,-1,1}};
            float b[4]={0,6,0,2};
            break;
        }
        case 2:
        {
            float a[4][4]={{0,0,0,0},{0,1,1,1},{0,2,3,1},{0,1.-1,-1}};
            float b[4]={0,3,6,-3};
            break;
        }
        case 3:
        {
            float a[4][4]={{0,0,0,0},{0,2,4,2},{0,2,1,2},{0,4,1.-2}};
            float b[4]={0,15,-5,0};
            break;
        }
        default:
        {
            printf("wrong choice\n");
            break;
        }
    }
    printf("enter 1 for Gauss elimination method\n");
    printf("enter 2 for Jacobi method\n");
    printf("enter 3 for the gauss elimination with pivoting\n");
    printf("Enter 1,2 or 3\n");
    scanf("%d",&c);
    switch(c)
   {
        case 1:
        {
            printf("finding the solution using Gauss elimination\n");
            gauss1(n,a,b,x);
            printf("solution x\n");
            for(i=1;i<=n;i++)
                printf("%f\n", x[i]);
            break;
        }
        case 2:
        {
            printf("finding the solution using Jacobi method\n");
            jacobi(n,a,b,x,&count,&status);
            if(status==2)
            {
                printf("\n No convergence in %d iterations\n",MAXIT);
            }
            else
            {
                printf("\n SOLUTION\n" );
                for(i=1;i<=n;i++)
                {
                    printf("%f ",x[i]);
                    printf("\n Interations = %d\n",count);
                }
            }
            break;
        }
        case 3:
        {
            printf("finding the solution using Gauss elimination with pivoting\n");
            gauss1(n,a,b,x);
            printf("solution x\n");
            for(i=1;i<=n;i++)
                printf("%f\n", x[i]);
            break;
        }
        default:
            printf("wrong choice\n");
            break;
   }
}

void gauss1(int n,float a[4][4],float b[4],float x[10])
{
    int i,j,k;
    float p,factor,sum;

    for(k=1;k<=n-1;k++)
    {
        if(c==3)
        {
            pivot(n,a,b,k);
        }
        p = a[k][k];
        for(i=k+1;i<=n;i++)
        {
            factor = a[i][k]/p;
            for(j=k+1;j<=n;j++)
            {
                float f1=a[k][j];
                a[i][j]=a[i][j]-factor * f1;
            }
            float f2=b[k];
            b[i]=b[i]-factor * f2;
        }
    }

    x[n]=b[n]/a[n][n];

    for(k=n-1;k>=1;k--)
    {
        sum=0.0;
        for(j=k+1;j<n;j++)
        {
            float f2=x[j];
            sum =sum + a[k][j]*x[j];
        }
        x[k]=(b[k]-sum)/a[k][k];
    }
    return;
}

void pivot(int n,float a[4][4],float b[4],int k)
{
    int p,i,j;
    float large,temp;
    p=k;
    large = fabs(a[k][k]);
    for(i=k+1;i<=n;i++)
    {
        if(fabs(a[i][k])>large)
        {
            large = fabs(a[i][k]);
            p=i;
        }
    }

    if(p!=k)
    {
        for(j=k;j<=n;j++)
        {
            temp = a[p][j];
            a[p][j]= a[k][j];
            a[k][j]=temp;
        }
        temp = b[p];
        b[p]= b[k];
        b[k]=temp;
    }
    return;
}

void jacobi( int n, float a[4][4],float b[10],float x[10],int *count, int *status)
{
    int i,j,k;
    float sum,x0[10];
    for(i=1;i<=n;i++)
        x0[i]=b[i]/a[i][i];

    *count=1;
    begin:
    k=0;
    for(i=1;i<=n;i++)
    {
        sum =b[i];
        for(j=1;j<=n;j++)
        {
            if(i==j)
                continue;
            sum=sum- a[i][j]*x0[j];
        }
        x[i]= sum/a[i][i];
        if(k==0)
        {
            if(fabs(x[i]-x0[i]/x[i])> EPS)
                k=1;
        }
        if(k==1)
        {
            if(*count == MAXIT)
            {
                *status = 2;
                return;
            }
            else
            {
                *status=1;
                for(i=1;i<=n;i++)
                    x0[i]=x[i];
            }
            *count =*count+1;
            goto begin;
        }
         return;
    }
}
