#include <stdio.h>

int main() {
    int num;
    printf("Enter a 3-digit number: ");
    scanf("%d", &num);
    if (num >= 100 && num <= 999) {
        int tens_digit = (num / 10) % 10;
        printf("The ten's digit is: %d\n", tens_digit);
    } else {
        printf("Invalid input. Please enter a 3-digit number.\n");
    }

    return 0;
}
