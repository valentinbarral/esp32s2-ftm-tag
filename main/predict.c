/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * predict.c
 *
 * Code generation for function 'predict'
 *
 */

/* Include files */
#include "predict.h"
#include "CompactRegressionTree.h"
#include "predict_data.h"
#include "predict_initialize.h"
#include "predict_types.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void predict(const emxArray_real_T *X, emxArray_real_T *result)
{
  if (!isInitialized_predict) {
    predict_initialize();
  }
  /*  Autogenerated by MATLAB, 10-Jun-2021 18:28:26 */
  /*  Autogenerated by MATLAB, 10-Jun-2021 18:28:26 */
  /*  Predict Inputs: X */
  CompactRegressionTree_predict(model.CutPredictorIndex, model.Children,
                                model.CutPoint, model.NanCutPoints,
                                model.NodeMean, X, result);
}

/* End of code generation (predict.c) */