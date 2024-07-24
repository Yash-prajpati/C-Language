#include<stdio.h>
void evenodd(int no){
	if(no%2==0){
		printf("thise no is even");
	}
	else{
		printf("thise no is odd");
	}
}
void main(){
	int a;
	printf("enter your no");
	scanf("%d",&a);
	
	evenodd(a);
}
