#include<stdio.h>
#include<stdlib.h>
#include<math.h>

double fowdiff(double x,double h)
{
	double diff = (sin(x+h)-sin(x))/h;
	return diff;
}

double backdiff(double x,double h)
{
	double diff = (sin(x)-sin(x-h))/h;
	return diff;
}

double centdiff(double x,double h)
{
	double diff = (sin(x+h)-sin(x-h))/(2*h);
	return diff;
}

double exactdiff(double x)
{
	return cos(x);
}

double error(double exact, double approx)
{
	return (fabs((exact-approx)/exact)*100);
}

int main(void)
{
	double x;
	do{
	printf("ENTER VALUE OF x. MUST BE BETWEEN 0 AND PI: ");
	scanf("%lf",&x);
	}while(x<0 || x>M_PI);
	double exact,fd,bd,cd;
	exact=exactdiff(x);
	fd = fowdiff(x,0.1);
	bd = backdiff(x,0.1);
	cd = centdiff(x,0.1);
	printf("EXACT VALUE OF DERIVATIVE OF sin(x) AT %lf is %lf\n", x,exact);
	printf("USING del x = 0.1: \n");
	printf("VALUE OF DERIVATIVE OF sin(x) AT %lf BY FORWARD DIFFERENCE METHOD is %lf\n ", x,fd);
	printf("VALUE OF DERIVATIVE OF sin(x) AT %lf BY BACKWARD DIFFERENCE METHOD is %lf\n ", x,bd);
	printf("VALUE OF DERIVATIVE OF sin(x) AT %lf BY CENTRAL DIFFERENCE METHOD is %lf\n ", x,cd);
	printf("RELATIVE PERCENTAGE ERROR FOR FORWARD DIFFERENCE METHOD is %lf %%\n",error(exact,fd));
	printf("RELATIVE PERCENTAGE ERROR FOR BACKWARD DIFFERENCE METHOD is %lf %%\n",error(exact,bd));
	printf("RELATIVE PERCENTAGE ERROR FOR CENTRAL DIFFERENCE METHOD is %lf %%\n",error(exact,cd));
	fd = fowdiff(x,0.01);
	bd = backdiff(x,0.01);
	cd = centdiff(x,0.01);
	
	printf("USING del x = 0.01: \n");
	printf("VALUE OF DERIVATIVE OF sin(x) AT %lf BY FORWARD DIFFERENCE METHOD is %lf\n ", x,fd);
	printf("VALUE OF DERIVATIVE OF sin(x) AT %lf BY BACKWARD DIFFERENCE METHOD is %lf\n ", x,bd);
	printf("VALUE OF DERIVATIVE OF sin(x) AT %lf BY CENTRAL DIFFERENCE METHOD is %lf\n ", x,cd);
	printf("RELATIVE PERCENTAGE ERROR FOR FORWARD DIFFERENCE METHOD is %lf %%\n",error(exact,fd));
	printf("RELATIVE PERCENTAGE ERROR FOR BACKWARD DIFFERENCE METHOD is %lf %%\n",error(exact,bd));
	printf("RELATIVE PERCENTAGE ERROR FOR CENTRAL DIFFERENCE METHOD is %lf %%\n",error(exact,cd));

	printf("As can be seen, the smaller the value of del x, the lower the error in the differentiation.\nIn both cases, the central differencing scheme produced best results.\n");

	
} 