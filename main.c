#include<stdio.h>

int inc(int x) {
  return x + 1;
}

int main() {
  int result = inc(5);
  printf("Hello world\n");
  printf("result = %d\n", result);
}
