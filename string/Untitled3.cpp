#include<stdio.h>
main(){
	
	char str[]="yash";
	int length=strlen(str);
	int i;
	
	printf("%s",strlwr(str));
	for(i=0;i<length;i++){
		printf("%c = %d\n",str[i],str[i]);
	}
	
}
