#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int ac, char **av) {
  if (ac < 3) {
    return 0;
  }
  int x = atoi(av[1]);
  int y = atoi(av[2]);
  int horizontal = 0;
  int vertical_counter = 0;
  for (int vertical = 0; vertical < y; vertical++) {
    for (int horizontal = 0; horizontal < x; horizontal++) {
      if (horizontal == x - 1 && vertical != 0 && vertical != y - 1) {
        printf("|\n");
      } else if (horizontal == 0) {
        if (vertical == 0 || vertical == y - 1) {
          printf("o");
        } else {
          printf("|");
        }
      } else if (horizontal == x - 1) {
        if (vertical == 0 || vertical == y - 1) {
          printf("o\n");
        }
      } else {
        if (vertical == 0 || vertical == y - 1) {
          printf("-");
        } else {
          printf(" ");
        }
      }
    }
  }
  return 0;
}