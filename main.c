#include <stdio.h>
#include <string.h>

int checkPassword(char password[]) {
    int i;
    int hasDigit = 0;
    int hasUpperCase = 0;

    
    if (strlen(password) < 8) {
        return 0;
    }

    
    for (i = 0; password[i] != '\0'; i++) {
        if (password[i] >= '0' && password[i] <= '9') {
            hasDigit = 1;
        }
        if (password[i] >= 'A' && password[i] <= 'Z') {
            hasUpperCase = 1;
        }
    }

    
    if (hasDigit && hasUpperCase) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    char password[50];

    printf("Enter password: ");
    scanf("%s", password);

    if (checkPassword(password)) {
        printf("Password is VALID\n");
    } else {
        printf("Password is INVALID\n");
    }

    return 0;
}
