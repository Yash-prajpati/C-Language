#include<stdio.h>
main(){
	
	
  int a;
  
  printf("enter your age:-");
  scanf("%d",&a);
  
  if(a<=0){
  	printf("plase enter your real age");
  }	
  else if(a>=18){
  	printf("you are eligeble for vote");
  }
  else{
  	printf("your not ready for vote");
  }
	
	
}
