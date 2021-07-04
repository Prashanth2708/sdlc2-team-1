#include "../unity/unity.h"
#include"../unity/unity_internals.h"

/* Modify these two lines according to the project */
#include"../inc/division.h"
#include"../inc/parallel.h"
#include"../inc/series.h"

#define PROJECT_NAME  "SDLC"


/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

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
/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_series_resistance);
  RUN_TEST(test_series_capacitance);
  RUN_TEST(test_series_inductance);
  RUN_TEST(test_parallel_resistance);
  RUN_TEST(test_parallel_capacitance);
  RUN_TEST(test_parallel_inductance);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

