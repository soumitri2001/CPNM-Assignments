#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define EPS 1e-5

void input(double** arr, double* res, int n)
{
	printf("ENTER ELEMENTS OF COEFFICIENT MATRIX ROW-WISE\n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("ENTER ELEMENT: ");
			scanf("%lf",&arr[i][j]);
		}
	}
	printf("ENTER ELEMENTS OF RESULT VECTOR:\n");
	for(int i=0;i<n;i++)
	{
		printf("ENTER ELEMENT: ");
		scanf("%lf",&res[i]);
	}
}
double* gauss(double** arr, double* res,int n)
{
	//Forward elimination:
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			//Finding coefficient:
			double c = arr[j][i]/arr[i][i];
			for(int k=0;k<n;k++)
			{
				arr[j][k] -= arr[i][k]*c;

			}
			//Applying identical operation to result vector
			for(int l=i+1;l<n;l++)
				res[l] -= res[i]*c;
		}
	}

	//To store our answers
	double* ans = (double*)calloc(n*sizeof(double),0);
	//Back substitution
	for(int i=n-1;i>=0;i--)
	{
		double off=0;
		for(int j=i+1;j<n;j++)
		{
			off += ans[j]*arr[i][j];
		}
		ans[i] = (res[i]-off)/arr[i][i];
	} 
	return ans;
}

double* gauss_pivot(double** arr, double* res,int n)
{
	//Forward elimination:
	for(int i=0;i<n;i++)
	{
		//Pivoting:
		int idx=i,val=fabs(arr[i][i]);
		for(int m=i+1;m<n;m++)
		{
			if(fabs(arr[m][i])>val)
			{
				val=fabs(arr[m][i]);
				idx=m;
			}
		}
		double temp;
		//Pivoting result vector
		temp=res[i];
		res[i]=res[idx];
		res[idx]=temp;
		//Pivoting coefficient matrix
		for(int itr=0;itr<n;itr++)
		{
			temp=arr[i][itr];
			arr[i][itr]=arr[idx][itr];
			arr[idx][itr]=temp;
		}

		for(int j=i+1;j<n;j++)
		{
			double c = arr[j][i]/arr[i][i];
			for(int k=0;k<n;k++)
			{
				arr[j][k] -= arr[i][k]*c;

			}
			for(int l=i+1;l<n;l++)
				res[l] -= res[i]*c;
		}
	}

	//Stores our answer
	double* ans = (double*)calloc(n*sizeof(double),0.0);
	//Back substitution:
	for(int i=n-1;i>=0;i--)
	{
		double off=0;
		for(int j=i+1;j<n;j++)
		{
			off += ans[j]*arr[i][j];
		}
		ans[i] = (res[i]-off)/arr[i][i];
	} 
	return ans;
}

double* jacobi(double** arr, double* res,int n, int num_iter)
{
	double* ans = (double*)calloc(n*sizeof(double),0.0);
	double* prev = (double*)calloc(n*sizeof(double),0.0);
	int i=0;

	while(i<num_iter)
	{
		for(int it=0;it<n;it++)
		{
			double off=0;
			for(int j=it+1;j<n;j++)
			{
				off += arr[it][j]*prev[j];
			}
			ans[it] = (res[it]-off)/(arr[it][it]+EPS);
		}

		
		int flag=1;
		for(int it=0;it<n;it++)
		{
			if(fabs((ans[i]-prev[i])/ans[i])>EPS)
			{
				flag=0;
				break;

			}

		}

		if(flag==1)
			break;
		else
		{
			for(int it=0;it<n;it++)
				prev[i]=ans[i];
		}
		i++;
	}
	return ans;

}

int main(void)
{
	int n,ch,num_iter;
	printf("ENTER NUMBER OF UNKNOWNS: ");
	scanf("%d",&n);
	double** arr = (double**)malloc(n*sizeof(double*));
	for(int i=0;i<n;i++)
		arr[i] = (double*)malloc(n*sizeof(double));
	double* res = (double*)malloc(n*sizeof(double));
	input(arr,res,n);
	printf("ENTER 1 TO SOLVE BY GAUSS ELIMINATION\n");
	printf("ENTER 2 TO SOLVE BY GAUSS ELIMINATION WITH PIVOTING\n");
	printf("ENTER 3 TO SOLVE BY JACOBI'S METHOD\n");
	printf("ENTER CHOICE: ");
	scanf("%d",&ch);
	double* ans = NULL;
	switch(ch)
	{
		case 1:
				ans = gauss(arr,res,n);
				break;
		case 2:
				ans = gauss_pivot(arr,res,n);
				break;
		case 3:
				printf("ENTER MAXIMUM NUMBER OF ITERATIONS: ");
				scanf("%d",&num_iter);
				ans = jacobi(arr,res,n,num_iter);
				break;
		default:
				printf("INVALID CHOICE\n");

	}
	if(ch>=1&&ch<=3)
	{
		printf("SOLUTIONS: \n");
		for(int i=0;i<n;i++)
		{
			printf("x%d = %lf\n",(i+1),ans[i]);
		}
	}

	return EXIT_SUCCESS; 

}