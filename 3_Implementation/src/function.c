/**
 * @file display.c
 * @author Rahul
 * @brief this file display all feature
 * @version 0.1
 * @date 2021-04-14
 *
 * @copyright Copyright (c) 2021
 *
 */


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../inc/color.h"
#include <math.h>




 double calResistance (int a, int b, int c)
    {
    	double results;
    	unsigned power = 10;
    	while (b >= power)
    	{
    		power *= 10;
    	}
    	results = a * power + b;
    	results = results * pow(10, c);
    	return results;
    }




int inputVal (int *a, char b[3][10])
    {
    	int counter = 0, index[3];
    	for (int i = 0; i < 3; ++i)
    	{
    		if (a[i] == 10)
    		{
    			index[i] = i;
    			//printf("%s%s", b[i], " ");
    			counter++;
    		}
    	}
    	if (counter == 0)
    	{
    		return 0;
    	}
    	else if (counter == 1)
    	{
    		printf("Invalid colour: %s\n", b[index[0]]);
    	}
    	else if (counter == 2)
    	{
    		printf("Invalid colours:");
    		printf(" %s", b[index[0]]);
    		printf(",");
    		printf(" %s\n", b[index[1]]);
    	}
    	else
    	{
    		printf("Invalid colours:");
    		printf(" %s", b[index[0]]);
    		printf(",");
    		printf(" %s", b[index[1]]);
    		printf(",");
    		printf(" %s\n", b[index[2]]);
    	}
    	return 1;
    }

void print_number (double number)
    {
    	double n = number,  *x;
    	int c = 0;
    	int j = 1;
    	while	(n != 0 && n > 1)
    	{

    		n /= 10.0;

    		c += 1;
    	}
    	x = malloc (c * sizeof(double));
    	

    	for (int i = 0; i <= c; i++)
    	 {
    		double digit = fmod (number, 10.0);
    		x[i] = digit;
    		number /= 10.0;
    	 }

    	 
    	
    	for (int i = c - 1; i >= 0; i--)
    	{

    	 	if (j == 3 || j == 7 || j == 11 || j == 15)
    	 	{
    	 		printf(" ");
    	 	}
    	 	else
    	 	{
    	 		printf("%.0f", x[i]);
    	 	}
    	 	j++;
    	}
    	
    	
    }




