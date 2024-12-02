#include <stdio.h>
int main(){
	int arr[]={5,9,40,20,25,34};
	int length=sizeof(arr)/sizeof(arr[0]);
	int n, found=0;
	
	printf("Moi ban nhap gia tri can tim: ");
	scanf("%d", &n);
	
	for(int i=0; i<length; i++){
		if(arr[i]==n){
			printf("Phan tu %d nam o vi tri tri %d trong mang", n, i+1);
			found=1;
		}
	}
	if(!found){
		printf("Khong tim thay gia tri %d", n);
	}
	return 0;
}