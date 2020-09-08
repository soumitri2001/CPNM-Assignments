#include <stdio.h>

int main()
{
    int r, c, i,j;
    printf("Enter the length of each row of the matrix: ");
    scanf ("%d", &r);
    printf ("Enter the length of each column of the matrix: ");
    scanf ("%d", &c);

    int Matrix[r][c];
    printf ("Enter the elements of the matrix: \n");

    for(i=0; i<r; i++){
        for (j=0; j<c; j++){
            scanf("%d", &Matrix[i][j]);
        }
    }

    printf ("The transpose of the matrix is: \n");
    for (i=0; i<c; i++){
        for (j=0; j<r; j++){
            printf("%d ", Matrix[j][i]);
        }
        printf("\n");
    }
}
