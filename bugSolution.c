#include <stdio.h>

int main() {
  int a = 10;
  int b = 0;
  
  // Check for division by zero before performing the operation
  if (b != 0) {
    int c = a / b;
    printf("Result: %d\n", c);
  } else {
    printf("Error: Division by zero!\n");
  }
  
  return 0;
} 