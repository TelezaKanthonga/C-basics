//a C program that utilizes variables to switch on and off four LEDs using two switches
#include <stdio.h>

int main() {
    int switch1, switch2;
    int led1 = 0, led2 = 0, led3 = 0, led4 = 0;

    while (1) {
        printf("Enter the state of switch 1 (0/1): ");
        scanf("%d", &switch1);
        printf("Enter the state of switch 2 (0/1): ");
        scanf("%d", &switch2);

        // Switch 1 controls LED 1 and LED 2
        if (switch1 == 1) {
            led1 = 1;
            led2 = 1;
        } else {
            led1 = 0;
            led2 = 0;
        }

        // Switch 2 controls LED 3 and LED 4
        if (switch2 == 1) {
            led3 = 1;
            led4 = 1;
        } else {
            led3 = 0;
            led4 = 0;
        }

        printf("LED 1: %d\n", led1);
        printf("LED 2: %d\n", led2);
        printf("LED 3: %d\n", led3);
        printf("LED 4: %d\n", led4);
    }

    return 0;
}

