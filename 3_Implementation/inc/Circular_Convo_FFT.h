
/**
 * @file Circular_Convo_FFt.h
 * @author Asmita Kajrolkar
 * @brief  Includes the functions to calculate Circular Convolution using FFT
 * @version 0.1
 * @date 2021-07-03
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef _CIRCULAR_CONVO_FFT_H
#define _CIRCULAR_CONVO_FFT_H
void circular_convolution();
void Fast_Circular_Convolve(float *x, int N, float *h, float *y);
void DITFFT_8_Point( int N, float x[8][2], float t[8][2]);
void DITFFT_4_Point( int N, float x[4][2], float t[4][2]);
#endif
