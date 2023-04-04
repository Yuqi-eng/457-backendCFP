/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Gaussian.c
 *
 * Code generation for function 'Gaussian'
 *
 */

/* Include files */
#include "Gaussian.h"
#include "classifyFall_types.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <string.h>

/* Function Definitions */
void Gaussian(const emxArray_real_T *svT, const double svInnerProduct_data[],
              const int svInnerProduct_size[2], const double x[204],
              double kernelProduct_data[], int kernelProduct_size[2])
{
  double c_data[4489];
  double y_data[4489];
  double y[204];
  const double *svT_data;
  double b_x;
  double d;
  int bcoef;
  int boffset;
  int j;
  int k;
  int y_size_idx_1;
  short csz_idx_1;
  svT_data = svT->data;
  for (j = 0; j < 204; j++) {
    y[j] = -2.0 * x[j];
  }
  bcoef = svT->size[1];
  y_size_idx_1 = svT->size[1];
  for (j = 0; j < bcoef; j++) {
    boffset = j * 204;
    d = 0.0;
    for (k = 0; k < 204; k++) {
      d += y[k] * svT_data[boffset + k];
    }
    y_data[j] = d;
  }
  b_x = 0.0;
  for (j = 0; j < 204; j++) {
    d = x[j];
    b_x += d * d;
  }
  if (y_size_idx_1 != 0) {
    boffset = (y_size_idx_1 != 1);
    j = y_size_idx_1 - 1;
    for (k = 0; k <= j; k++) {
      c_data[k] = y_data[boffset * k] + b_x;
    }
  }
  if (svInnerProduct_size[1] == 1) {
    csz_idx_1 = (short)y_size_idx_1;
  } else if (y_size_idx_1 == 1) {
    csz_idx_1 = (short)svInnerProduct_size[1];
  } else if (y_size_idx_1 == svInnerProduct_size[1]) {
    csz_idx_1 = (short)y_size_idx_1;
  } else if (svInnerProduct_size[1] < y_size_idx_1) {
    csz_idx_1 = (short)svInnerProduct_size[1];
  } else {
    csz_idx_1 = (short)y_size_idx_1;
  }
  if (svInnerProduct_size[1] == 1) {
    kernelProduct_size[1] = (short)y_size_idx_1;
  } else if (y_size_idx_1 == 1) {
    kernelProduct_size[1] = (short)svInnerProduct_size[1];
  } else if (y_size_idx_1 == svInnerProduct_size[1]) {
    kernelProduct_size[1] = (short)y_size_idx_1;
  } else if (svInnerProduct_size[1] < y_size_idx_1) {
    kernelProduct_size[1] = (short)svInnerProduct_size[1];
  } else {
    kernelProduct_size[1] = (short)y_size_idx_1;
  }
  if (csz_idx_1 != 0) {
    boffset = (y_size_idx_1 != 1);
    bcoef = (svInnerProduct_size[1] != 1);
    j = csz_idx_1 - 1;
    for (k = 0; k <= j; k++) {
      kernelProduct_data[k] =
          c_data[boffset * k] + svInnerProduct_data[bcoef * k];
    }
  }
  kernelProduct_size[0] = 1;
  bcoef = kernelProduct_size[1] - 1;
  for (j = 0; j <= bcoef; j++) {
    kernelProduct_data[j] = -kernelProduct_data[j];
  }
  j = kernelProduct_size[1];
  for (k = 0; k < j; k++) {
    kernelProduct_data[k] = exp(kernelProduct_data[k]);
  }
}

/* End of code generation (Gaussian.c) */
