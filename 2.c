/*
Sum of Even Numbers

Write a C program that:

Asks the user to input a number n 

Calculates the sum of all even numbers from 1 to n.

Prints the result.
*/
#include <stdio.h>

int main() {
    int num, sum=0;//sum starts at 0
    //ask the user to enter any number
    printf("Enter a number: \n");
    scanf("%d", &num);
    //loop through numbers from 1 to num
    for(int i=1; i<=num; i++){
        //check if current number is even
        if(i % 2 == 0){
            //add it to the sum
            sum += i;
        }
    }
    //then we print the results
    printf("the sum of even numbers from 1 to %d is: %d\n", num, sum);
    
    return 0;
}
