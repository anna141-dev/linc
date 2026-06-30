#include "int_mat.h"

#include <stdlib.h>

LincStatus MatAddI(MatrixI *a, MatrixI *b, MatrixI *out) {
  if (!a || !b || !a->data || !b->data)
    return LINC_ERR_NULL_PTR;

  if (a->cols <= 0 || a->rows <= 0 || b->cols <= 0 || b->rows <= 0)
    return LINC_ERR_INVALID_SHAPE;

  if (a->rows != b->rows || a->cols != b->cols)
    return LINC_ERR_DIM_DISMATCH;

  size_t n = a->rows * a->cols;

  out->data = malloc(n * sizeof(double));
  if (!out->data)
    return LINC_ERR_ALLOC;

  out->rows = a->rows;
  out->cols = a->cols;

  for (size_t i = 0; i < n; i++)
    out->data[i] = a->data[i] + b->data[i];

  return LINC_OK;
}

LincStatus MatSubI(MatrixI *a, MatrixI *b, MatrixI *out) {
  if (!a || !b || !a->data || !b->data)
    return LINC_ERR_NULL_PTR;

  if (a->cols <= 0 || a->rows <= 0 || b->cols <= 0 || b->rows <= 0)
    return LINC_ERR_INVALID_SHAPE;

  if (a->rows != b->rows || a->cols != b->cols)
    return LINC_ERR_DIM_DISMATCH;

  size_t n = a->rows * a->cols;

  out->data = malloc(n * sizeof(double));
  if (!out->data)
    return LINC_ERR_ALLOC;

  out->rows = a->rows;
  out->cols = a->cols;

  for (size_t i = 0; i < n; i++)
    out->data[i] = a->data[i] - b->data[i];

  return LINC_OK;
}

