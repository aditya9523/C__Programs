#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r, c, h, sum[6][6][6],a[6][6][6],b[6][6][6], i, j,k;
    printf("Enter the number of rows (between 1 and 6): ");
    scanf("%d", &r);
    printf("Enter the number of columns (between 1 and 6): ");
    scanf("%d", &c);
    printf("Enter the number of height (between 1 and 6): ");
    scanf("%d", &h);

    printf("\nEnter elements of 1st matrix:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            for(k = 0;k < h; k++){
            printf("Enter element a[%d][%d][%d]: ", i, j, k);
            scanf("%d", &a[i][j][k]);
        }
        printf("First Matrix Element is : \n");
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
               for(k = 0;k < h; k++)
            {
                printf("%d  ",a[i][j][k]);
            if(k == h-1){
                printf("\n\n");
            }

        }
            }
            printf("\n\n");}


    printf("Enter elements of 2nd matrix:\n");

    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++) {
            printf("Enter element a[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
        printf("Second Matrix Element is : \n");
        for(i=0;i<r;i++)
            for(j=0;j<c;j++)
            {
                printf("%d  ",b[i][j]);
            if(j == c-1){
                printf("\n\n");
            }
        }
    return 0;
}
