#include <stdio.h>
#include <stdlib.h>
#include "../inc/Source_Transformation.h"
float V_to_I_trans(float v, float r)
{
    float i = v / r;
    printf("Corresponding value of Current source is I=%f \nCorresponding value of Resistance in Parallel is R=%f \n", i, r);
    return i;
}
float I_to_V_trans(float i, float r)
{
    float v = i * r;
    printf("Corresponding value of Voltage source is V=%f \nCorresponding value of Resistance in Series is R=%f \n", v, r);
    return v;
}
void sourcetrans()
{
    printf("CHOOSE THE TYPE OF SOURCE TRANSFORMATION :\nPress 1 for V to I transformation\nPress 2 for I to V transformation\n");
    int type_of_source_transformation;
    scanf("%d", &type_of_source_transformation);
    float resistance, source;
    switch (type_of_source_transformation)
    {
    case 1:
        printf("Enter the value of Voltage source in volts :");
        scanf("%f", &source);
        printf("Enter the value of Resistance(in omh's) in series with volatge source :");
        scanf("%f", &resistance);
        V_to_I_trans(source, resistance);
        break;
    case 2:
        printf("Enter the value of Current source in Ampere :");
        scanf("%f", &source);
        printf("Enter the value of Resistance(in omh's) in parallel with Current source :");
        scanf("%f", &resistance);
        I_to_V_trans(source, resistance);
        break;
    default:
        break;
    }
}