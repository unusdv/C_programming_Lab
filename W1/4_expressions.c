/* 
 * Name: 4_expressions.c                          
 * Purpose: Illustrates simple expressions. 
 * Author: Luis Cavazos    
 * Date: 2025/03/05                        
 */
                  
#include <stdio.h>

int main(void)
{
    // Computing the Dimensional Weight of a Box
    int height, length, width, volume, weight;

    height = 8;
    length = 12;
    width = 10;
    volume = height * length * width;
    // Adding 165 to round up and divide the volume by 166.  
    weight = (volume + 165) / 166;  

    printf("Dimensions: %dx%dx%d\n", length, width, height);
    printf("Volume (cubic inches): %d\n", height * length * width);
    printf("Dimensional weight (pounds): %d\n", weight); 
        
    return 0;
}