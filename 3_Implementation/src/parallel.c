/**
 * @file parallel.c
 * @author your name (you@domain.com)
 * @brief Parallel equivalent passive element calculation function
 * @version 0.1
 * @date 2021-07-04
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>
#include "../inc/parallel.h"
/**
 * @brief parallel equivalent resistance function
 * 
 * @param number_of_resistance 
 * @param resistance 
 * @return double 
 */
double parallel_resistance(int number_of_resistance, double resistance[])
{
   int loop_counter = 0;
   double parallel_equivalent_resistance = 0;

   for (loop_counter = 0; loop_counter < number_of_resistance; loop_counter++)
   {
      parallel_equivalent_resistance = parallel_equivalent_resistance + (1.0 / resistance[loop_counter]);
   }
   parallel_equivalent_resistance = 1.0 / parallel_equivalent_resistance;
   return parallel_equivalent_resistance;
}
/**
 * @brief parallel equivalent inductor function
 * 
 * @param number_of_inductors 
 * @param inductor 
 * @return double 
 */
double parallel_inductance(int number_of_inductors, double inductor[])
{
   int loop_counter = 0;
   double parallel_equivalent_inductor = 0;

   for (loop_counter = 0; loop_counter < number_of_inductors; loop_counter++)
   {
      parallel_equivalent_inductor = parallel_equivalent_inductor + (1.0 / inductor[loop_counter]);
   }
   parallel_equivalent_inductor = 1.0 / parallel_equivalent_inductor;
   return parallel_equivalent_inductor;
}
/**
 * @brief parallel equivalent capacitor function
 * 
 * @param number_of_capacitors 
 * @param capacitor 
 * @return double 
 */
double parallel_capacitance(int number_of_capacitors, double capacitor[])
{
   int loop_counter = 0;
   double parallel_equivalent_capacitance = 0;

   for (loop_counter = 0; loop_counter < number_of_capacitors; loop_counter++)
   {
      parallel_equivalent_capacitance = parallel_equivalent_capacitance + capacitor[loop_counter];
   }
   return parallel_equivalent_capacitance;
}
/**
 * @brief choice from user about the parallel passive element they want to find
 * 
 * @return int 
 */
int parallel()
{
   int choice;
   printf("\nEnter which passive element's parallel equivalent you want to find \n");
   printf("\n Enter \nPress 1 'R' for Resistance \nPress 2 'C' for Capacitance \nPress 3 'L' for Inductance\n");
   scanf("%d", &choice);
   if (choice == 1)
   {
      int number_of_resistance, loop_counter = 0;
      double resistance[100], parallel_equivalent_resistance = 0;

      printf("\nEnter the number of Resistances : ");
      scanf("%d", &number_of_resistance);

      printf("\nEnter Value of Each Resistance in Ohms: ");
      for (loop_counter = 0; loop_counter < number_of_resistance; loop_counter++)
      {
         printf("\n Resistance value%d : ", loop_counter + 1);
         scanf("%lf", &resistance[loop_counter]);
      }

      
      parallel_equivalent_resistance = parallel_resistance(number_of_resistance, resistance);
      printf("\nEquivalent Parallel Resistance : %lf Ohms", parallel_equivalent_resistance);
   }
   if (choice == 2)
   {
      int number_of_capacitors, loop_counter=0;
      double capacitor[100],parallel_equivalent_capacitance;
      printf("\nEnter the number of Capacitors : ");
      scanf("%d", &number_of_capacitors);

      printf("\nEnter Value of Each Capacitance in microFarads: ");
      for (loop_counter = 0; loop_counter < number_of_capacitors; loop_counter++)
      {
         printf("\n Capacitance value%d : ", loop_counter + 1);
         scanf("%lf", &capacitor[loop_counter]);
      }

      parallel_equivalent_capacitance = parallel_capacitance(number_of_capacitors, capacitor);
      printf("\nEquivalent Parallel Capacitance : %lf microFarads", parallel_equivalent_capacitance);
   }
   
   if (choice == 3)
   {
      int number_of_inductors, loop_counter = 0;
      double inductor[100], parallel_equivalent_inductor = 0;

      printf("\nEnter the number of Inductors : ");
      scanf("%d", &number_of_inductors);

      printf("\nEnter Value of Each Inductance in milli Henry : ");
      for (loop_counter = 0; loop_counter < number_of_inductors; loop_counter++)
      {
         printf("\n Inductor value%d : ", loop_counter + 1);
         scanf("%lf", &inductor[loop_counter]);
      }

      parallel_equivalent_inductor = parallel_inductance(number_of_inductors, inductor);
      printf("\nEquivalent Parallel Inductance : %lf milli Henry", parallel_equivalent_inductor);
   }
   return 0;
}