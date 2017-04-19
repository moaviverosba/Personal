//MULTIPLICACIÓN DE MATRICES POR BLOQUES

#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
//void matrix_mul(float **A, float **B, float **C, int size)
{
  int N=8; //matrices cuadradas, número de filas o columnas
  int n=4; //número de divisiones
  int block_size=N/n;
  int size=N;
  float A[N][N], B[N][N], C[N][N];

  //inicializando las matrices...
  for (int row = 0; row < N; row++){
      for (int col = 0; col < N; col++){
	//A[row][col] = rand() % 10 + 1;
	A[row][col] = 1;
      }
  }

  for (int row = 0; row < N; row++){
      for (int col = 0; col < N; col++){
	//B[row][col] = rand() % 10 + 1;
	B[row][col] = 2; 
      }
  }
  
    for (int row = 0; row < N; row++){
      for (int col = 0; col < N; col++){
	C[row][col] = 0 ;
      }
  }

    //implementando la multiplicación por bloques...
    
 float tmp=0.0;
 
 for (int jj = 0; jj < size; jj += block_size){
   for (int kk = 0; kk < size; kk += block_size){
     for (int i = 0; i < size ; i++){
       for (int j = jj; j < (jj + block_size ) ; j++){
	 for (int k = kk; k < (kk + block_size) ; k++){	   
	   tmp += A[i][k] * B[k][j];
	 }
	 C[i][j] += tmp;
	 tmp=0.0;
       }
     }
   }
 }

 //para que rellene la matriz con los valores ya hallados
     for (int row = 0; row < N; row++){
       for (int col = 0; col < N; col++){
	std::cout<<C[row][col]<<" " ;
       }
      std::cout<<"\n";
     }

     
 return 0; 
}
