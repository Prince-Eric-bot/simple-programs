/*Write a program using a while loop that prints all odd numbers between 1 and 15.*/
#include <stdio.h>

int main(){
    int i=1;
    
    while(i<=15){
        if(i % 2 ==1)
        printf("%d\n", i);
        ++i;
    }
    return 0;
}
