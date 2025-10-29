#include <stdio.h>
int main(void) {
    char *name = "Justin"; // string
    char initial = 'J'; // single character
    int shutdownDays = 4; // integer: estimated days
    float pi = 3.14159; // floating-point number
    printf("Hello, my name is %s.\n", name);
    printf("My initial is %c.\n", initial);
    printf("Fun fact: pi is approximately %.2f.\n", pi);
    // Conditional output based on shutdownDays
    if (shutdownDays < 1) { 
        printf("I don’t think the government will shut down.\n");
    } else if (shutdownDays == 1) {
        printf("I think the government will shut down for 1 day.\n");
    } else {
        printf("I think the government will shut down for %d days.\n", shutdownDays);
    }
return 0;
}