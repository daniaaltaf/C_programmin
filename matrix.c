#include <stdio.h>

int main() {
    int mat[10][10];
    int rows, cols;
    int i, j;  

    printf("Enter rows and columns: ");
    scanf("%d%d", &rows, &cols);

    printf("Enter elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("Matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}

