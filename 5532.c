#include <stdio.h>

int main(void) {
  int L, A, B, C, D;
  int kd, md;
  scanf("%d", &L);
  scanf("%d", &A);
  scanf("%d", &B);
  scanf("%d", &C);
  scanf("%d", &D);
  if(A % C != 0){
    kd = (A / C) + 1;
  }
  else{
    kd = (A / C);
  }
  if(B % D != 0){
    md = (B / D) + 1;
  }
  else{
    md = (B / D);
  }
  if(kd >= md){
    printf("%d", L - kd);
  }
  else if(md > kd){
    printf("%d", L - md);
  }
  return 0;
}