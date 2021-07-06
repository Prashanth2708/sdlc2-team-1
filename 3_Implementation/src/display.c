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
#include <math.h>
#include "../inc/fun.h"


  float V,I,P,R_series,R_parllel,R,R1,R2,R3;
  int x;

    

void Switchcase()
{  
    
    printf("Enter your choice\n");
    printf("1) Calculate Current\n");
    printf("2) Calculate Voltage\n");
    printf("3) Calculate Rasitance\n");
    printf("4) Calculate Power\n");
    printf("5) Calculate Rasistance in series\n");
    printf("6) Calculate Rasistance in Parellel\n");
    
   scanf("%d",&x);
   switch (x)
   {
       case 1: printf("Calculate Current\n");
               printf("Enter value of Voltage and Rasistance");
               scanf("%f",&V);
               scanf("%f",&R);
               Current(V,R);
               printf("I =  %d \n", I);   
               break;
       case 2: printf("Calculate Voltage\n");
               printf("Enter value of Current and Rasistance\n");
               scanf("%f",&I);
               scanf("%f",&R);
               Voltage(I,R);
               break;
       case 3: printf("Calculate Resistance");
               printf("Enter value of Voltage and Rasistance");
               scanf("%f",&V);
               scanf("%f",&I);
               Resistancer(V,I);
               break;
       case 4: printf("Calculate Power");
               printf("Enter value of Current and Rasistance");
               scanf("%f",&I);
               scanf("%f",&R);
               Power(I,R);
               break;
       case 5: printf("Calculate Resistance in series");
               printf("Enter value of Resistors");
               scanf("%f",&R1);
               scanf("%f",&R2);
               scanf("%f",&R3);
               Rseries(R1,R2,R3);
               break;
       case 6: printf("Calculate Resistance in parllel");
               printf("Enter value of Resistors");
               scanf("%d",&R1);
               scanf("%d",&R2);
               scanf("%d",&R3);
               Rparllel(R1,R2,R3);
               break;

   }

}


float Voltage(float I, float R){
float V; 
V = I*R;
printf("V =  %f \n", V);
return V;
}

float Current(float V, float R){
float I; 
I = V/R;
printf("I =  %f \n", I);
return I;
}

float Resistancer(float V, float I){
float R; 
R = V/I;
printf("R =  %f \n", R);
return R;
}

float Power(float I, float R){
float P; 
P = ((I*I)/R);
printf("P =  %f \n", P);
return P;
}

float Rseries(float R1,float R2,float R3){
float R_series; 
R_series = R1+R2+R3;
printf("R_series =  %f \n", R_series);
return R_series;
}


float Rparllel(float R1,float R2,float R3){
float R_parllel; 
R_parllel = (1/R1)+(1/R2)+(1/R3);
printf("R_parllel =  %f \n", R_parllel);
return R_parllel;
}
