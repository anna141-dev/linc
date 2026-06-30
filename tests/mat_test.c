#include <stdio.h>
#include <stdlib.h>

#include "linc.h"

#include "test_helpers.h"

void run_mat_tests(void) {
  HEADER("LINC Tests");

  /*Setup*/
  SECTION("Matrix Setup");

  TEST(1, "Creating 3x3 matrices A and B");
  MatrixI *a = malloc(sizeof(MatrixI));
  MatrixI *b = malloc(sizeof(MatrixI));
  MatrixI *out = malloc(sizeof(MatrixI));

  a->rows = 3, a->cols = 3;
  b->rows = 3, b->cols = 3;
  out->rows = 0, out->cols = 0, out->data = NULL;

  a->data = malloc(3 * 3 * sizeof(int));
  b->data = malloc(3 * 3 * sizeof(int));

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      a->data[i * 3 + j] = i + j * 2;
      b->data[i * 3 + j] = i + j * 2;
    }
  }

  ASSERT(a->data != NULL, "Matrix A data allocated");
  ASSERT(b->data != NULL, "Matrix B data allocated");
  ASSERT(out->data == NULL, "Matrix Out starts empty");

  TEST(2, "Printing Matrix A");
  MatPrintI(a);

  TEST(3, "Printing Matrix B");
  MatPrintI(b);

  /*Addition*/
  SECTION("Matrix Addition");

  TEST(4, "Adding A + B into Out");
  MatAddI(a, b, out);

  ASSERT(out->rows == 3, "Out has 3 rows after addition");
  ASSERT(out->cols == 3, "Out has 3 cols after addition");
  ASSERT(out->data != NULL, "Out data allocated after addition");

  TEST(5, "Printing Out after Addition");
  MatPrintI(out);

  /*Subtraction*/
  SECTION("Matrix Subtraction");

  TEST(6, "Subtracting A - Out into Out");
  MatSubI(a, out, out);

  ASSERT(out->rows == 3, "Out has 3 rows after subtraction");
  ASSERT(out->cols == 3, "Out has 3 cols after subtraction");

  TEST(7, "Printing Out after Subtraction");
  MatPrintI(out);

  /*Memory cleanup*/
  SECTION("Memory Cleanup");

  TEST(8, "Freeing all matrices");
  free(a->data); free(a);
  free(b->data); free(b);
  free(out->data); free(out);

  ASSERT(1, "All matrices freed");
}