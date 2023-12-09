#include <stdio.h>
int main() {
    printf("Nirbhay Singh\n");
    char gender;
    printf("ENTER YOUR GENDER i.e m/M or f/F: \n");
    scanf(" %c", &gender);
    if (gender == 'm' || gender == 'M') {
        printf("You are a Male\n");
    } else if (gender == 'f' || gender == 'F') {
        printf("You are a Female\n");
    } else {
        printf("Please enter a valid gender (m/M or f/F)\n");
    }
    return 0;
}
