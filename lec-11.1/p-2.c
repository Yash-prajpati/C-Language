#include<stdio.h>
main(){
	
	int x,y;
	int *ptr,*ptr2;

	
	printf("enter vlue of x:-");
	scanf("%d",&x);
	printf("enter vlue of y:-");
	scanf("%d",&y);
	
    *ptr = &x;
    *ptr2 = *ptr;
    
    
	
	printf("value of x:- %d\n",x);
	printf("value of y:- %d",y);
	
	
}
