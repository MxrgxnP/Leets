#include <stdio.h>
#define N 3
int main(void){
  int m[N][N], x, y, s = 0, counter = 0;

  for (x = 0; x < N; x ++) {
    for (y = 0; y < N; y++) {
      scanf("%d", &m[x][y]);
    }
  }

  while (counter < N) {
    for (y = 0; y < N; y++) {
      s = s + m[counter][y];
    }
    m[counter][counter] = s;
    counter ++;
    s = 0;
  }

// visualizzazione
for(x = 0; x < N; x++){
  for(y = 0; y < N; y++)
    printf("%3d ", m[x][y]);
  printf("\n");
  }
}
