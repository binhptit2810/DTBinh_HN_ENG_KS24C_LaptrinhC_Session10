#include <stdio.h>

int main() {
    // khoi tao va gan gia tri cho 1 mang so nguyen
    int number[] = {29, 10, 14, 37, 14, -3, 0};
    int size = sizeof(number) / sizeof(int);

    // su dung thuat toan sap xem chen
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (number[j] < number[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            int temp = number[i];
            number[i] = number[minIndex];
            number[minIndex] = temp;
        }
    }
    // in mang ra sau khi da sap xep
    printf("Mang sau khi sap xep tang dan :\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", number[i]);
    }
    printf("\n");

    return 0;
}

