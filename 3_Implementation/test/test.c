#include "../inc/Star_Delta_Conversion.h"
#include "../inc/Series_RLC.h"
#include "../inc/Source_Transformation.h"
#include "../inc/cable.h"
#include "../unity/unity.h"
#include "../unity/unity_internals.h"
#include"../inc/division.h"
#include"../inc/parallel.h"
#include"../inc/series.h"
#include "../inc/fun.h"

/* Required by the unity test framework */
void setUp()
{
}
/* Required by the unity test framework */
void tearDown()
{
}

int a[3] = {9, 9, 9};
int b[3] = {16, 16, 16};
int c[3] = {25, 25, 25};
float sys_voltage = 0.415,sys_voltage1=2;
int transformer_rating=200,transformer_rating1=13;

float temp=12,temp1=20,temp2=27,temp3=37,temp4=47;

float depth=99,depth1=108,depth2=190;
float rating=15,rating1=120,rating2=470;

float ampacity=143.7,ampacity1=120;
float sys_voltage2=1;
float power_factor=0.8,power_factor1=1;
float length=100,length1=25;
float Resistance=1.035,Resistance1=13;
float Reactance=5.233,Reactance1=0.03;

void test_calculate_ampacity(void)
{
    TEST_ASSERT_EQUAL_FLOAT(143.760208, calculate_ampacity(sys_voltage, transformer_rating));
    TEST_ASSERT_EQUAL_FLOAT(45.033321, calculate_ampacity(sys_voltage1, transformer_rating1));
}
void test_calculate_derating_temp(void)
{
    TEST_ASSERT_EQUAL_FLOAT(1.120000, calculate_derating_temp(temp));
    TEST_ASSERT_EQUAL_FLOAT(1.040000, calculate_derating_temp(temp1));
    TEST_ASSERT_EQUAL_FLOAT(0.960000, calculate_derating_temp(temp2));
    TEST_ASSERT_EQUAL_FLOAT(0.910000, calculate_derating_temp(temp3));
    TEST_ASSERT_EQUAL_FLOAT(0.820000, calculate_derating_temp(temp4));

}
void test_calculate_derating_depth(void)
{
    TEST_ASSERT_EQUAL_FLOAT(0.990000, calculate_derating_depth(depth,rating));
    TEST_ASSERT_EQUAL_FLOAT(0.980000, calculate_derating_depth(depth,rating1));
    TEST_ASSERT_EQUAL_FLOAT(0.970000, calculate_derating_depth(depth,rating2));
    
    TEST_ASSERT_EQUAL_FLOAT(0.980000, calculate_derating_depth(depth1,rating));
    TEST_ASSERT_EQUAL_FLOAT(0.970000, calculate_derating_depth(depth1,rating1));
    TEST_ASSERT_EQUAL_FLOAT(0.960000, calculate_derating_depth(depth1,rating2));
    
    TEST_ASSERT_EQUAL_FLOAT(0.950000, calculate_derating_depth(depth2,rating));
    TEST_ASSERT_EQUAL_FLOAT(0.930000, calculate_derating_depth(depth2,rating1));
    TEST_ASSERT_EQUAL_FLOAT(0.910000, calculate_derating_depth(depth2,rating2));
}

void test_calculate_voltagedrop(void)
{
    TEST_ASSERT_EQUAL_INT(23796, calculate_voltagedrop(ampacity,sys_voltage,power_factor,length,Resistance,Reactance));
    TEST_ASSERT_EQUAL_INT(6754, calculate_voltagedrop(ampacity1,sys_voltage2,power_factor1,length1,Resistance1,Reactance1));
}

double x[3]={10,10,10};
double y[3]={20,20,20};
double z[3]={30,30,30};

void test_series_resistance(void)
{
  TEST_ASSERT_EQUAL(30.000000,series_resistance(3,x));
  TEST_ASSERT_EQUAL(60.000000,series_resistance(3,y));
  TEST_ASSERT_EQUAL(90.000000,series_resistance(3,z));
}
void test_series_inductance(void)
{
  TEST_ASSERT_EQUAL(30.000000,series_inductance(3,x));
  TEST_ASSERT_EQUAL(60.000000,series_inductance(3,y));
  TEST_ASSERT_EQUAL(90.000000,series_inductance(3,z));
}
void test_series_capacitance(void)
{
  TEST_ASSERT_EQUAL(3.333333,series_capacitance(3,x));
  TEST_ASSERT_EQUAL(6.666667,series_capacitance(3,y));
  TEST_ASSERT_EQUAL(10.000000,series_capacitance(3,z));
}


void test_parallel_resistance(void)
{
  TEST_ASSERT_EQUAL(3.333333,parallel_resistance(3,x));
  TEST_ASSERT_EQUAL(6.666667,parallel_resistance(3,y));
  TEST_ASSERT_EQUAL(10.000000,parallel_resistance(3,z));
}
void test_parallel_inductance(void)
{
  TEST_ASSERT_EQUAL(3.000000,parallel_inductance(3,x));
  TEST_ASSERT_EQUAL(6.000000,parallel_inductance(3,y));
  TEST_ASSERT_EQUAL(10.000000,parallel_inductance(3,z));
}
void test_parallel_capacitance(void)
{
  TEST_ASSERT_EQUAL(30.333333,parallel_capacitance(3,x));
  TEST_ASSERT_EQUAL(60.666667,parallel_capacitance(3,y));
  TEST_ASSERT_EQUAL(90.000000,parallel_capacitance(3,z));
}

void test_Voltage(void){
	TEST_ASSERT_EQUAL_FLOAT(20.00,Voltage(5.0,4.0));        
}

void test_Current(void){

        TEST_ASSERT_EQUAL_FLOAT(5.00,Current(20.0,4.0));
}

void test_Power(void){

        TEST_ASSERT_EQUAL_FLOAT(2.0,Power(2.0,2.0));
}

void test_Resistancer(void){

        TEST_ASSERT_EQUAL_FLOAT(30.0,Resistancer(60.0,2.0));
}

void test_Rseries(void){

        TEST_ASSERT_EQUAL_FLOAT(14.0,Rseries(10.0,2.0,2.0));
}

void test_Rparllel(void){

        TEST_ASSERT_EQUAL_FLOAT(3.0,Rparllel(1.0,1.0,1.0));
}


void test_Star_to_Delta_conversion_R(void)
{
    TEST_ASSERT_EQUAL_FLOAT(81.00, Star_to_Delta_conversion_R(a));
    TEST_ASSERT_EQUAL_FLOAT(144.00, Star_to_Delta_conversion_R(b));
    TEST_ASSERT_EQUAL_FLOAT(225.00, Star_to_Delta_conversion_R(c));
}

void test_Delta_to_Star_conversion_R(void)
{
    TEST_ASSERT_EQUAL_FLOAT(9.00, Delta_to_Star_conversion_R(a));
    TEST_ASSERT_EQUAL_FLOAT(16.00, Delta_to_Star_conversion_R(b));
    TEST_ASSERT_EQUAL_FLOAT(25.00, Delta_to_Star_conversion_R(c));
}
void test_Star_to_Delta_conversion_L(void)
{
    TEST_ASSERT_EQUAL_FLOAT(81.00, Star_to_Delta_conversion_L(a));
    TEST_ASSERT_EQUAL_FLOAT(144.00, Star_to_Delta_conversion_L(b));
    TEST_ASSERT_EQUAL_FLOAT(225.00, Star_to_Delta_conversion_L(c));
}

void test_Delta_to_Star_conversion_L(void)
{
    TEST_ASSERT_EQUAL_FLOAT(9.00, Delta_to_Star_conversion_L(a));
    TEST_ASSERT_EQUAL_FLOAT(16.00, Delta_to_Star_conversion_L(b));
    TEST_ASSERT_EQUAL_FLOAT(25.00, Delta_to_Star_conversion_L(c));
}
void test_Star_to_Delta_conversion_C(void)
{
    TEST_ASSERT_EQUAL_FLOAT(9.00, Star_to_Delta_conversion_C(a));
    TEST_ASSERT_EQUAL_FLOAT(16.00, Star_to_Delta_conversion_C(b));
    TEST_ASSERT_EQUAL_FLOAT(25.00, Star_to_Delta_conversion_C(c));
}

void test_Delta_to_Star_conversion_C(void)
{
    TEST_ASSERT_EQUAL_FLOAT(81.00, Delta_to_Star_conversion_C(a));
    TEST_ASSERT_EQUAL_FLOAT(144.00, Delta_to_Star_conversion_C(b));
    TEST_ASSERT_EQUAL_FLOAT(225.00, Delta_to_Star_conversion_C(c));
}

void test_V_to_I_trans(void)
{
    TEST_ASSERT_EQUAL_FLOAT(2.00, V_to_I_trans(10.00, 5.00));
    TEST_ASSERT_EQUAL_FLOAT(25.00, V_to_I_trans(100.00, 4.00));
    TEST_ASSERT_EQUAL_FLOAT(4.00, V_to_I_trans(64.00, 16.00));
}

void test_I_to_V_trans(void)
{
    TEST_ASSERT_EQUAL_FLOAT(50.00, I_to_V_trans(10.00, 5.00));
    TEST_ASSERT_EQUAL_FLOAT(400.00, I_to_V_trans(100.00, 4.00));
    TEST_ASSERT_EQUAL_FLOAT(1024.00, I_to_V_trans(64.00, 16.00));
}

void test_Power_Factor_RL(void)
{
    TEST_ASSERT_EQUAL_FLOAT(0.3713907, Power_Factor_RL(100.0, 5.00, 50.00));
    TEST_ASSERT_EQUAL_FLOAT(0.9961503, Power_Factor_RL(500.0, 2.00, 22.00));
    TEST_ASSERT_EQUAL_FLOAT(0.2455756, Power_Factor_RL(190.0, 10.00, 75.00));
}

void test_Power_Factor_RC(void)
{
    TEST_ASSERT_EQUAL_FLOAT(1.00, Power_Factor_RC(100.0, 5.00, 50.00));
    TEST_ASSERT_EQUAL_FLOAT(0.9998853, Power_Factor_RC(500.0, 0.006, 22.00));
    TEST_ASSERT_EQUAL_FLOAT(0.9975468, Power_Factor_RC(190.0, 0.00100, 75.00));
}

void test_Power_Factor_RLC(void)
{
    TEST_ASSERT_EQUAL_FLOAT(0.3719036, Power_Factor_RLC(100.0, 5.00, 0.05, 50.00));
    TEST_ASSERT_EQUAL_FLOAT(0.9961543, Power_Factor_RLC(500.0, 2.00, 2.00, 22.00));
    TEST_ASSERT_EQUAL_FLOAT(0.2455811, Power_Factor_RLC(190.0, 10.00, 0.7500, 75.00));
}

void test_Equivalent_impedance_RL(void)
{
    TEST_ASSERT_EQUAL_FLOAT(269.2582, Equivalent_impedance_RL(100.0, 5.00, 50.00));
    TEST_ASSERT_EQUAL_FLOAT(501.9323, Equivalent_impedance_RL(500.0, 2.00, 22.00));
    TEST_ASSERT_EQUAL_FLOAT(773.6924, Equivalent_impedance_RL(190.0, 10.00, 75.00));
}

void test_Equivalent_impedance_RC(void)
{
    TEST_ASSERT_EQUAL_FLOAT(100.00, Equivalent_impedance_RC(100.0, 5.00, 50.00));
    TEST_ASSERT_EQUAL_FLOAT(500.00, Equivalent_impedance_RC(500.0, 2.00, 22.00));
    TEST_ASSERT_EQUAL_FLOAT(190.00, Equivalent_impedance_RC(190.0, 10.00, 75.00));
}

void test_Equivalent_impedance_RLC(void)
{
    TEST_ASSERT_EQUAL_FLOAT(268.8869, Equivalent_impedance_RLC(100.0, 5.00, 0.05, 50.00));
    TEST_ASSERT_EQUAL_FLOAT(501.9303, Equivalent_impedance_RLC(500.0, 2.00, 2.00, 22.00));
    TEST_ASSERT_EQUAL_FLOAT(773.6752, Equivalent_impedance_RLC(190.0, 10.00, 0.750, 75.00));
}

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_Star_to_Delta_conversion_R);
    RUN_TEST(test_Delta_to_Star_conversion_R);
    RUN_TEST(test_Star_to_Delta_conversion_L);
    RUN_TEST(test_Delta_to_Star_conversion_L);
    RUN_TEST(test_Star_to_Delta_conversion_C);
    RUN_TEST(test_Delta_to_Star_conversion_C);
    RUN_TEST(test_V_to_I_trans);
    RUN_TEST(test_I_to_V_trans);
    RUN_TEST(test_Power_Factor_RL);
    RUN_TEST(test_Power_Factor_RC);
    RUN_TEST(test_Power_Factor_RLC);
    RUN_TEST(test_Equivalent_impedance_RL);
    RUN_TEST(test_Equivalent_impedance_RC);
    RUN_TEST(test_Equivalent_impedance_RLC);
    RUN_TEST(test_calculate_ampacity);
    RUN_TEST(test_calculate_derating_temp);
    RUN_TEST(test_calculate_derating_depth);
    RUN_TEST(test_calculate_voltagedrop);
    RUN_TEST(test_series_resistance);
    RUN_TEST(test_series_capacitance);
    RUN_TEST(test_series_inductance);
    RUN_TEST(test_parallel_resistance);
    RUN_TEST(test_parallel_capacitance);
    RUN_TEST(test_parallel_inductance);
    RUN_TEST(test_Voltage);
    RUN_TEST(test_Current);
    RUN_TEST(test_Power);
    RUN_TEST(test_Resistancer);
    RUN_TEST(test_Rseries);
    RUN_TEST(test_Rparllel);
    return UNITY_END();
}
