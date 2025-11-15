/*
Write a C program that:

Asks the user to enter 10 integers

Stores them in an array

Calculates and prints:

The largest number

The smallest number

The average of all the numbers

The count of even numbers in the array
*/

#include<stdio.h>

int main(){
    
    int number[10];
    int i;
    int smallest,largest;
    float average;
    int even_count = 0;
    int sum = 0;
    
    printf("Kindly enter 10 integers: ");
    for(i = 0; i < 10; i++){
        scanf("%d", &number[i]);
        sum = sum + number[i];
        if(number[i] % 2 == 0){
            even_count = even_count + 1;
        }
    }
    
    smallest = number[0];
    largest = number[0];
    
    for(i = 0;i < 10; i++){
        if(number[i] < smallest){
            smallest = number[i];
        }if(number[i] > largest){
            largest = number[i];
        }
    }
    
    average = sum/10.0;
    
    printf("The largest number is %d\n", largest);
    printf("The smallest number is %d\n", smallest);
    printf("The average number is %.2f\n", average);
    printf("The count of even numbers is %d\n", even_count);

    
    return 0;
}
