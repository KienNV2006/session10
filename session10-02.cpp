#include <stdio.h>
int main(){
	int arr[]={5,2,7,9,4,3};
	int n=sizeof(arr)/sizeof(arr[0]);
	
	for(int i=0; i<n-1; i++){
		for(int j=0; j<n-i-1; j++){
			if(arr[j]>arr[j+1]){
			int temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
		}
		}
	}
	printf("Phan tu cua mang theo thu tu tang dan la: ");
	for(int i=0; i<n; i++){
		printf("%d, ", arr[i]);
	}
	return 0;
}