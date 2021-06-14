#include <stdlib.h>
#include <stdio.h>

enum a_bunch_of_things {
    THING1,
    THING2,
    THING3,
    THING4,
    THING5,
    THING6,
    THING7,
    THING8,
    THING9,
    THING10,
    THING11,
    THING12,
    THING13,
    THING14,
    THING15,
    THING16,
    THING17,
    THING18,
    THING19,
    THING20,
    SOMETHING_ELSE
};

void printThing(enum a_bunch_of_things t) {
  switch (t) {
  case  THING1: printf("THING1\n"); break;
  case  THING2: printf("THING2\n"); break;
  case  THING3: printf("THING3\n"); break;
  case  THING4: printf("THING4\n"); break;
  case  THING5: printf("THING5\n"); break;
  case  THING6: printf("THING6\n"); break;
  case  THING7: printf("THING7\n"); break;
  case  THING8: printf("THING8\n"); break;
  case  THING9: printf("THING9\n"); break;
  case  THING10: printf("THING10\n"); break;
  case  THING11: printf("THING11\n"); break;
  case  THING12: printf("THING12\n"); break;
  case  THING13: printf("THING13\n"); break;
  case  THING14: printf("THING14\n"); break;
  case  THING15: printf("THING15\n"); break;
  case  THING16: printf("THING16\n"); break;
  case  THING17: printf("THING17\n"); break;
  case  THING18: printf("THING18\n"); break;
  case  THING19: printf("THING19\n"); break;
  case  THING20: printf("THING20\n"); break;
  case  SOMETHING_ELSE: printf("SOMETHING_ELSE\n"); break;
  default: printf("Invalid thing\n"); break;
      }
}

int main(void) {
  printf("Hello World\n");

  return EXIT_SUCCESS;
		       
}
