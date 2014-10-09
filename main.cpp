#include <iostream>
#include <matrix.h>
#include <fstream>


using namespace std;


int main()
{

   Matrix a ;
   Matrix b;

   a.cargarDatos("C://MatrizA.txt");
   b.cargarDatos("C://MatrizB.txt");

  cout<<a<<endl;
  cout<<b<<endl;

  a.exportarDatos("C://NuevaMatrizA.txt");
  b.exportarDatos("C://NuevaMatrizB.txt");











    return 0;
}

