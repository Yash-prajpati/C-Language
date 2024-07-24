#include<stdio.h>
main(){
	
	
	int a;
	
	printf("enter your age:");
	scanf("%d",&a);
	
    if (a <= 12){
        printf("You are a child.");
  	}
    else if (a <=19){
    	 printf("You are a teenager.");
	}
       
    else if (a <=64){
    	 printf("You are an adult.");
	}
       
    else{
    	 printf("You are a senior.");
	}	
	
}
