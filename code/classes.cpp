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
  float modifierPosition(int xNouvellePosition, int y NouvellePosition);
};