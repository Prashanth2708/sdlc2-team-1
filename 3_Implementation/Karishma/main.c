/**
 * @file main.c
 * @author Karishma Savant
 * @brief main file for choosing sub modules
 * @version 0.1
 * @date 2021-07-04
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<stdio.h>
#include "inc/division.h"
#include "inc/parallel.h"
#include "inc/series.h"

int main()
{
    int option;
    printf("\n 1) Voltage/Current Divion \n 2) Parallel Equivalent Passive Element \n 3) Series Equivalent Passive Element\n");
    scanf("%d",&option);
    if (option==1)
    {
        division();
    }
    
    if (option==2)
    {
        parallel();
    }
        
    if (option==3)
    {
        series();

    }
        

    

    return 0;

}