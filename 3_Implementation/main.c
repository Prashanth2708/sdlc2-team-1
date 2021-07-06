#include "inc/Series_RLC.h"
#include "inc/Source_Transformation.h"
#include "inc/Star_Delta_Conversion.h"
#include "inc/cable.h"
#include "inc/division.h"
#include "inc/parallel.h"
#include "inc/series.h"
#include "inc/Circular_Convo_FFT.h"
#include "inc/fun.h"
#include "inc/color.h"
#include <stdio.h>

enum resistor_band_items {BLACK, BROWN, RED, ORANGE, YELLOW, GREEN, BLUE, VIOLET, GRAY, WHITE, UNKNOWN};


void maincable()
{
      //to calculate ampacity of the cable

  float sys_voltage;
  int transformer_capacity;
  printf("give the system voltage in KV : ");
  scanf("%f",&sys_voltage);
  printf("give the transformer_capacity in MVA :");
  scanf("%d",&transformer_capacity);
  calculate_ampacity(sys_voltage,transformer_capacity);
 printf("%f A",calculate_ampacity(sys_voltage,transformer_capacity));

//to calculate the site depth derating factor and the site temp derating factor
 float site_depth;
  float rating_factor;
  float derating_depth_value;
  float site_temerature;
  float derating_temeprature_value;
  printf("give the site_depth : ");
  scanf("%f",&site_depth);
  printf("give the rating_factor : ");
  scanf("%f",&rating_factor);
 derating_depth_value=calculate_derating_depth(site_depth,rating_factor);
 printf("give the site_temerature : ");
  scanf("%f",&site_temerature);
 derating_temeprature_value=calculate_derating_temp(site_temerature);
 float total_derating_factor=derating_depth_value*derating_temeprature_value;
 printf("The total total_derating_factor is = %.2f\n",total_derating_factor);

//to calculate the voltagedrop
  float ampacity, power_factor,length,resistance,reactance;
   printf("give the ampacity : ");
  scanf("%f",&ampacity);
  printf("give the sys_voltage : ");
  scanf("%f",&sys_voltage);
   printf("give the power_factor : ");
  scanf("%f",&power_factor);
  printf("give the length : ");
  scanf("%f",&length);
   printf("give the resistance : ");
  scanf("%f",&resistance);
  printf("give the reactance : ");
  scanf("%f",&reactance);
  float voltage_drop=calculate_voltagedrop(ampacity, sys_voltage, power_factor, length,  resistance, reactance);
  printf("Voltage Drop is V=%f",voltage_drop);
}

int calculate()
{
    int option;
    printf("\nPress 1 Voltage/Current Divion \nPress 2 Parallel Equivalent Passive Element \nPress 3 Series Equivalent Passive Element\n");
    scanf("%d",&option);
    switch (option)
    {
    case 1:
        division();
        break;
    case 2:
        parallel();
        break;
    case 3:
        series();
        break;
    default:
        break;
    } 
    return 0;
}

void basic_circuit_solver()
{
    printf("What type calculation do you want\nPress 1 for Equivalent_Impedance in Series RLC circuit\nPress 2 for Power_Factor in Series RLC circuit\nPress 3 for Source_Transformation\nPress 4 for Star_Delta_Conversion\n");
    int typofcal;
    scanf("%d", &typofcal);
    switch (typofcal)
    {
    case 1:
        equivalent();
        break;
    case 2:
        powerfactor();
        break;
    case 3:
        sourcetrans();
        break;
    case 4:
        convert();
        break;
    default:
        break;
    }
}
int main()
{

    printf("Which Module you are interested in \nPress 1 for basic ciruit solver\nPress 2 for Cable calculation\nPress 3 for circuit calculator\nPress 4 for Convolution\nPress 5 for formula calculation \nPress 6 for resistor color coding\n");
    int typeofmodule;
    scanf("%d",&typeofmodule);
    int i, invalid; //counter
    double resistor_value; //total resistance value
    enum resistor_band_items mid;
    struct items *choice = NULL;
    switch (typeofmodule)
    {
    case 1:
        basic_circuit_solver();
        break;
    case 2:
        maincable();
        break;
    case 3:
        calculate();
        break;
    case 4:
        circular_convolution();
        break;
    case 5:
        Switchcase();
        break;
    case 6:
        code();
        break;
    default:
        break;
   }
}