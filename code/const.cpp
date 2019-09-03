
const type constdata;

int somme(const int *a, const int *b) {
  *a += *b;
  return *a
}

/* Pointeur vers une valeur constante */
const int *pValConst;

/* Pointeur constant */
int *const pConst;

/* Pointeur constant vers une valeur constante */
const int *const pConstValConst;