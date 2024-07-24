#include <stdio.h>
main() {
    int row,col,i,j;

    printf("enter row in arry: ");
    scanf("%d",&row);
    printf("enter col in arry: ");
    scanf("%d",&col);

    int arr[row][col]; 

    printf("enter elmnt in arry:\n");
    for (i=0;i<row;i++) {
        for (j=0;j<col;j++) {
            printf("a[%d][%d]=",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

    int max = arr[0][0];
    
    for (i=0;i<row;i++) {
        for (j=0;j<col;j++) {
            if (arr[i][j]>max) {
                max=arr[i][j];
            }
        }
    }
    printf("largest: %d\n",max);
}
