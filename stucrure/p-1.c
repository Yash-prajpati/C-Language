#include<stdio.h>

 struct student{
 	int stu_id;
 	char name[20];
 	int age;
 	char cours[17];
 	char city[10];
 	int std;
 	char school[20];
 };



main(){
	
	int n;
	struct student s1[n];
	
	printf("enter student no:-\t");
	scanf("%d",&n);
	
	int i;
	
	for(i=0;i<n;i++){
		printf("enter student ID:- ");
		scanf("%d",&s1[i].stu_id);
		fflush(stdin);
		printf("enter student name:-");
		gets(s1[i].name);
		printf("enter student age:-");
		scanf("%d",s1[i].age);
		fflush(stdin);
		printf("enter student like course:-");
		scanf("%s",s1[i].cours);
		fflush(stdin);
		printf("enter student city:-");
		scanf("%s",s1[i].city);
		printf("enter student std:-");
		scanf("%d",s1[i].std);
		printf("enter school:-");
		scanf("%s",s1[i].school);
	}
	
	
}
