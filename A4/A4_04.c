#include<stdio.h>

int main(){

	int n;
	printf("Enter number of elements :\n");
	scanf("%d", &n);

	int arr[n],tmp,i;
	for(i=0;i<n;i++){
		printf("Enter element : \n");
		scanf("%d",&tmp);
		arr[i]=tmp;
	}

	int min=arr[0], max=arr[0];
	for(i=1;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
			continue;
		}

		if(arr[i]<min){
			min=arr[i];
			continue;
		}
	}

	printf("Range :%d\n", max-min);

	return 0;
}