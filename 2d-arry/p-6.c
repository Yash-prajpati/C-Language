#include<stdio.h>
main(){
	
	
	int row,col,i,j,sum=0;
	
	printf("enter size of row: ");
	scanf("%d",&row);	
	printf("enter size of col: ");
	scanf("%d",&col);
	
	int a[row][col];
	
	printf("enter a arry:- \n");
	
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	int b[row][col];
	
	printf("enter b arry:- \n");
	
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("b[%d][%d]",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	

	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("%d",a[i][j]+b[i][j]);
		}
		printf("\n");
	}
	

	
	
}
