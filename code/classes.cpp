/* Human class */
class Human {
  /* Ne nous occupons pas de ce mot clé pour le moment */
public:
  /* Déclaration des attributs */
  std::string genre;
  int age;
  int taille;
  std string nom;

  /* Définition d'une méthode vieillir */
  void vieillir() {
    /* Quand on est jeune, on grandit */
    if (age < 18) {
      taille += 10;
    }
    /* La fonction vieillir ajoute 1 à l'age */
    age++;
  }
};

class rectangle {
public:
  /* Définition des attributs */
  float x;
  float y;
  float largeur;
  float hauteur;

  /* Définition des méthodes */
  float calculerAire();
  float modifierPosition(int xNew, int yNew);
};

float rectangle::calculerAire() {
  /* Retourne l'aire du rectangle */
  return x * y;
}

float rectangle::modifierPosition(int xNew, int yNew) {
  x = xNew;
  y = yNew;
}

#include <iostream>
using namespace std;

int main() {
  /* Instancie une variable de type rectangle */
  rectangle rect;

  /* Mets à jour la largeur et la hauteur du rectangle */
  rect.largeur = 10;
  rect.hauteur = 10;

  /* Calcule l'aire du rectangle */
  float aire = rect.calculerAire();

  /* Le programme affiche :
   * Aire du rectangle : 100
   */
  std::cout << "Aire du rectangle : " << aire << std::endl;

  return 0;
}

class rectangle {
private:
  /* On souhaite imposer que les positions
   * x et y du rectangle soient modifiées
   * en même temps
   *
   * Les positions sont donc rendues privées
   * afin d'éviter un accès extérieur
   */

  float x;
  float y;

public:
  /* Définition des attributs */
  float largeur;
  float hauteur;

  /* Définition des méthodes */
  float calculerAire();
  float modifierPosition(int xNew, int yNew);
};

#include <iostream>
using namespace std;

int main() {
  /* Instancie une variable de type rectangle */
  rectangle rect;

  /* Pas de problème */
  rect.largeur = 10;

  /* Erreur de compilation */
  rect.x = 10;

  return 0;
}