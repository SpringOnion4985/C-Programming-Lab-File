#include <stdio.h>
#include <string.h>

int main() {
    char username[100] = "abc123";
    char password[100] = "password";
    char username2[100];
    char password2[100];

    printf("Enter the username: ");
    scanf("%s", username2);
    printf("Enter the password: ");
    scanf("%s", password2);

    if (strcmp(username2, username) == 0 && strcmp(password2, password) == 0) {
        printf("Valid username and password.\n");
    } else if (strcmp(username2, username) == 0 && strcmp(password2, password) != 0) {
        printf("Invalid password.\n");
    } else if (strcmp(username2, username) != 0 && strcmp(password2, password) == 0) {
        printf("Invalid username.\n");
    } else {
        printf("Invalid username and password.\n");
    }

    printf("Nirbhay Singh.\n");
    return 0;
}
