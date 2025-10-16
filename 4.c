/*Write a C program that calculates the sum of the first 100 natural numbers using a for loop.
*/
#include <stdio.h>

int main() {
    int i, sum=0;
    
    for(i = 1;i<=100;i++){
     sum = sum + i;   
    }
    printf("%d\n",sum);
    return 0;
}
