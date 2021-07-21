#include <stdio.h>

int main() {
  int total[4], sum = 0;
  int i;

  for(i = 0; i < 4; i++){

    scanf("%d", &total[i]);
    sum += total[i];
  }

  printf("%d\n",sum / 60);
  printf("%d",sum % 60);
}