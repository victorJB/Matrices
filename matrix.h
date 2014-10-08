#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>

class Matrix
{
private:

    int filas;
    int columnas;
    double **matriz;


public:


    Matrix();
    Matrix(int filas, int columnas);
    ~Matrix();
    void setMatrix();
    Matrix getMatrix();
    double** suma(Matrix a, Matrix b);
    void resta(Matrix a, Matrix b);
    void mulPorEscalar(double escalar);
    void transpuesta();
    void multiplicacion(Matrix a, Matrix b);
    Matrix operator+(const Matrix X);
    void showMatrix();
    Matrix operator-(const Matrix x);
    Matrix operator*(const Matrix x);



};


#endif // MATRIX_H
