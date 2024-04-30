/*la función clasificarNota recibe una clasificacion entre 0* y 100 y retona:
1-Exelente (91-100)
2-muy bueno(81-90)
3-Bueno (71-80)
4-Aceptable(61-70)
5.Deficiente(0-60)
*/

#include <cstdio> 
void imprimirNota(int n){
    switch(n){
        case 0: printf("La nota esta fuera de rango\n");
            break;
        case 1: printf("Exelente\n");
            break;
        case 2: printf("Muy bien\n");
            break;
        case 3: printf("Bien\n");
            break;
        case 4: printf("Aceptable\n");
            break;
        case 5:printf("Deficiente\n");
            break;
        default:;
    }

}