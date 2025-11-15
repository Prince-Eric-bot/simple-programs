/*
Write a C program that:

Lets the user enter values into a 3 × 3 matrix

Stores them in a 2D array

Calculates the sum of all elements

Displays the total sum
*/

#include <stdio.h>

int main(){
    int matrix[3][3];
    int i, j;
    int sum = 0;
    
    printf("Kindly enter 9 integers for a 3*3 matrix: \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d", &matrix[i][j]);
            sum = sum + matrix[i][j];
        }
    }
    
    printf("\n The sum of all elements of the matrix is %d\n",sum);
    
    return 0;
}
