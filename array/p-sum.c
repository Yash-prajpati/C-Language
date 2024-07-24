#include<stdio.h>
main(){
	
	int a;
	
	printf("enter your number: ");
	scanf("%d",&a);
	
	int arry[a],i,sum=0;
	
	for(i=0;i<a;i++){
		printf("arry[%d]",i);
		scanf("%d",&arry[i]);
	}
	for(i=0;i<a;i++){
		printf("vlaue print %d \n",arry[i]);
		sum = sum + arry[i];
	}
	printf("sum of value :- %d ",sum);
	
	int avg=sum/arry[i];
	
	printf("%d",avg);
	
}
