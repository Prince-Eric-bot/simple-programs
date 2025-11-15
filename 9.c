/*Write a C program that:

Asks the user to enter 8 integers

Stores them in an array

Calculates and prints:

The second largest number

The second smallest number

The sum of all numbers
*/

#include<stdio.h>

int main(){
    int number[8];
    int sec_largest, sec_smallest;
    int largest, smallest;
    int i;
    int sum=0;
    
    printf("Enter the eight integers:\n");
    for(i=0; i<8;i++){
        scanf("%d", &number[i]);
        sum = sum + number[i];
    }
    
    sec_largest =sec_smallest = number[0];
    largest = smallest = number[0];
    
    for(i = 0; i < 8; i++){
        int n=number[i];
        
        if(n > largest){
            sec_largest = largest;
            largest = n;
    }else if(n > sec_largest && n !=largest){
        sec_largest = n;
    }
    
    if (n < smallest){
        sec_smallest = smallest;
        n = smallest;
    }
    }
    
    printf("The seond largest number is %d\n", sec_largest);
    printf("The seond smallest number is %d\n", sec_smallest);
    printf("sum of all numbers will be %d\n", sum);
       return 0;
}
