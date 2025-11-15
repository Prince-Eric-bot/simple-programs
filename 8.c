/*
Write a C program that:

Asks the user to enter 5 integers

Stores them in an array

Calculates and prints:

The largest number

The smallest number

The average of all numbers
*/

#include <stdio.h>

int main() {
    int numbers[5];
    int i;
    int largest, smallest;
    float sum = 0, average;

    printf("Enter 5 integers:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }

    largest = numbers[0];
    smallest = numbers[0];

    for(i = 0; i < 5; i++) {
        sum += numbers[i];

        if(numbers[i] > largest) {
            largest = numbers[i];
        }

        if(numbers[i] < smallest) {
            smallest = numbers[i];
        }
    }

    average = sum / 5;

    printf("\nLargest number: %d", largest);
    printf("\nSmallest number: %d", smallest);
    printf("\nAverage: %.2f\n", average);

    return 0;
}
