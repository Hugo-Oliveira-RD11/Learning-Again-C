#include "stdio.h"
#include "time.h"
#include <time.h>

int main() {
  struct tm *str;
  char strs[100];
  time_t tempo;
  time(&tempo);

  str = localtime(&tempo);

  strftime(strs, 100, " a data e %d - %m - %Y\n %B \n a hora e %H:%M", str);
  printf("o tempo atual e %s\n", strs);

  return 0;
}
