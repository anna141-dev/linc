#include "mat_utils.h"

#include <stdio.h>

void MatPrintI(MatrixI *m) {
  for (size_t i = 0; i < m->cols; i++) {
    for (size_t j = 0; j < m->cols; j++) {
      printf("%2d ", m->data[i * 3 + j]);
    }
    printf("\n");
  }
}

void MatPrintF(MatrixF *m) {
  for (size_t i = 0; i < m->cols; i++) {
    for (size_t j = 0; j < m->cols; j++) {
      printf("%2f ", m->data[i * 3 + j]);
    }
    printf("\n");
  }
}

void MatPrintD(MatrixD *m) {
  for (size_t i = 0; i < m->cols; i++) {
    for (size_t j = 0; j < m->cols; j++) {
      printf("%2f ", m->data[i * 3 + j]);
    }
    printf("\n");
  }
}
