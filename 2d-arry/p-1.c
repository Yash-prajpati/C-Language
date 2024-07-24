#include<stdio.h>
main(){
	int a,i;
	
	printf("ENTER THE SIZE OF ARRAY:-");
	scanf("%d",&a);
	
	int arr[i];
	for(i=0;i<a;i++){
		printf("enter elemnt of arry:-");
		scanf("%d",&arr[i]);
	}
	printf("negetive in arry :-  ");
	
	for(i=0;i<a;i++){
		if(arr[i]<0){
			printf("%d,",arr[i]);
		}
	}
}
