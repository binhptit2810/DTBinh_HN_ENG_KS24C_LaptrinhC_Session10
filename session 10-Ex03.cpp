#include <stdio.h>

int main() {
    // khai bao va gan gia tri cho mang so nguyen
    int number[] = {23, -5, 12, 7, 0, 45, -10};
    int size = sizeof(number) / sizeof(int);

    // su dung thuat toan sap xep chen
    for (int i = 1; i < size; i++) {
        int key = number[i];
        int j = i - 1;
        while (j >= 0 && number[j] > key) {
            number[j + 1] = number[j];
            j--;
        }
        number[j + 1] = key; 
    }

    // in mang ra sau khi sap xep
    printf("Mang sau khi sap xep tang dan la :\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", number[i]);
    }
    printf("\n");

    return 0;
}

