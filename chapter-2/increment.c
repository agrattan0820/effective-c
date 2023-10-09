#include <stdio.h>

static unsigned int counter = 0;

void increment(void) {
  counter++;
  printf("%d ", counter);
}

void retrieve (void) {
  printf("Retrieve: %d", counter);
}

int main(void) {
  for (int i = 0; i < 5; i++) {
    increment();
  }
  retrieve();
  return 0;
}