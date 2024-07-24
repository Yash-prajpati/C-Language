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
	
	
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			if(i==j){
				sum=sum+a[i][j];
			}
		}
	
	}
	printf("sum=%d",sum);
	

	
	
}
