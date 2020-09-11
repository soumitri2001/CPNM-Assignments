/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>
#define EPS 0.000001
#define MAXIT 20
float bim( float *a, float *b, float *root, float s, int *count);
float fal( float *a, float *b, float *root, float s, int *count);
float F(float x);
float FD(float x);

float F(float x)
{
    float a;
    a= (x)*(x)+(x)-2;
    return a;
}

float FD(float x)
{
    float a;
    a=2*(x)+1;
    return a;
}

int main()
{
    int n,count;
    float a,b,root,s;
    float h, x0, x1,f,df;
    printf("A PROGRAM TO FIND THE ROOTS OF THE NO LINEAR EQUATION (x*x + x -2)\n");
    printf("Enter 1 for Bisection method\n");
    printf("Enter 2 for Regula Falsi method\n");
    printf("Enter 3 for Newton Raphson method\n");
    printf("Enter 1,2 or 3\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        {
            printf("SOLUTION BY BISECTION METHOD\n");
            printf("Input starting values\n");
            scanf("%f %f",&a,&b);

            bim(&a,&b,&root,s,&count);
            if(s==0.0)
            {
                printf("starting points do not bracket any root\n");
                printf("check weather they bracket even roots\n");
            }
            else
            {
                printf("\n Root = %f\n",root);
                printf("value of the function at the root = %f\n", F(root));
                printf("iterations = %d\n", count);
            }
        }
        case 2:
        {
            printf("SOLUTION BY REGULA FALSI METHOD\n");
            printf("Input starting values\n");
            scanf("%f %f",&a,&b);

            fal (&a,&b,&root,s,&count);
            if(s==0.0)
            {
                printf("starting points do not bracket any root\n");
                printf("check weather they bracket even roots\n");
            }
            else
            {
                printf("\n Root = %f\n",root);
                printf("value of the function at the root = %f\n", F(root));
                printf("iterations = %d\n", count);
            }
        }
        case 3:
        {
            printf("SOLUTION BY NEWTON RAPHSON METHOD\n");
            printf("\nEnter x0\n");
            scanf("%f", &x0);
            count =1;
            begin:
            f=F(x0);
            df=FD(x0);
            h=f/df;
            x1=x0-h;
            if (fabs(h) < EPS)
            {
                printf("ROOT = %f \n", x1);
                printf("FUNCTION VALUE = %f\n",F(x1));
                printf("Number of iterations = %d\n", count);
                printf("\n");
            }
            else
            {
                x0=x1;
                count=count+1;
                if (count < MAXIT)
                    goto begin;
                else
                {
                    printf(" The required solution does not converge\n");
                    printf(" in %d iterations \n", MAXIT);
                }
            }
            break;
        }
        default:
            printf("wrong choice\n");
            break;
    }
    return 0;
}

float bim( float *a, float *b, float *root, float s, int *count)
{
    float x1,x2,x0,f0,f1,f2;
    x1=*a;
    x2=*b;
    f1=F(x1);
    f2=F(x2);

    if(f1*f2>0)
    {
        s=0.0;
        return s;
    }
    *count =0;
    begin:
    x0=(x1+x2)/2.0;
    f0=F(x0);
    if(f0==0)
    {
        s=1.0;
        *root = x0;
        return s;
    }
    if(f1*f0 < 0)
    {
        x2=x0;
        f2=f0;
    }
    else
    {
        x1=x0;
        f1=f0;
    }
    if(fabs(x2-x1/x2)< EPS)
    {
        s=1.0;
        *root = (x1+x2)/2.0;
        return s;
    }
    else
    {
        *count = *count +1;
        goto begin;
    }
}

float fal( float *a, float *b, float *root, float s, int *count)
{
    float x1,x2,x0,f0,f1,f2;
    x1=*a;
    x2=*b;
    f1=F(x1);
    f2=F(x2);

    if(f1*f2>0)
    {
        s=0.0;
        return s;
    }
    *count =0;
    begin:
    x0= x1-f1*(x2-x1)/(f2-f1);
    f0=F(x0);
    if(f0==0)
    {
        s=1.0;
        *root = x0;
        return s;
    }
    if(f1*f0 < 0)
    {
        x2=x0;
        f2=f0;
    }
    else
    {
        x1=x0;
        f1=f0;
    }
    if(fabs(x2-x1/x2)< EPS)
    {
        s=1.0;
        *root = (x1+x2)/2.0;
        return s;
    }
    else
    {
        *count = *count +1;
        goto begin;
    }
}

