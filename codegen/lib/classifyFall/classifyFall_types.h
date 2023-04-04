/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * classifyFall_types.h
 *
 * Code generation for function 'classifyFall'
 *
 */

#ifndef CLASSIFYFALL_TYPES_H
#define CLASSIFYFALL_TYPES_H

/* Include files */
#include "rtwtypes.h"

/* Type Definitions */
#ifndef enum_c_classreg_learning_coderutils_
#define enum_c_classreg_learning_coderutils_
enum c_classreg_learning_coderutils_
{
  Logit = 0, /* Default value */
  Doublelogit,
  Invlogit,
  Ismax,
  Sign,
  Symmetric,
  Symmetricismax,
  Symmetriclogit,
  Identity
};
#endif /* enum_c_classreg_learning_coderutils_ */
#ifndef typedef_c_classreg_learning_coderutils_
#define typedef_c_classreg_learning_coderutils_
typedef enum c_classreg_learning_coderutils_ c_classreg_learning_coderutils_;
#endif /* typedef_c_classreg_learning_coderutils_ */

#ifndef enum_d_classreg_learning_coderutils_
#define enum_d_classreg_learning_coderutils_
enum d_classreg_learning_coderutils_
{
  linear = 1, /* Default value */
  gaussian = 2,
  rbf = 2,
  polynomial = 3
};
#endif /* enum_d_classreg_learning_coderutils_ */
#ifndef typedef_d_classreg_learning_coderutils_
#define typedef_d_classreg_learning_coderutils_
typedef enum d_classreg_learning_coderutils_ d_classreg_learning_coderutils_;
#endif /* typedef_d_classreg_learning_coderutils_ */

#ifndef struct_emxArray_real_T_4489
#define struct_emxArray_real_T_4489
struct emxArray_real_T_4489 {
  double data[4489];
  int size[1];
};
#endif /* struct_emxArray_real_T_4489 */
#ifndef typedef_emxArray_real_T_4489
#define typedef_emxArray_real_T_4489
typedef struct emxArray_real_T_4489 emxArray_real_T_4489;
#endif /* typedef_emxArray_real_T_4489 */

#ifndef struct_emxArray_real_T
#define struct_emxArray_real_T
struct emxArray_real_T {
  double *data;
  int *size;
  int allocatedSize;
  int numDimensions;
  boolean_T canFreeData;
};
#endif /* struct_emxArray_real_T */
#ifndef typedef_emxArray_real_T
#define typedef_emxArray_real_T
typedef struct emxArray_real_T emxArray_real_T;
#endif /* typedef_emxArray_real_T */

#ifndef typedef_c_classreg_learning_classif_Com
#define typedef_c_classreg_learning_classif_Com
typedef struct {
  emxArray_real_T_4489 Alpha;
  double Bias;
  emxArray_real_T *SupportVectorsT;
  double Scale;
  double Order;
  double Mu[204];
  double Sigma[204];
  d_classreg_learning_coderutils_ KernelFunction;
  int ClassNamesLength[2];
  c_classreg_learning_coderutils_ ScoreTransform;
  double Prior[2];
  boolean_T ClassLogicalIndices[2];
  double Cost[4];
} c_classreg_learning_classif_Com;
#endif /* typedef_c_classreg_learning_classif_Com */

#endif
/* End of code generation (classifyFall_types.h) */
