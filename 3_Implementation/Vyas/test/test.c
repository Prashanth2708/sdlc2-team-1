#include "../unity/unity_internals.h"
#include "../unity/unity.h"
#include "../inc/cable.h"

/* Required by the unity test framework */
void setUp(void)
{
}
/* Required by the unity test framework */
void tearDown(void)
{
}

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


int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_calculate_ampacity);
    RUN_TEST(test_calculate_derating_temp);
    RUN_TEST(test_calculate_derating_depth);
    RUN_TEST(test_calculate_voltagedrop);
    return UNITY_END();
}