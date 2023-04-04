/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Gaussian.h
 *
 * Code generation for function 'Gaussian'
 *
 */

#ifndef GAUSSIAN_H
#define GAUSSIAN_H

/* Include files */
#include "classifyFall_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void Gaussian(const emxArray_real_T *svT, const double svInnerProduct_data[],
              const int svInnerProduct_size[2], const double x[204],
              double kernelProduct_data[], int kernelProduct_size[2]);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (Gaussian.h) */
