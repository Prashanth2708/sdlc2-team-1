#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "../inc/Series_RLC.h"
float Power_Factor_RL(float r, float l, float w)
{
    float XL, PF, Z;
    XL = w * l;
    float temp = pow(r, 2) + pow(XL, 2);
    Z = pow(temp, 0.5);
    PF = r / Z;
    printf("Power Factor for series RL circuit is P.F=%f\n", PF);
    return PF;
}
float Power_Factor_RC(float r, float c, float w)
{
    float XC, PF, Z;
    XC = 1.0 / (w * c);
    float temp = pow(r, 2) + pow(XC, 2);
    Z = pow(temp, 0.5);
    PF = r / Z;
    printf("Power Factor for series RC circuit is P.F=%f\n", PF);
    return PF;
}
float Power_Factor_RLC(float r, float l, float c, float w)
{
    float XL, XC, PF, Z;
    XL = w * l;
    XC = 1.0 / (w * c);
    float temp = pow(r, 2) + pow((XL - XC), 2);
    Z = pow(temp, 0.5);
    PF = r / Z;
    printf("Power Factor for series RC circuit is P.F=%f\n", PF);
    return PF;
}

void powerfactor()
{
    int typef = Circuit_Selection();
    float omega;
    printf("Enter the value of frequency(w) in rad/s : ");
    scanf("%f", &omega);
    float resistor, inductor, capacitor;
    switch (typef)
    {
    case 1:
        printf("Enter the value of Resistance(in ohms)\n");
        scanf("%f", &resistor);
        printf("Enter the value of Inductance(in H)\n");
        scanf("%f", &inductor);
        Power_Factor_RL(resistor, inductor, omega);
        break;
    case 2:
        printf("Enter the value of Resistance(in ohms)\n");
        scanf("%f", &resistor);
        printf("Enter the value of Capacitance(in F)\n");
        scanf("%f", &capacitor);
        Power_Factor_RC(resistor, capacitor, omega);
        break;
    case 3:
        printf("Enter the value of Resistance(in ohms)\n");
        scanf("%f", &resistor);
        printf("Enter the value of Inductance(in H)\n");
        scanf("%f", &inductor);
        printf("Enter the value of Capacitance(in F)\n");
        scanf("%f", &capacitor);
        Power_Factor_RLC(resistor, inductor, capacitor, omega);
        break;
    default:
        break;
    }
}