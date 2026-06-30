#ifndef TYPES_H
#define TYPES_H

#include <stdint.h>

typedef float f32;
typedef double f64;

typedef enum {
  LINC_OK = 0, /**< success */

  LINC_ERR_ALLOC, /**< allocation error */

  LINC_ERR_NULL_PTR, /**< when passed pointers == NULL */
  LINC_ERR_DIM_DISMATCH, /**< e.g addition of matrices with different shapes */

  LINC_ERR_INVALID_SHAPE, /**< rows/columns <= 0 */

  LINC_ERR_SINGULAR, /**< for inversion/decomposition */
  LINC_ERR_NOT_SQUARE, /**< operations requiring a square matrix */

  LINC_ERR_OVERFLOW, /**< overflow / numerical domain */
  LINC_ERR_DOMAIN, /**< e.g. square root of a negative number */
} LincStatus;

/**
 * Struct representing an array that stores numbers of type int
 */
typedef struct {
  size_t rows; /**< The total rows in the matrix */
  size_t cols; /**< The total number of columns in the matrix */
  int *data; /**< The data saved in the matrix */
} MatrixI;

/**
 * Struct representing an array that stores numbers of type float
 */
typedef struct {
  size_t rows; /**< The total rows in the matrix */
  size_t cols; /**< The total number of columns in the matrix */

  f32 *data; /**< The data saved in the matrix */
} MatrixF;

/**
 * Struct representing an array that stores numbers of type double
 */
typedef struct {
  size_t rows; /**< The total rows in the matrix */
  size_t cols; /**< The total number of columns in the matrix */
  f64 *data; /**< The data saved in the matrix */
} MatrixD;

#endif
