/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * classifyFall_emxutil.c
 *
 * Code generation for function 'classifyFall_emxutil'
 *
 */

/* Include files */
#include "classifyFall_emxutil.h"
#include "classifyFall_types.h"
#include "rt_nonfinite.h"
#include <stdlib.h>
#include <string.h>

/* Function Definitions */
void c_emxFreeMatrix_classreg_learni(c_classreg_learning_classif_Com pMatrix[3])
{
  int i;
  for (i = 0; i < 3; i++) {
    c_emxFreeStruct_classreg_learni(&pMatrix[i]);
  }
}

void c_emxFreeStruct_classreg_learni(c_classreg_learning_classif_Com *pStruct)
{
  emxFree_real_T(&pStruct->SupportVectorsT);
}

void c_emxInitMatrix_classreg_learni(c_classreg_learning_classif_Com pMatrix[3])
{
  int i;
  for (i = 0; i < 3; i++) {
    c_emxInitStruct_classreg_learni(&pMatrix[i]);
  }
}

void c_emxInitStruct_classreg_learni(c_classreg_learning_classif_Com *pStruct)
{
  pStruct->Alpha.size[0] = 0;
  emxInit_real_T(&pStruct->SupportVectorsT);
}

void emxEnsureCapacity_real_T(emxArray_real_T *emxArray, int oldNumel)
{
  int i;
  int newNumel;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }
  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }
  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }
    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i *= 2;
      }
    }
    newData = calloc((unsigned int)i, sizeof(double));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(double) * (unsigned int)oldNumel);
      if (emxArray->canFreeData) {
        free(emxArray->data);
      }
    }
    emxArray->data = (double *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

void emxFree_real_T(emxArray_real_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_real_T *)NULL) {
    if (((*pEmxArray)->data != (double *)NULL) && (*pEmxArray)->canFreeData) {
      free((*pEmxArray)->data);
    }
    free((*pEmxArray)->size);
    free(*pEmxArray);
    *pEmxArray = (emxArray_real_T *)NULL;
  }
}

void emxInit_real_T(emxArray_real_T **pEmxArray)
{
  emxArray_real_T *emxArray;
  int i;
  *pEmxArray = (emxArray_real_T *)malloc(sizeof(emxArray_real_T));
  emxArray = *pEmxArray;
  emxArray->data = (double *)NULL;
  emxArray->numDimensions = 2;
  emxArray->size = (int *)malloc(sizeof(int) * 2U);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < 2; i++) {
    emxArray->size[i] = 0;
  }
}

/* End of code generation (classifyFall_emxutil.c) */
