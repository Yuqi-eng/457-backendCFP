/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * classifyFall.c
 *
 * Code generation for function 'classifyFall'
 *
 */

/* Include files */
#include "classifyFall.h"
#include "CompactClassificationECOC.h"
#include "classifyFall_emxutil.h"
#include "classifyFall_types.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
double classifyFall(const double X[204])
{
  static c_classreg_learning_classif_Com mdl_BinaryLearners[3];
  double d_expl_temp[9];
  double mdl_CodingMatrix[9];
  double mdl_Prior[3];
  double label;
  int expl_temp[3];
  char e_expl_temp[3];
  boolean_T c_expl_temp[3];
  c_classreg_learning_coderutils_ b_expl_temp;
  /* CLASSIFY fall events using SVM Model */
  c_emxInitMatrix_classreg_learni(mdl_BinaryLearners);
  c_CompactClassificationECOC_Com(expl_temp, &b_expl_temp, mdl_Prior,
                                  c_expl_temp, d_expl_temp, mdl_BinaryLearners,
                                  mdl_CodingMatrix, e_expl_temp);
  label = c_CompactClassificationECOC_pre(mdl_Prior, mdl_BinaryLearners,
                                          mdl_CodingMatrix, X);
  c_emxFreeMatrix_classreg_learni(mdl_BinaryLearners);
  return label;
}

/* End of code generation (classifyFall.c) */
