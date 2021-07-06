/**
 * @file division.c
 * @author Karishma Savant
 * @brief voltage and current division calculator
 * @version 0.1
 * @date 2021-07-04
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>
#include "../inc/division.h"
/**
 * @brief function to calculate output voltage from current division
 * 
 * @param input_voltage 
 * @param load_resistance 
 * @param resistance2 
 * @return double 
 */
double voltage_division(double input_voltage, double load_resistance, double resistance2)
{
    double output_voltage;

    output_voltage=input_voltage*((load_resistance/(load_resistance+resistance2)));
    
    return output_voltage;


}
/**
 * @brief function to find branched currents in current division circuit
 * 
 */
void current_division()
{
    double input_current, resistance1,resistance2,current1,current2;
    printf("\n Enter input current in Amperes\n");
    scanf("%lf",&input_current);
    printf("\n Enter resistance 1 in Ohms\n");
    scanf("%lf",&resistance1);
    printf("\n Enter resistance 2 in Ohms\n");
    scanf("%lf",&resistance2);
    current1=input_current*(resistance2/(resistance1+resistance2));
    current2=input_current*(resistance1/(resistance1+resistance2));
    printf("\n current across resistor 1= %lf Amperes",current1);
    printf("\n current across resistor 2= %lf Amperes",current2);
    

}
/**
 * @brief function to take choice from user of current or voltage division
 * 
 * @return int 
 */
int division()
{
    int choice;
    printf("\nDo you want to calculate Current Division or Voltage Division? \n");
    printf("\n Enter \nPress 1 for Voltage Division \nPress 2 for Current Division \n");
    scanf("%d",&choice);
    if(choice==1)
    {
            double input_voltage, load_resistance,resistance2,output_voltage;
            printf("\n Enter the input voltage in Volts\n");
            scanf("%lf",&input_voltage);
            printf("\n Enter the Load Resistance in Ohms\n");
            scanf("%lf",&load_resistance);
            printf("\n Enter Resistance 2 in Ohms\n");
            scanf("%lf",&resistance2);

    
            output_voltage=voltage_division(input_voltage, load_resistance, resistance2);
            printf("\n Output Voltage=%lf Volts",output_voltage);
    }
    if(choice==2)
    {

        current_division();
        
    }
    
    return 0;

}