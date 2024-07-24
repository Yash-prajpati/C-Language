#include <stdio.h>
#include <string.h>

int main() {
    char usermail[20];
    char password[20];
    char mail[] = "admin@gmail.com";
    char passwordforlogin[] = "123456";

    printf("Enter mail: ");
    scanf("%s", usermail);
    printf("Enter password: ");
    scanf("%s", password);

    if (strcmp(usermail, mail) == 0 && strcmp(password, passwordforlogin) == 0) {
        printf("Login Successful\n");
    } 
	else{
	 printf("Login failed, your Mail or password is incorrect\n");
    }

}
