#include<stdio.h>
#include"inc/cable.h"

int main()
{
  //to calculate ampacity of the cable

  float sys_voltage;
  int transformer_capacity;
  printf("give the system voltage in KV ");
  scanf("%f",&sys_voltage);
  printf("give the transformer_capacity in MVA");
  scanf("%d",&transformer_capacity);
  calculate_ampacity(sys_voltage,transformer_capacity);
 printf("%f A",calculate_ampacity(sys_voltage,transformer_capacity));

//to calculate the site depth derating factor and the site temp derating factor
 float site_depth;
  float rating_factor;
  float derating_depth_value;
  float site_temerature;
  float derating_temeprature_value;
  printf("give the site_depth ");
  scanf("%f",&site_depth);
  printf("give the rating_factor");
  scanf("%f",&rating_factor);
 derating_depth_value=calculate_derating_depth(site_depth,rating_factor);
 printf("give the site_temerature");
  scanf("%f",&site_temerature);
 derating_temeprature_value=calculate_derating_temp(site_temerature);
 float total_derating_factor=derating_depth_value*derating_temeprature_value;
 printf("The total total_derating_factor is %.2f",total_derating_factor);

//to calculate the voltagedrop
  float ampacity, power_factor,length,resistance,reactance;
   printf("give the ampacity ");
  scanf("%f",&ampacity);
  printf("give the sys_voltage");
  scanf("%f",&sys_voltage);
   printf("give the power_factor ");
  scanf("%f",&power_factor);
  printf("give the length");
  scanf("%f",&length);
   printf("give the resistance ");
  scanf("%f",&resistance);
  printf("give the reactance");
  scanf("%f",&reactance);
  float voltage_drop=calculate_voltagedrop(ampacity, sys_voltage, power_factor, length,  resistance, reactance);
  printf("%f",voltage_drop);

}
