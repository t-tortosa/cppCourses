union Data {
  int i;
  float f;
};

/* Instantiation d'une varible de type Data */
Data variable;

/* Mise à jour de la valeur de i */
variable.i = 5;

/* Mise à jour de la valeur de f
   i est écrasé et la ligne
   précédente devient inutile
 */
variable.f = 3.f;
