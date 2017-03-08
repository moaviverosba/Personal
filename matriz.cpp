#include <iostream>
#include <cmath>
#include <stdio.h>

int main(){

 int c=2;
 int f=3;
 int edades[f][c] = {{1,2},{9,8},{14,21}};
 int value= edades [f][c];
 for (int i = 0; i < c; i++) {
   for (int j = 0; j < f; j++) {
     //value=edades[i][j];
     std::cout<<edades[i][j]<<std::endl;
   }
 }
 //std::cout << value<<std::endl;
 
 return 0;
}
