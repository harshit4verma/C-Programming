#include <stdio.h>

int main() {
    int matrix[2][2];
    int sum = 0;

    printf("Enter 4 elements for the 2x2 matrix:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            sum += matrix[i][j];
        }
    }

    printf("Sum of all elements = %d\n", sum);

    return 0;
}
