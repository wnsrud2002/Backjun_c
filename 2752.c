#include <stdio.h>

int main(void) {
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  if(a > b && a > c){
    if(b > c){
      printf("%d %d %d",c, b, a);
    }
    else{
      printf("%d %d %d",b, c, a);
    }
  }

  if(b > a && b > c){
    if(a > c){
      printf("%d %d %d",c, a, b);
    }
    else{
      printf("%d %d %d",a, c, b);
    }
  }

  if(c > a && c > b){
    if(a > b){
      printf("%d %d %d",b, a, c);
    }
    else{
      printf("%d %d %d",a, b, c);
    }
  }
  return 0;
}