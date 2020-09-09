#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void)
{
	int a,b;
	double c1,c2;
	printf("ENTER TWO INTEGERS: ");
	scanf("%d %d", &a, &b);
	if(a<b)
	{
		int temp = a;
		a = b;
		b = temp;
	}
	c1 = a;
	c2 = b;

	int q = a / b;
	int r = a % b;
	int c = r,cb = b;
	if(r!=0){
	while(b%r != 0)
	{
		int temp = r;
		r = b%r;
		b = temp;
	}
	c/=r;
	cb/=r;
	printf("THE RESULT OF DIVIDING %d BY %d IN FRACTIONAL FORM: ", a, b);
	if((q!=0) && ((a>0 && cb>0) || (a<0 && cb<0)))
		printf("%d ", q);
	else if(q!=0)
		printf(" - %d ",q);
	if(((q==0) && ((a>0 && cb>0) || (a<0 && cb<0))) ||(q!=0))
		printf("%d / %d\n",  abs(c), abs(cb));
	else if((q == 0) && !((a>0 && cb>0) || (a<0 && cb<0)))
		printf(" - %d / %d\n",abs(c),abs(cb));
	}
	else
		printf("THE RESULT OF DIVIDING %d BY %d IN FRACTIONAL FORM: %d\n", a, b, q);

	printf("THE RESULT OF DIVIDING %d BY %d IN FLOATING POINT FORM: %lf\n", a, b, (c1/c2));
	
	return EXIT_SUCCESS;
}