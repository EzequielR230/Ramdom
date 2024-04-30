#include <iostream>
#include <string> // Include this header for the gets function

using namespace std;

int main() {
    char nombre[15];
    cout << "Digite su nombre: ";
    gets(nombre);
    puts("¡Felicidades!");
    puts(nombre);
    system("pause");
    return 0;
}
