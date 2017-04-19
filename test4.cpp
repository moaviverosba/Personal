//TRANSPUESTA DE UNA MATRIZ POR BLOQUES

#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
//void matrix_mul(float **A, float **B, float **C, int size)
{
  int N=4; //matrices cuadradas, número de filas o columnas
  int n=2; //número de divisiones
  int block_size=N/n;
  int size=N;
  float C[N][N]= {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
  float CT[N][N];

  //inicializando las matrices...

  for (int row = 0; row < N; row++){
      for (int col = 0; col < N; col++){
	CT[row][col] = 0 ;
      }
  }

  //Sacando la transpuesta...
     for (int i = 0; i < size; i += block_size) {
        for (int j = 0; j < size; j += block_size) {
                    for (int k = i; k < i + block_size; ++k) {
                            for (int l = j; l < j + block_size; ++l) {
                                    CT[k][l] = C[l][k];
                            }
                    }
            }
    }

 //para que rellene la matriz con los valores ya hallados
     for (int row = 0; row < N; row++){
       for (int col = 0; col < N; col++){
	std::cout<<CT[row][col]<<" " ;
       }
      std::cout<<"\n";
     }

     
 return 0; 
}
