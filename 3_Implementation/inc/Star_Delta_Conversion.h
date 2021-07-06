/**
 * @file Star_Delta_Conversion.h
 * @author HusainKhan
 * @brief Header file for star delta conversion
 * @version 0.1
 * @date 2021-07-04
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef _STAR_DELTA_CONVERSION_H
#define _STAR_DELTA_CONVERSION_H
/**
 * @brief Function to for converison of star to delta for resistive circuit
 * 
 * @param ptr array of resistors
 * @return float 
 */
float Star_to_Delta_conversion_R(int *ptr);
/**
 * @brief Function to for converison of delta to star for resistive circuit
 * 
 * @param ptr array of resistors
 * @return float 
 */
float Delta_to_Star_conversion_R(int *ptr);
/**
 * @brief Function to for converison of star to delta for inductive circuit
 * 
 * @param ptr array of inductors
 * @return float 
 */
float Star_to_Delta_conversion_L(int *ptr);
/**
 * @brief Function to for converison of delta to star for inductive circuit
 * 
 * @param ptr array of inductors
 * @return float 
 */
float Delta_to_Star_conversion_L(int *ptr);
/**
 * @brief Function to for converison of star to delta for capacitive circuit
 * 
 * @param ptr array of capacitors
 * @return float 
 */
float Star_to_Delta_conversion_C(int *ptr);
/**
 * @brief Function to for converison of delta to star for capacitive circuit
 * 
 * @param ptr array of capacitors
 * @return float 
 */
float Delta_to_Star_conversion_C(int *ptr);
/**
 * @brief function to merge all star delta functions
 * 
 */
void convert();
void basic_circuit_solver();
#endif
