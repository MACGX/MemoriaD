#include "ArregloDinamico.h"

 ArregloDinamico:: ArregloDinamico()
{
    arreglodinamico = new string[MAX],
    cont = 0;
    tam = MAX;
}
 ArregloDinamico::~ ArregloDinamico()
{
    delete[]  arreglodinamico;
}
void  ArregloDinamico::insertar_final(const string &s)
{
    
    if (cont == tam){
        expandir();
    }
    arreglodinamico[cont] = s;
    cont++;

}

void  ArregloDinamico::insertar_inicio(const string &s)
{
    
    if (cont == tam){
        expandir();
    }
    for (size_t i = cont; i > 0; i--){
         arreglodinamico[i] =  arreglodinamico[i-1];
    }
     arreglodinamico [0] = s;
    cont ++;
}

void  ArregloDinamico::expandir()
{
    string *nuevo = new string [tam+MAX];
    for (size_t i = 0; i < cont; i++)
    {
        nuevo [i] =  arreglodinamico[i];
    }
    delete[]  arreglodinamico;
     arreglodinamico = nuevo;
    tam = tam + MAX;

}

size_t  ArregloDinamico::size()
{
    return cont;
}