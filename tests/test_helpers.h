#ifndef TEST_HELPERS_H
#define TEST_HELPERS_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdio.h>

#define HEADER(title)                                      \
  printf("=-------------------------=\n"                   \
         "  LINC : %s START                               \n" \
         "=-------------------------=\n", title)

#define FOOTER(title)                                      \
  printf("=-------------------------=\n"                   \
         "  LINC : %s END                                 \n" \
         "=-------------------------=\n", title)

#define SECTION(name) printf("\n-- %s --\n", name)
#define TEST(id, msg) printf("\n[TEST %02d] %s\n", (id), (msg))

#define ASSERT(cond, msg)                                 \
  do {                                                    \
    if (cond) {                                           \
      printf("  [ OK ] %s\n", (msg));                     \
      linc_pass_count++;                                \
    } else {                                              \
      printf("  [FAIL] %s (line %d)\n", (msg), __LINE__); \
      linc_fail_count++;                                \
    }                                                     \
  } while (0)

#define DEBUG(msg) printf("  [DEBUG] %s\n", (msg))

extern int linc_pass_count;
extern int linc_fail_count;

#ifdef __cplusplus
}
#endif

#endif
