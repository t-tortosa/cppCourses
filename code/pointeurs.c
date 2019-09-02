int a;
/* a est une donnée */
/* &a est une adresse */

int *b;
/* b est une adresse */
/* *b est une donnée */

int c[10];
/* tab est une adresse */
/* tab[i] est une donnée */
/* *tab est une donnée ( = tab[0]) */

int var = 1;
int *ptr = NULL;
int *ptrvar = &var;
int var2 = *ptrvar;