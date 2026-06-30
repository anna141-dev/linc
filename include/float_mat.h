#ifndef FLOAT_MAT_H
#define FLOAT_MAT_H

#include "types.h"

/**
 * Adds all elements from matrices a and b
 * and stores them in out
 *
 * @param a Matrix A
 * @param b Matrix B
 * @param out The matrix with the result of operations
 *
 * @retval LINC_OK on success,
 * @retval LINC_ERR_ALLOC if it fails to allocate memory
 * @retval LINC_ERR_NULL_PTR if a, b or out are NULL
 * @retval LINC_ERR_DIM_DISMATCH if the matrices have different shapes
 * @retval LINC_ERR_INVALID_SHAPE if the total number of rows or columns in one of the matrices is <= 0
 *
 * @return LincStatus indicating success or failure
 */
LincStatus MatAddI(MatrixI *a, MatrixI *b, MatrixI *out);

/**
 * Adds all elements from matrices a and b
 * and stores them in out
 *
 * @param a Matrix A
 * @param b Matrix B
 * @param out The matrix with the result of operations
 *
 * @retval LINC_OK on success,
 * @retval LINC_ERR_ALLOC if it fails to allocate memory
 * @retval LINC_ERR_NULL_PTR if a, b or out are NULL
 * @retval LINC_ERR_DIM_DISMATCH if the matrices have different shapes
 * @retval LINC_ERR_INVALID_SHAPE if the total number of rows or columns in one of the matrices is <= 0
 *
 * @return LincStatus indicating success or failure
 */
LincStatus MatSubI(MatrixI *a, MatrixI *b, MatrixI *out);

#endif
