/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_classifyFall_api.h
 *
 * Code generation for function 'classifyFall'
 *
 */

#ifndef _CODER_CLASSIFYFALL_API_H
#define _CODER_CLASSIFYFALL_API_H

/* Include files */
#include "emlrt.h"
#include "tmwtypes.h"
#include <string.h>

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
real_T classifyFall(real_T X[204]);

void classifyFall_api(const mxArray *prhs, const mxArray **plhs);

void classifyFall_atexit(void);

void classifyFall_initialize(void);

void classifyFall_terminate(void);

void classifyFall_xil_shutdown(void);

void classifyFall_xil_terminate(void);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (_coder_classifyFall_api.h) */
