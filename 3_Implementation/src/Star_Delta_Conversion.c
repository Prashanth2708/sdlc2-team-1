#include <stdio.h>
#include <stdlib.h>
#include "../inc/Star_Delta_Conversion.h"
float Star_to_Delta_conversion_R(int *ptr)
{
    float sum = 0, a = 0;
    int j = 1;
    sum = ptr[0] * ptr[1] + ptr[1] * ptr[2] + ptr[0] * ptr[2];
    for (int i = 2; i >= 0; i--)
    {
        printf("Corresponding delta value of R%d in ohm's is : %f\n", j++, sum / ptr[i]);
        a = a + (sum / ptr[i]);
    }
    return a;
}
float Delta_to_Star_conversion_R(int *ptr)
{
    float sum = 0, a = 0;
    sum = ptr[0] + ptr[1] + ptr[2];
    printf("Corresponding Star value of RA in ohm's is :%f\n", (ptr[0] * ptr[1]) / sum);
    printf("Corresponding Star value of RB in ohm's is :%f\n", (ptr[0] * ptr[2]) / sum);
    printf("Corresponding Star value of RC in ohm's is :%f\n", (ptr[2] * ptr[1]) / sum);
    a = a + ((ptr[0] * ptr[1]) / sum) + ((ptr[0] * ptr[2]) / sum) + ((ptr[2] * ptr[1]) / sum);
    return a;
}
float Star_to_Delta_conversion_L(int *ptr)
{
    float sum = 0, a = 0;
    int j = 1;
    sum = ptr[0] * ptr[1] + ptr[1] * ptr[2] + ptr[0] * ptr[2];
    for (int i = 2; i >= 0; i--)
    {
        printf("Corresponding delta value of L%d in mH is : %f\n", j++, sum / ptr[i]);
        a = a + (sum / ptr[i]);
    }
    return a;
}
float Delta_to_Star_conversion_L(int *ptr)
{
    float sum = 0, a = 0;
    sum = ptr[0] + ptr[1] + ptr[2];
    printf("Corresponding Star value of LA in mH is :%f\n", (ptr[0] * ptr[1]) / sum);
    printf("Corresponding Star value of LB in mH is :%f\n", (ptr[0] * ptr[2]) / sum);
    printf("Corresponding Star value of LC in mH is :%f\n", (ptr[2] * ptr[1]) / sum);
    a = a + ((ptr[0] * ptr[1]) / sum) + ((ptr[0] * ptr[2]) / sum) + ((ptr[2] * ptr[1]) / sum);
    return a;
}

float Star_to_Delta_conversion_C(int *ptr)
{
    float sum = 0, a = 0;
    sum = ptr[0] + ptr[1] + ptr[2];
    printf("Corresponding Star value of CA in uF is :%f\n", (ptr[0] * ptr[1]) / sum);
    printf("Corresponding Star value of CB in uF is :%f\n", (ptr[0] * ptr[2]) / sum);
    printf("Corresponding Star value of CC in uF is :%f\n", (ptr[2] * ptr[1]) / sum);
    a = a + ((ptr[0] * ptr[1]) / sum) + ((ptr[0] * ptr[2]) / sum) + ((ptr[2] * ptr[1]) / sum);
    return a;
}
float Delta_to_Star_conversion_C(int *ptr)
{
    float sum = 0, a = 0;
    int j = 1;
    sum = ptr[0] * ptr[1] + ptr[1] * ptr[2] + ptr[0] * ptr[2];
    for (int i = 2; i >= 0; i--)
    {
        printf("Corresponding delta value of C%d in uF is : %f\n", j++, sum / ptr[i]);
        a = a + (sum / ptr[i]);
    }
    return a;
}

struct Star_circuit_resistors
{
    int RA;
    int RB;
    int RC;
};
typedef struct Star_circuit_resistors Rstar;

struct Delta_circuit_resistors
{
    int R1;
    int R2;
    int R3;
};
typedef struct Delta_circuit_resistors Rdelta;

// Structure for inductors
struct Star_circuit_inductors
{
    int LA;
    int LB;
    int LC;
};
typedef struct Star_circuit_inductors Lstar;

struct Delta_circuit_inductors
{
    int L1;
    int L2;
    int L3;
};
typedef struct Delta_circuit_inductors Ldelta;

// structures for capacitors
struct Star_circuit_capacitors
{
    int CA;
    int CB;
    int CC;
};
typedef struct Star_circuit_capacitors Cstar;

struct Delta_circuit_capacitors
{
    int C1;
    int C2;
    int C3;
};
typedef struct Delta_circuit_capacitors Cdelta;

void convert()
{
    printf("SELECT THE TYPE OF CIRCUIT :\nPress 1 For Resistive Circuit\nPress 2 For Inductive Circuit\nPress 3 For Capacitive Circuit\n");
    int type_of_circuit;
    scanf("%d", &type_of_circuit);
    switch (type_of_circuit)
    {
    case 1:
        printf("NOTE : Value of Resistor's should be in ohm\n");
        printf("What do you want convert :\nPress 1 for Star to Delta conversion\nPress 2 for Delta to Star conversion\n");
        int type_of_conversion_r;
        scanf("%d", &type_of_conversion_r);
        Rstar *Rs;
        Rs = (Rstar *)malloc(sizeof(Rstar));
        Rdelta *Rd;
        Rd = (Rdelta *)malloc(sizeof(Rdelta));
        switch (type_of_conversion_r)
        {
        case 1:
            printf("Enter the value of RA : ");
            scanf("%d", &(*Rs).RA);
            printf("Enter the value of RB : ");
            scanf("%d", &(*Rs).RB);
            printf("Enter the value of RC : ");
            scanf("%d", &(*Rs).RC);
            Star_to_Delta_conversion_R(&(*Rs).RA);
            break;
        case 2:
            printf("Enter the value of R1 : ");
            scanf("%d", &(*Rd).R1);
            printf("Enter the value of R2 : ");
            scanf("%d", &(*Rd).R2);
            printf("Enter the value of R3 : ");
            scanf("%d", &(*Rd).R3);
            Delta_to_Star_conversion_R(&(*Rd).R1);
            break;
        default:
            printf("Please Enter valid number");
            break;
        }
        free(Rs);
        free(Rd);
        break;
    case 2:
        printf("NOTE : Value of Inductor's should be in mH\n");
        printf("What do you want convert :\nPress 1 for Star to Delta conversion\nPress 2 for Delta to Star conversion\n");
        int type_of_conversion_l;
        scanf("%d", &type_of_conversion_l);
        Lstar *Ls;
        Ls = (Lstar *)malloc(sizeof(Lstar));
        Ldelta *Ld;
        Ld = (Ldelta *)malloc(sizeof(Ldelta));
        switch (type_of_conversion_l)
        {
        case 1:
            printf("Enter the value of LA : ");
            scanf("%d", &(*Ls).LA);
            printf("Enter the value of LB : ");
            scanf("%d", &(*Ls).LB);
            printf("Enter the value of LC : ");
            scanf("%d", &(*Ls).LC);
            Star_to_Delta_conversion_L(&(*Ls).LA);
            break;
        case 2:
            printf("Enter the value of L1 : ");
            scanf("%d", &(*Ld).L1);
            printf("Enter the value of L2 : ");
            scanf("%d", &(*Ld).L2);
            printf("Enter the value of L3 : ");
            scanf("%d", &(*Ld).L3);
            Delta_to_Star_conversion_L(&(*Ld).L1);
            break;
        default:
            printf("Please Enter valid number");
            break;
        }
        free(Ls);
        free(Ld);
        break;
    case 3:
        printf("NOTE : Value of Capacitor's should be in uF\n");
        printf("What do you want convert :\nPress 1 for Star to Delta conversion\nPress 2 for Delta to Star conversion\n");
        int type_of_conversion_c;
        scanf("%d", &type_of_conversion_c);
        Cstar *Cs;
        Cs = (Cstar *)malloc(sizeof(Cstar));
        Cdelta *Cd;
        Cd = (Cdelta *)malloc(sizeof(Cdelta));
        switch (type_of_conversion_c)
        {
        case 1:
            printf("Enter the value of CA : ");
            scanf("%d", &(*Cs).CA);
            printf("Enter the value of CB : ");
            scanf("%d", &(*Cs).CB);
            printf("Enter the value of CC : ");
            scanf("%d", &(*Cs).CC);
            Star_to_Delta_conversion_C(&(*Cs).CA);
            break;
        case 2:
            printf("Enter the value of C1 : ");
            scanf("%d", &(*Cd).C1);
            printf("Enter the value of C2 : ");
            scanf("%d", &(*Cd).C2);
            printf("Enter the value of C3 : ");
            scanf("%d", &(*Cd).C3);
            Delta_to_Star_conversion_C(&(*Cd).C1);
            break;
        default:
            printf("Please Enter valid number");
            break;
        }
        free(Cs);
        free(Cd);
        break;
    default:
        break;
    }
}