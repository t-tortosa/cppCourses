class B : public A {
  /* data */
};

class rectangle {
public:
  /* Constructeur de la classe rectangle */
  rectangle();
  rectangle(const float xValue, const float yValue, const float lValue,
            const float hValue);

  /* Définition des attributs */
  float x;
  float y;
  float largeur;
  float hauteur;

  /* Définition des méthodes */
  float calculerAire();
  float modifierPosition(int xNew, int yNew);
};

class carre : public rectangle {
public:
  /* Constructeur de la classe carre */
  carre(float size) {
    largeur = size;
    hauteur = size;
  }
};