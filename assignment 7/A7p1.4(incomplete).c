#include <stdio.h>
#include <math.h>
#define EPS 0.000001
#define MAXIT 100
int c;
void gauss1(int n,float a[10][10],float b[10], float x[10],int *status);
void pivot(int n,float a[10][10],float b[10],int k);
void jacobi( int n, float a[10][10],float b[10],float x[10],int *count, int *status);

int main()
{
    int status,n,i,j,z,count;
    float a[10][10],b[10],x[10];
    printf("Program to find the solution of a series of linear equations\n");
    printf("enter the number of the equations in system of equations\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("Input coefficients of equation %d \n",i);
        for(j=1;j<=n;j++)
            scanf("%f\t",&a[i][j]);
        printf("\nInput the right hand values ");
        scanf("%f\n",&b[i]);
        printf("\n");
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
            gauss1(n,a,b,x,&status);
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
            gauss1(n,a,b,x,&status);
            printf("solution x\n");
            for(i=1;i<=n;i++)
                printf("%f\n", x[i]);
        }
        default:
            printf("wrong choice\n");
            break;
   }
   return 0;
}

void gauss1(int n,float a[10][10],float b[10],float x[10], int *status)
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
                a[i][j]=a[i][j]-factor * a[k][j];
            }
            b[i]=b[i]-factor * b[k];
        }
    }

    x[n]=b[n]/a[n][n];
    for(k=n-1;k>=1;k--)
    {
        sum=0.0;
        for(j=k+1;j<n;j++)
            sum =sum + a[k][j]*x[j];
        x[k]=(b[k]-sum)/a[k][k];
    }
    return;
}

void pivot(int n,float a[10][10],float b[10],int k)
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

void jacobi( int n, float a[10][10],float b[10],float x[10],int *count, int *status)
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
