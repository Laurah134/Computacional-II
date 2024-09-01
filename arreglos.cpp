#include<string>
#include<iostream>

const int MAX=100; //Maximo tamaño de nuestro arreglo

void leerMatriz(int matriz[MAX][MAX], int filas, int columnas){
    std::cout<<"Introduzca los elementos de la matriz("<<filas<<"x"<<columnas<<")"<<std::endl;
    for(int i=0;i<filas; ++i)
    {
        for(int j=0;j<columnas; ++j)
        {
            std::cout<<"Porfavor ingrese el elemento A["<<i<<"]["<<j<<"]=";
            std::cin>>matriz[i][j];
        }
    }
};
void mostrarMatriz(int matriz[MAX][MAX], int filas, int columnas){
    std::cout<<"La matriz es"<<std::endl;
    for(int i=0;i<filas; ++i)
    {
        for(int j=0;j<columnas; ++j)
        {
            std::cout<<matriz[i][j]<<"\t";
        }
        std::cout<<std::endl;
    }
};

void suma(int matrizA[MAX][MAX], int matrizB[MAX][MAX], int matrizC[MAX][MAX],  int filas, int columnas )
{
    for(int i=0;i<filas; ++i)
    {
        for(int j=0;j<columnas; ++j)
        {
            matrizC[i][j]=matrizA[i][j]+matrizB[i][j];
        }
    }
};
void resta(int matrizA[MAX][MAX], int matrizB[MAX][MAX], int matrizC[MAX][MAX],  int filas, int columnas )
{
    for(int i=0;i<filas; ++i)
    {
        for(int j=0;j<columnas; ++j)
        {
            matrizC[i][j]=matrizA[i][j]-matrizB[i][j];
        }
    }
};
void producto(int matrizA[MAX][MAX], int matrizB[MAX][MAX], int matrizC[MAX][MAX],  int filasA, int columnasA, int columnasB )
{
    for(int i=0;i<filasA; ++i)
    {
        for(int j=0;j<columnasB; ++j)
        {
            matrizC[i][j]=0;
                for(int k=0;k<columnasA;++k)
                {
                    matrizC[i][j]+=matrizA[i][k]*matrizB[k][j];
                }
        }
    }
};


int main()
{
    int filasA, columnasA;
    int filasB, columnasB;
    int A[MAX][MAX], B[MAX][MAX], C[MAX][MAX] ;

    std::cout<<"Introduzca el números de lineas para la matriz A"<<std::endl;
    std::cin>>filasA>>columnasA;
    std::cout<<"Introduzca el números de lineas para la matriz B"<<std::endl;
    std::cin>>filasB>>columnasB;
    leerMatriz(A, filasA, columnasA);
    leerMatriz(B, filasB, columnasB);

    if(filasA==filasB && columnasA==columnasB)
    {
        suma(A, B, C, filasA, columnasB);
        mostrarMatriz(C, filasA, columnasA);
        resta(A, B, C, filasA, columnasB);
        mostrarMatriz(C, filasA, columnasA);
    }
    else{
        std::cout<<"Las matrices no son del mismo orden"<<std::endl;
    }

    if(columnasA==filasB)
    {
        producto(A,B, C, filasA, columnasA, columnasB);
        mostrarMatriz(C, filasA, columnasA);
    }
    else{
        std::cout<<"Las matrices no se pueden multiplicar"<<std::endl;
    }
    

    return 0;
}
