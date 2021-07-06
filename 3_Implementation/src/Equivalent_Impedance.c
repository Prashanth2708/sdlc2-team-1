#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "../inc/Series_RLC.h"
float Equivalent_impedance_RL(float r, float l, float w)
{
    float Z, XL;
    XL = w * l;
    float temp = pow(r, 2) + pow(XL, 2);
    Z = pow(temp, 0.5);
    printf("Equivalent impedance for series RL circuit is Z=%f\n", Z);
    return Z;
}
float Equivalent_impedance_RC(float r, float c, float w)
{
    float Z, XC;
    XC = 1.0 / (w * c);
    float temp = pow(r, 2) + pow(XC, 2);
    Z = pow(temp, 0.5);
    printf("Equivalent impedance for series RC circuit is Z=%f\n", Z);
    return Z;
}
float Equivalent_impedance_RLC(float r, float l, float c, float w)
{
    float Z, XL, XC;
    XL = w * l;
    XC = 1.0 / (w * c);
    float temp = pow(r, 2) + pow((XL - XC), 2);
    Z = pow(temp, 0.5);
    printf("Equivalent impedance for series RC circuit is Z=%f\n", Z);
    return Z;
}
int Circuit_Selection()
{
    printf("CHOOSE THE TYPE SERIES CIRCUIT\nPress 1 for RL circuit\nPress 2 for RC circuit\nPress 3 for RLC circuit\n");
    int type_of_seriesCircuit;
    scanf("%d", &type_of_seriesCircuit);
    return type_of_seriesCircuit;
}
void equivalent()
{
    int type = Circuit_Selection();
    float omega;
    printf("Enter the value of frequency(w) in rad/s : ");
    scanf("%f", &omega);
    float resistor, inductor, capacitor;
    switch (type)
    {
    case 1:
        printf("Enter the value of Resistance(in ohms)\n");
        scanf("%f", &resistor);
        printf("Enter the value of Inductance(in H)\n");
        scanf("%f", &inductor);
        Equivalent_impedance_RL(resistor, inductor, omega);
        break;
    case 2:
        printf("Enter the value of Resistance(in ohms)\n");
        scanf("%f", &resistor);
        printf("Enter the value of Capacitance(in F)\n");
        scanf("%f", &capacitor);
        Equivalent_impedance_RC(resistor, capacitor, omega);
        break;
    case 3:
        printf("Enter the value of Resistance(in ohms)\n");
        scanf("%f", &resistor);
        printf("Enter the value of Inductance(in H)\n");
        scanf("%f", &inductor);
        printf("Enter the value of Capacitance(in F)\n");
        scanf("%f", &capacitor);
        Equivalent_impedance_RLC(resistor, inductor, capacitor, omega);
        break;
    default:
        break;
    }
}
