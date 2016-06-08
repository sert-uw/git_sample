#include<stdio.h>

int inc(int x) {
  return x + 1;
}

int dec(int x) {
  return x - 1;
}

int main() {
  int inc_result = inc(5);
  int dec_result = dec(5);
  printf("Hello world\n");
  printf("inc_result = %d\n", inc_result);
  printf("dec_result = %d\n", dec_result);
}
