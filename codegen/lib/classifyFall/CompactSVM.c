/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * CompactSVM.c
 *
 * Code generation for function 'CompactSVM'
 *
 */

/* Include files */
#include "CompactSVM.h"
#include "Gaussian.h"
#include "classifyFall_emxutil.h"
#include "classifyFall_types.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
double CompactSVM_kernelScore(const double obj_Alpha_data[], double obj_Bias,
                              const emxArray_real_T *obj_SupportVectorsT,
                              const double X[204])
{
  emxArray_real_T *svT;
  double c_data[4489];
  double tmp_data[4489];
  double b_X[204];
  const double *obj_SupportVectorsT_data;
  double c;
  double *svT_data;
  int c_size[2];
  int b_i;
  int i;
  int i2;
  int k;
  obj_SupportVectorsT_data = obj_SupportVectorsT->data;
  emxInit_real_T(&svT);
  i = svT->size[0] * svT->size[1];
  svT->size[0] = 204;
  svT->size[1] = obj_SupportVectorsT->size[1];
  emxEnsureCapacity_real_T(svT, i);
  svT_data = svT->data;
  i2 = 204 * obj_SupportVectorsT->size[1];
  for (i = 0; i < i2; i++) {
    svT_data[i] = obj_SupportVectorsT_data[i] / 22.137661690129825;
  }
  if (svT->size[1] == 1) {
    c = 0.0;
    for (k = 0; k < 204; k++) {
      c += svT_data[k] * svT_data[k];
    }
    c_size[0] = 1;
    c_size[1] = 1;
    c_data[0] = c;
  } else {
    c_size[0] = 1;
    c_size[1] = svT->size[1];
    i = svT->size[1];
    i2 = 1;
    for (b_i = 0; b_i < i; b_i++) {
      int i1;
      i1 = i2 - 1;
      i2 += 204;
      c = 0.0;
      for (k = 0; k < 204; k++) {
        int c_tmp;
        c_tmp = i1 + k;
        c += svT_data[c_tmp] * svT_data[c_tmp];
      }
      c_data[b_i] = c;
    }
  }
  for (i = 0; i < 204; i++) {
    b_X[i] = X[i] / 22.137661690129825;
  }
  int tmp_size[2];
  Gaussian(svT, c_data, c_size, b_X, tmp_data, tmp_size);
  emxFree_real_T(&svT);
  c = 0.0;
  i2 = tmp_size[1];
  for (i = 0; i < i2; i++) {
    c += tmp_data[i] * obj_Alpha_data[i];
  }
  return c + obj_Bias;
}

/* End of code generation (CompactSVM.c) */
