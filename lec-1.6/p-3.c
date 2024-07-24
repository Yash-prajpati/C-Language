#include<Stdio.h>
main(){
	
	int no;
	
	printf("enter your no:-\t");
	scanf("%d",&no);
	
	
	if(no==0){
		printf("zero");
	}
	else if(no>=0){
		printf("this no is positive");
	}
	else{
		printf("this no is negetive");
	}
	
}
