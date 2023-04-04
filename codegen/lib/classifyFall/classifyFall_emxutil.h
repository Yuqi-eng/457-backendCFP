/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * classifyFall_emxutil.h
 *
 * Code generation for function 'classifyFall_emxutil'
 *
 */

#ifndef CLASSIFYFALL_EMXUTIL_H
#define CLASSIFYFALL_EMXUTIL_H

/* Include files */
#include "classifyFall_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
extern void
c_emxFreeMatrix_classreg_learni(c_classreg_learning_classif_Com pMatrix[3]);

extern void
c_emxFreeStruct_classreg_learni(c_classreg_learning_classif_Com *pStruct);

extern void
c_emxInitMatrix_classreg_learni(c_classreg_learning_classif_Com pMatrix[3]);

extern void
c_emxInitStruct_classreg_learni(c_classreg_learning_classif_Com *pStruct);

extern void emxEnsureCapacity_real_T(emxArray_real_T *emxArray, int oldNumel);

extern void emxFree_real_T(emxArray_real_T **pEmxArray);

extern void emxInit_real_T(emxArray_real_T **pEmxArray);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (classifyFall_emxutil.h) */
