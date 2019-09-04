class A {
public:
  /* Déclaration du constructeur */
  A(type1 param1, type2 param2);
  /* Déclaration du destructeur */
  ~A();
};

class tableau {
public:
  tableau(const int taille, const char *message) {
    tailleTableau = taille;
    tab = new char[taille];
  }

  ~tableau() {
    /* Libération de la mémoire */
    delete tab;
  }

  int tailleTableau;
  char *tab;
};
