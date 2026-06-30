#include "float_mat.h"

#include <stdlib.h>

LincStatus MatAddF(MatrixF *a, MatrixF *b, MatrixF *out) {
  /* reject null pointers for either matrix struct or their underlying data buffers */
  if (!a || !b || !out || !a->data || !b->data)
    return LINC_ERR_NULL_PTR;

  /* both matrices must have strictly positive dimensions */
  if (a->cols <= 0 || a->rows <= 0 || b->cols <= 0 || b->rows <= 0)
    return LINC_ERR_INVALID_SHAPE;

  /* element-wise addition requires identical shapes */
  if (a->rows != b->rows || a->cols != b->cols)
    return LINC_ERR_DIM_DISMATCH;

  /* total number of elements to process (shapes match, so a and b are interchangeable here) */
  size_t n = a->rows * a->cols;

  /* allocate the output buffer; caller owns this memory and must free it */
  out->data = malloc(n * sizeof(float));
  if (!out->data)
    return LINC_ERR_ALLOC;

  /* output shares the same shape as the inputs */
  out->rows = a->rows;
  out->cols = a->cols;

  /* perform the element-wise addition */
  for (size_t i = 0; i < n; i++)
    out->data[i] = a->data[i] + b->data[i];

  return LINC_OK;
}

LincStatus MatSubF(MatrixF *a, MatrixF *b, MatrixF *out) {
  /* reject null pointers for either matrix struct or their underlying data buffers */
  if (!a || !b || !out || !a->data || !b->data)
    return LINC_ERR_NULL_PTR;

  /* both matrices must have strictly positive dimensions */
  if (a->cols <= 0 || a->rows <= 0 || b->cols <= 0 || b->rows <= 0)
    return LINC_ERR_INVALID_SHAPE;

  /* element-wise addition requires identical shapes */
  if (a->rows != b->rows || a->cols != b->cols)
    return LINC_ERR_DIM_DISMATCH;

  /* total number of elements to process (shapes match, so a and b are interchangeable here) */
  size_t n = a->rows * a->cols;

  /* allocate the output buffer; caller owns this memory and must free it */
  out->data = malloc(n * sizeof(float));
  if (!out->data)
    return LINC_ERR_ALLOC;

  /* output shares the same shape as the inputs */
  out->rows = a->rows;
  out->cols = a->cols;

  /* perform the element-wise addition */
  for (size_t i = 0; i < n; i++)
    out->data[i] = a->data[i] - b->data[i];

  return LINC_OK;
}
