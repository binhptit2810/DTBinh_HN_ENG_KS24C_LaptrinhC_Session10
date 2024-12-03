#include <stdio.h>

int main(){
	// khai bao va gan gia tri cho mang so nguyen
	int number[5] = {67,3,5,-5,3};
	int size = sizeof(number)/sizeof(int);
	// xap xep mang tu be den lon
	for(int i=0;i< size;i++){
		for(int j=0;j<size -i-1;j++){
			if (number[j] > number[j +1] ){
				int temp = number[j];
				number[j] = number[j+1];
				number[j+1] = temp;			
			} 
		}
	}
	printf("Sap xep mang : \n");
	for (int i =0;i< size ;i++){
		printf("%d", number[i]);
	}
	printf("\n");
	
	return 0;
}
