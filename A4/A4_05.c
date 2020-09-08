#include <stdio.h>

void sortArray(int *arr, int n){
	int i,j,tmp;

	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				tmp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tmp;
			}
		}
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

	int n=0,i,a,arr[10];

	for(i=0;i<10;i++){
		printf("Enter element :\n");
		scanf("%d", &a);
		arr[i]=a;
	}

	printf("Before Sorting :\n");
	printArray(arr,10);

	sortArray(arr,10);

	printf("After Sorting :\n");
	printArray(arr,10);

	return 0;
}