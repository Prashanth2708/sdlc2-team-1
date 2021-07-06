#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../inc/color.h"
#include <math.h>


 // resister bands
    enum resistor_band_items {BLACK, BROWN, RED, ORANGE, YELLOW, GREEN, BLUE, VIOLET, GRAY, WHITE, UNKNOWN};

    struct items
     {
     	char *name;
     	enum resistor_band_items id;
     } item_list[] = {
    	{"black", BLACK},
    	{"brown", BROWN},
    	{"red", RED},
    	{"orange", ORANGE},
    	{"yellow", YELLOW},
    	{"green", GREEN},
    	{"blue", BLUE},
    	{"violet", VIOLET},
    	{"gray", GRAY},
    	{"white", WHITE}
    };

    char answer[10], status[1] = "Y"; //answer => user input
    char bands[3][10];		//string for resistor bands
    //variables to hold the band values
    int colour[3];
    //function prototype
    int inputVal (int *a, char b[3][10]);
    double calResistance (int a, int b, int c);
    void print_number (double number);

void code(){


        int i, invalid; //counter
    	double resistor_value; //total resistance value
    	enum resistor_band_items mid;
    	struct items *choice = NULL;


    while (strcmp(status, "Y") == 0)
    	{
    		//print the question to the user
    		printf("Enter the colours of the resistor's three bands,\nbeginning with the band nearest to the end.\nType the coloues in lowercase letters only, NO CAPS.\n");
    		for (int j = 0; j<3; j++)
    		{
    			printf("Band %d => ", j + 1);
    			gets(answer);
    			for (i = 0, choice = NULL; i < sizeof item_list/sizeof(struct items); ++i)
    			{
    				if (strcmp(answer, item_list[i].name) == 0)
    				{
    					choice = item_list + i;
    					break;
    				}
    			}
    			mid = choice ? choice ->id : UNKNOWN;
    			colour[j] =  mid;
    			strcpy(bands[j], answer);
    		}
    		invalid = inputVal (colour, bands);
    		if (invalid == 0)
    		{
    			//calculate resistor value
    			resistor_value = calResistance(colour[0], colour[1],colour[2]);
    			// print resistor value to user
    			printf("%.0f ohms\n", resistor_value);
    			
    		}
    		printf("Do you want to decode another resistor (Y/N)?\n");
    		gets(status);
    		if (strcmp(status, "Y") == 0);
    		else break;
    	}


}
