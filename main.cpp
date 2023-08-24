#include "Grafo.h"
#include <iostream>

using namespace std;

int main() {
    try {
        Grafo grafo(5);
        grafo.imprime();
    }
    catch (const exception &e) {
        cerr << "exception: " << e.what() << "\n";
    }

    return 0;
}


git config --global user.email "helomeranda@gmail.com"
  git config --global user.name "Leparfait22"