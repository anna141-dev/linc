#include <stdio.h>

int linc_pass_count = 0;
int linc_fail_count = 0;

void run_mat_tests(void);

int main(void) {
  printf("=———————————————————————————————————=\n");
  printf(" LINC TEST RUNNER\n");
  printf("=———————————————————————————————————=\n\n");

  run_mat_tests();

  printf("\n=———————————————————————————————————=\n");
  printf(" SUMMARY\n");
  printf("=———————————————————————————————————=\n");
  printf("  PASSED: %d\n", linc_pass_count);
  printf("  FAILED: %d\n", linc_fail_count);
  printf("=———————————————————————————————————=\n");

  return (linc_fail_count > 0) ? 1 : 0;
}
