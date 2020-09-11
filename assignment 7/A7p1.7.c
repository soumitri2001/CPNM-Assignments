#include <stdio.h>
#include <math.h>

int fact(int n);
float u_cal(float u, int n);

int main()
{
    int n=4,c,i,j;float sum;
    printf("Program implementing interpolation for the points (1,1),(2,8),(3,27),(4,64) \n");
    printf("Enter 1 for Lagrange method\n");
    printf("Enter 2 for Newtons forward difference formulae\n");
    printf("Enter 3 for Newtons backward difference formulae\n");
    printf("Enter 1,2 or 3\n");
    scanf("%d",&c);
    switch(c)
    {
        case 1:
        {
            float x[5]={0,1,2,3,4},f[5]={0,1,8,27,64},fp,lf,xp;
            printf("Enter the value of x at which interpolation is required\n");
            scanf("%f",&xp);

            sum=0.0;
            for(i=1;i<=n;i++)
            {
                lf=1.0;
                for(j=1;j<=n;j++)
                {
                    if(i!=j)
                        lf=lf*(xp-x[j])/(x[i]-x[j]);
                }
                sum =sum + lf * f[i];
            }
            fp=sum;
            printf(" Interpolated function value\n");
            printf( "at x= %f is %f\n",xp,fp);
            break;
        }
        case 2:
        {
            printf("Finding the interpolation using Newton's forward difference formulae\n ");
            float x[n]={1,2,3,4};
            float y[n][n];
            y[n][0]=1;
            y[n][1]=1;
            y[n][2]=1;
            y[n][3]=64;
            for (int i = 1; i < n; i++)
            {
                for (int j = 0; j < n - i; j++)
                    y[j][i] = y[j + 1][i - 1] - y[j][i - 1];
            }

            for (int i = 0; i < n; i++)
            {
                printf("    %f\t",x[i]);
                for (int j = 0; j < n - i; j++)
                    printf("    %f\t",y[i][j]);
                printf("\n");
            }
            float value;
            printf("enter the value for interpolation\n");
            scanf("%f",&value);
            float sum = y[0][0];
            float u = (value - x[0]) / (x[1] - x[0]);
            for (int i = 1; i < n; i++)
            {
                sum = sum + (u_cal(u, i) * y[0][i])/fact(i);
            }
            printf("\n value at %f is %f",value,sum);
            break;
        }
        case 3:
        {
            printf("Finding the interpolation using Newton's backward difference formulae\n");
            printf("enter the values of x\n");
            float x[n]={1,2,3,4};
            float y[n][n];
            y[n][0]=1;
            y[n][1]=1;
            y[n][2]=1;
            y[n][3]=64;
            for (int i = 1; i < n; i++)
            {
                for (int j = n - 1; j >= i; j--)
                    y[j][i] = y[j][i - 1] - y[j - 1][i - 1];
            }

            for (int i = 0; i < n; i++)
            {
                printf("    %f\t",x[i]);
                for (int j = 0; j < n - i; j++)
                    printf("    %f\t",y[i][j]);
                printf("\n");
            }
            float value;
            printf("enter the value for interpolation\n");
            scanf("%f",&value);
            float sum = y[n - 1][0];
            float u = (value - x[n - 1]) / (x[1] - x[0]);
            for (int i = 1; i < n; i++)
            {
                sum = sum + (u_cal(u, i) * y[n - 1][i]) / fact(i);
            }
            printf("\n value at %f is %f",value,sum);
            break;
        }
        default:
        {
            printf("wrong choice\n");
            break;
        }
    }
    return 0;
}


int fact(int n)
{
    int f = 1;
    for (int i = 2; i <= n; i++)
        f *= i;
    return f;
}

float u_cal(float u, int n)
{
    float temp = u;
    for (int i = 1; i < n; i++)
        temp = temp * (u - i);
    return temp;
}
