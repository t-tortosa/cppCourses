namespace my_namespace {
/* Mon espace de nom */
}

namespace a {
void open();
}

namespace b {
void open();
}

int main() {
  /* Erreur de compilation */
  open();

  /* Appel de la fonction open
   * de l'espace de nom a*/
  a::open();

  /* Appel de la fonction open
   * de l'espace de nom b*/
  b::open();
}

namespace a {
void open();
}

namespace b {
void open();
}

using namespace a;

int main() {
  /* Appel de la fonction open
   * de l'espace de nom a*/
  open();
}