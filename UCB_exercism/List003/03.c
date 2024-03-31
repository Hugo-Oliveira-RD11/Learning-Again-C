#include "stdio.h"
#define true 1;

int main() {

  int cont_show = 0, num1 = 1, num2 = 4, input = 10;

  while (1) {
    if (input == cont_show)
      break;
    printf(" %d, ", num1);
    cont_show++;
    for (int i = 0; i < 2; i++) {
      if (input == cont_show)
        break;
      printf(" %d, ", num2);
      cont_show++;
    }
    num1++;
    num2++;
  }
  return 0;
}
