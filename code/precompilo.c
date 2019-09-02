/* Fichier inc.h */

void function1();
int function2();

/* Fichier test.c */
#include "inc.h"

#define TEXT "Some text"

int main() {
  function1();
  prinf("%s\n", TEXT);
  return 1;
}

/* Fichier précompilé */
void function1();
int function2();

int main() {
  function1();
  prinf("%s\n", "Some text");
  return 1;
}
