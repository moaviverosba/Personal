//MULTIPLICACIÓN DE MATRICES

#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
//void matrix_mul(float **A, float **B, float **C, int size)
{
  int i=2; //índice número de filas de la primera matriz
  int j=2; //índice número de columnas de la segunda matriz
  int k=2; //índice interno del producto
  float A[i][k];
  float B[k][j];
  float C[i][j];

  //inicializando...
  for (int row = 0; row < i; row++){
      for (int col = 0; col < k; col++){
	A[row][col] = rand() % 10 + 1;
      }
  }
  for (int row = 0; row < k; row++){
      for (int col = 0; col < j; col++){
	B[row][col] = rand() % 10 + 1; 
      }
  }
    for (int row = 0; row < i; row++){
      for (int col = 0; col < j; col++){
	C[row][col] = 0 ;
      }
  }

  
  for (int row = 0; row < i; row++){
    for (int col = 0; col < j; col++){
      for (int inner = 0; inner < k; inner++){
	C[row][col] += A[row][inner] * B[inner][col];
      }
      std::cout<<C[row][col]<<" "; 
    }
    std::cout<<"\n";
  }
 return 0;
}
