/*la función clasificarNota recibe una clasificacion entre 0* y 100 y retona:
1-Exelente (91-100)
2-muy bueno(81-90)
3-Bueno (71-80)
4-Aceptable(61-70)
5.Deficiente(0-60)
*/

int clasificarNota(int nota){
if(nota<=100 && nota>=91){
    return 1;
}
    else {
        if (nota<=80 && nota>=71){
            return 2;
        }
        else {
            if (nota<=70 && nota>=61){
                return 3;
            }
            else 
                if (nota<=60 && nota>=0){
                    return 5;
                }
                else{
                    return 0;
                   }
        }
    }

}
   
