/* 
 * Name: 2_variables.c                          
 * Purpose: Illustrates the use of variables. 
 * Author: Luis Cavazos    
 * Date: 2025/03/05                        
 */
                  
#include <stdio.h>

int main(void)
{
    int age;
    int day, month, year;
    float height;

    age = 38;
    day = 30;
    month = 1;
    year = 1987;

    height = 1.82f;

    printf("Luis was born in %d/%d/%d is %d years old and has a height of "
        "%.2f cm. \n", day, month, year, age, height);  
        
    return 0;
}