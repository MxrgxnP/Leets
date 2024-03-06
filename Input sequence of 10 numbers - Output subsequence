#include <stdio.h>
#define D 6

int main(void) {
  int A[D], B[D];
  int i;

  for (i = 0; i < D; i++) {
    scanf("%d", &A[i]);
    B[i] = A[i];
  }

  for (i = 1; i < D; i++) {
    if (i % 2 == 0) {
      B[i] = A[i] + A[i-1];
    }
    if (i % 2 != 0) {
      B[i] = A[i] + A[i+1];
    }
  }

 for (i = 0; i < D; i++) {
    printf("%d ", B[i]);
  }

  return 0;
}
