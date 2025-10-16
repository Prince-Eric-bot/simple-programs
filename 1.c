#include <stdio.h>

int main() {
    int age;
    char grade;
    
    printf("Enter your age: \n");
    scanf("%d", &age);
    
    getchar();//clear the output buffer
    
    printf("What is your grade: \n");
    scanf("%c",& grade);
    
    if(age>=18){
        printf("You are an adult\n");
    }else{
        printf("You are a minor.\n");
    }
    
    if (grade == 'A' || grade == 'B'){
        printf("Great job!\n");
    
    }else{
        printf("You need to improve\n");
    }
    
    return 0;
}
