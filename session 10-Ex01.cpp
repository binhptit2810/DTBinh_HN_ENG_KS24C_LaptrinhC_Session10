#include <stdio.h>

int main(){
	// khai bao va gan gia tri cho 1 mang bat ki
	int arr[5] = {1,2,3,4,5};
	int check;
	int vitri= 0;
	int correct=0;
	// yeu cau nguoi dung nhap vao phan tu bat ki
	printf("Moi ban nhap vao 1 phan tu bat ki ");
	scanf("%d", &check);
	for(int i=0;i<5;i++){
		if(arr[i] == check){
			correct=1;
			vitri =i;
			break;
		}
	}
	// kiem tra va in ra vi tri cua phan tu
	if(correct){
		printf("Phan tu ban nhap co trong mang va o vi tri %d", vitri);
	}else{
		printf("Phan tu ban nhap khong co trong mang");
	}
	return 0;
}
