#include <stdio.h>
#include <string.h>

int main() {
    char username[20];
    char password[20];
    
    char correctUser[] = "admin";
    char correctPass[] = "1234";

    printf("Enter Username: ");
    scanf("%s", username);
    printf("Enter Password: ");
    scanf("%s", password);

    if (strcmp(username, correctUser) == 0 && strcmp(password, correctPass) == 0) {
        printf("Login Successful\n");
    } else {
        printf("Invalid Login\n");
    }

    return 0;
}