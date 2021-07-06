/**
 * @file Series_RLC.h
 * @author HusainKhan
 * @brief header file for series RLC circuit
 * @version 0.1
 * @date 2021-07-04
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef _SERIES_RLC_H
#define _SERIES_RLC_H
/**
 * @brief function to calculate equivalent impedance in series RL circuit
 * 
 * @param r resistance in ohm's
 * @param l inductance in H
 * @param w frequency in rad/s
 * @return float 
 */
float Equivalent_impedance_RL(float r, float l, float w);
/**
 * @brief function to calculate equivalent impedance in series RC circuit
 * 
 * @param r resistance in ohm's
 * @param c capacitance in F
 * @param w frequency in rad/s
 * @return float 
 */
float Equivalent_impedance_RC(float r, float c, float w);
/**
 * @brief function to calculate equivalent impedance in series RLC circuit
 * 
 * @param r resistance in ohm's
 * @param l inductance in H
 * @param c capacitance in F
 * @param w frequency in rad/s
 * @return float 
 */
float Equivalent_impedance_RLC(float r, float l, float c, float w);
/**
 * @brief function to calculate power factor in series RL circuit
 * 
 * @param r resistance in ohm's
 * @param l inductance in H
 * @param w frequency in rad/s
 * @return float 
 */
float Power_Factor_RL(float r, float l, float w);
/**
 * @brief function to calculate power factor in series RC circuit
 * 
 * @param r resistance in ohm's
 * @param c capacitance in F
 * @param w frequency in rad/s
 * @return float 
 */
float Power_Factor_RC(float r, float c, float w);
/**
 * @brief function to calculate power factor in series RLC circuit
 * 
 * @param r resistance in ohm's
 * @param l inductance in H
 * @param c capacitance in F
 * @param w frequency in rad/s
 * @return float 
 */
float Power_Factor_RLC(float r, float l, float c, float w);
/**
 * @brief function for selection of type of circuit
 * 
 * @return int 
 */
int Circuit_Selection();
/**
 * @brief function for combining of all equivalent impedance functions
 * 
 */
void equivalent();
/**
 * @brief function for combining of all power factor functions
 * 
 */
void powerfactor();
#endif
