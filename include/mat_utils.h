#ifndef MAT_UTILS_H
#define MAT_UTILS_H

#include "types.h"

/**
 * Iterates over a integer matrix, printing each
 * element in a 2d shape.
 *
 * @param m The matrix to display
 */
void MatPrintI(MatrixI *m);

/**
 * Iterates over a float matrix, printing each
 * element in a 2d shape.
 *
 * @param m The matrix to display
 */
void MatPrintF(MatrixF *m);

/**
 * Iterates over a double matrix, printing each
 * element in a 2d shape.
 *
 * @param m The matrix to display
 */
void MatPrintD(MatrixD *m);

#endif
