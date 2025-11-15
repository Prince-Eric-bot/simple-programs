/*Write a C program that:

Asks the user to enter 8 integers

Stores them in an array

Calculates and prints:

The second largest number

The second smallest number

The sum of all numbers
*/

#include <stdio.h>

int main() {
    int number[8];
    int sec_largest, sec_smallest;
    int largest, smallest;
    int i;
    int sum = 0;

    printf("Enter the eight integers:\n");
    for (i = 0; i < 8; i++) {
        scanf("%d", &number[i]);
        sum += number[i];
    }

    largest = second_largest = number[0];
    smallest = sec_smallest = number[0];

    for (i = 0; i < 8; i++) {
        int n = number[i];

        if (n > largest) {
            sec_largest = largest;
            largest = n;
        } else if (n > sec_largest && n != largest) {
            sec_largest = n;
        }

        if (n < smallest) {
            sec_smallest = smallest;
            smallest = n;
        } else if (n < sec_smallest && n != smallest) {
            sec_smallest = n;
        }
    }

    printf("The second largest number is %d\n", sec_largest);
    printf("The second smallest number is %d\n", sec_smallest);
    printf("Sum of all numbers is %d\n", sum);

    return 0;
}

