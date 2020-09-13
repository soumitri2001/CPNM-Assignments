#include <stdio.h>

int sum_of_digits(int n, int sum)
{
	if(n==0)
		return sum;

	int tmp=sum;
	tmp+=n%10;
	n/=10;
	
	int x=sum_of_digits(n,tmp);
	return x;
}

int main()
{
    int n, sum;

    printf("Enter any integer: \n");
    scanf("%d", &n);

    sum = sum_of_digits(n,0);
    printf("The sum of the digits of %d is: \n%d", n, sum);
}
