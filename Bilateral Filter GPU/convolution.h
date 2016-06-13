#ifndef CONVOLUTION_H
#define CONVOLUTION_H

#include "include_file.h"

__global__ void convolution(float *, const float *, const float* , const int ,  const dim3 , const int );

void callingConvolution(cv::Mat image, float *dev_cube_wi_out, float *dev_cube_w_out, float *dev_cube_wi, float *dev_cube_w, float *dev_kernel, int kernel_size);

void swap(float** a, float** b);

#endif