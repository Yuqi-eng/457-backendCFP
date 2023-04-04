/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * CompactSVM.h
 *
 * Code generation for function 'CompactSVM'
 *
 */

#ifndef COMPACTSVM_H
#define COMPACTSVM_H

/* Include files */
#include "classifyFall_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
double CompactSVM_kernelScore(const double obj_Alpha_data[], double obj_Bias,
                              const emxArray_real_T *obj_SupportVectorsT,
                              const double X[204]);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (CompactSVM.h) */
