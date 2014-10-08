#include <iostream>
#include <matrix.h>


using namespace std;


int main()
{

   Matrix a =  Matrix(3,3);
   Matrix b = Matrix(3,3);
   Matrix c = Matrix(3,3);

   a.setMatrix();
   a.getMatrix();

   b.setMatrix();
   b.getMatrix();

   cout<<"La suma de a+b es"<<endl;
   c = a+b;
   c.showMatrix();

   cout<<"La resta de a-b es"<<endl;
   c = a-b;
   c.showMatrix();

   cout<<"La Multiplicacion de a*b es"<<endl;
   c = a*b;
   c.showMatrix();

   cout<<"Sobrecarga de c"<<endl;
   cout<< c;






    return 0;
}

