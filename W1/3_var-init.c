/* 
 * Name: 3_var-init.c                          
 * Purpose: Illustrates variable initialization. 
 * Author: Luis Cavazos    
 * Date: 2025/03/05                        
 */
#include <stdio.h>

int main(void){
    int age = 38;
    int day = 12, month = 1, year = 1987;
    float height = 1.82f;

    printf("Luis was born in %d/%d/%d is %d years old and has a height  of %.2f cm. \n", day, month, year, age, height);  
        
    return 0;
}