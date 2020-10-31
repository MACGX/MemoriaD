#include "arreglodinamico.h" 

int main ()
{
        ArregloDinamico arreglo;
        arreglo.insertar_final("Se");
        arreglo.insertar_final("Columpiaba");
        arreglo.insertar_final("Sobre");
        arreglo.insertar_final("La");
        arreglo.insertar_final("Tela");
        arreglo.insertar_final("De");
        arreglo.insertar_final("Una");
        arreglo.insertar_final("Arania");
        for (size_t i = 0; i < arreglo.size(); i++)
        {
            cout<< arreglo[i]<<" ";
        }
        cout << endl;
        arreglo.insertar_inicio("Elefante");
        arreglo.insertar_inicio("Un");
        for (size_t i = 0; i < arreglo.size(); i++)
        {
            cout<< arreglo[i]<<" ";
        }

return 0; 
}