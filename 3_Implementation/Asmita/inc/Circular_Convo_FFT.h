/**
 * @file Circular_Convo_FFT.h
 * @author Asmita Kajrolkar
 * @brief  The library which contains the functions to calculate the Circular Convolution using FFT
 * @version 0.1
 * @date 2021-07-04
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef _CIRCULAR_CONVO_FFT_H
#define _CIRCULAR_CONVO_FFT_H
/**
 * @brief Takes the input from user
 */
void circular_convolution();
/**
 * @brief Calculates FFT 
 * @param x
 * @param N
 * @param h
 * @param y
 
 */
void Fast_Circular_Convolve(float *x, int N, float *h, float *y);
/**
 * @brief Calculates Circular Convolution for N=4 
 
 */
void DITFFT_8_Point( int N, float x[8][2], float t[8][2]);
/**
 * @brief Calculates Circular Convolution for N=8 
 
 */
void DITFFT_4_Point( int N, float x[4][2], float t[4][2]);
#endif
