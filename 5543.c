#include <stdio.h>

int main(void) {
  int a,b,c;
  int d,e;
  int m1, m2;
  
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);
  scanf("%d", &d);
  scanf("%d", &e);

  if(a >= b && a >= c){
    if(b >= c){
      m1 = c;
    }
    else{
      m1 = b;
    }
  }

  if(b >= a && b >= c){
    if(a >= c){
      m1 = c;
    }
    else{
      m1 = a;
    }
  }

  if(c >= a && c >= b){
    if(a >= b){
      m1 = b;
    }
    else{
      m1 = a;
    }
  }

  if(d > e){
    m2 = e;
  }
  else{
    m2 = d;
  }

  printf("%d", m1 + m2 - 50);
  return 0;
}