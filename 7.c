/*Write a program using a do...while loop that asks the user to enter a number.
The program should keep asking until the user enters a number greater than 100.*/
#include <stdio.h>

int main(){
    int i;
    
    do{
         printf("Enter number: \n");
         scanf("%d", &i);
    }while (i<=100);
    return 0;
}
