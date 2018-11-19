#include <isotream>

using namespace std;


// esta feature añade una nueva funcinalidad a nuestro programa
int lanzamientoDados(int dados){
    return dados;
}

// como lo he hecho mal voy a añadir una nueva funcion
void funcionTest3210(){}

// este es un main de prueba para corroborar que tanto
// la creacion de nuevos comentarios no afecta a una rama ya creada
int main()

    int a = lanzamientoDados(0);
    // estos comentarios serviran para verificar a ciencia cierta
    // si realemente el git tiene la potencia suficiente como para evitarlos
    // sin ningun tipo de consecuencia negativa
    return a;
}
