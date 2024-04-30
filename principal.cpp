#include <iostream>
#include <cstdlib>
using namespace std;
int clasificarNota(int nota);
void imprimirNota(int n);
int main(){
    int nota, escala;
    cout<<"Digite la calificación obtenida (0-100): ";
    cin>>nota;
    escala=clasificarNota(nota);
    imprimirNota(escala);
    system("pause");
}