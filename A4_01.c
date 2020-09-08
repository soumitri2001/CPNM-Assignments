#include <stdio.h>

void reverse(int *arr, int n){
	int i=0,j=n-1,tmp;

	for(i=0,j=n-1;i<n/2;i++,j--){
		tmp=arr[i];
		arr[i]=arr[j];
		arr[j]=tmp;
	}
}

void printArray(int *arr, int n){
	int i;

	for(i=0;i<n;i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main(){

	int n,i,tmp;
	printf("Enter Size of array : \n");
	scanf("%d",&n);
	int arr[n];

	for(i=0;i<n;i++){
		printf("Enter element : \n");
		scanf("%d",&tmp);
		arr[i]=tmp;
	}

	printf("Before Reverse :\n");
	printArray(arr,n);

	reverse(arr,n);

	printf("After Reversing :\n");
	printArray(arr,n);

	return 0;
}