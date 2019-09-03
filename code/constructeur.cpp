#include <iostream>
using namespace std;

int main() {
  rectangle rect;
  float aire = rect.calculerAire();

  std::cout << "Aire du rectangle : " << aire << std::endl;

  return 0;
}

class A {
public:
  /* Déclaration du constructeur */
  A();
};

class rectangle {
public:
  /* Constructeur de la classe rectangle */
  rectangle();

  /* Définition des attributs */
  float x;
  float y;
  float largeur;
  float hauteur;

  /* Définition des méthodes */
  float calculerAire();
  float modifierPosition(int xNew, int yNew);
};

rectangle::rectangle() {
  /* Initialise les variable à 0 */
  x = 0;
  y = 0;
  largeur = 0;
  hauteur = 0;
}

float rectangle::calculerAire() {
  /* Retourne l'aire du rectangle */
  return x * y;
}

float rectangle::modifierPosition(int xNew, int yNew) {
  x = xNew;
  y = yNew;
}

class A {
public:
  /* Déclaration du constructeur */
  A(type1 param1, type2 param2);
};

A instance(param1, param2);

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

rectangle::rectangle() {
  /* Initialise les variables à 0 */
  x = 0;
  y = 0;
  largeur = 0;
  hauteur = 0;
}

rectangle::rectangle(const float xValue, const float yValue, const float lValue,
                     const float hValue) {
  /* Initialise les attributs */
  x = xValue;
  y = yValue;
  largeur = lValue;
  hauteur = hValue;
}

#include <iostream>
using namespace std;

int main() {
  /* Appel du constructeur sans argument */
  rectangle rect1;

  /* Appel du constructeur avec arguments */
  rectangle rect2(0, 0, 2, 2);

  /* Calcul de l'aire */
  float aire1 = rect1.calculerAire();
  float aire2 = rect2.calculerAire();

  /* L'aire du premier rectangle est 0 */
  std::cout << "Aire du rectangle 1 : " << aire1 << std::endl;
  /* L'aire du deduxième rectangle est 4 */
  std::cout << "Aire du rectangle 2 : " << aire2 << std::endl;

  return 0;
}



