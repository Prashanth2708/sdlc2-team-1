/**
 * @file Source_Transformation.h
 * @author HusainKhan
 * @brief header file for source transformation
 * @version 0.1
 * @date 2021-07-04
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef _SOURCE_TRANSFORMATION_H
#define _SOURCE_TRANSFORMATION_H
/**
 * @brief function to convert Volatge source into Current source
 * 
 * @param v Value of Voltage source in volts
 * @param r Value of resistance in ohm's
 * @return float 
 */
float V_to_I_trans(float v, float r);
/**
 * @brief function to convert Current source into Voltage source
 * 
 * @param i value of Current source in Ampere
 * @param r Value of resistance in ohm's
 * @return float 
 */
float I_to_V_trans(float i, float r);
/**
 * @brief function for source transformation
 * 
 */
void sourcetrans();

#endif
