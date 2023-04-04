/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * CompactClassificationECOC.h
 *
 * Code generation for function 'CompactClassificationECOC'
 *
 */

#ifndef COMPACTCLASSIFICATIONECOC_H
#define COMPACTCLASSIFICATIONECOC_H

/* Include files */
#include "classifyFall_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void c_CompactClassificationECOC_Com(
    int obj_ClassNamesLength[3],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[3],
    boolean_T obj_ClassLogicalIndices[3], double obj_Cost[9],
    c_classreg_learning_classif_Com obj_BinaryLearners[3],
    double obj_CodingMatrix[9], char obj_ScoreType[3]);

double c_CompactClassificationECOC_pre(
    const double obj_Prior[3],
    const c_classreg_learning_classif_Com obj_BinaryLearners[3],
    const double obj_CodingMatrix[9], const double Xin[204]);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (CompactClassificationECOC.h) */
