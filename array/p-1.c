#include<stdio.h>
main(){
	
	int a;
	
	printf("enter your number: ");
	scanf("%d",&a);
	
	int arry[a],i;
	
	for(i=0;i<a;i++){
		printf("arry[%d]",i);
		scanf("%d",&arry[i]);
	}
	for(i=0;i<a;i++){
		printf("%d ",arry[i]);
	}
	
	
	
}
