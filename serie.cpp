#include <iostream>
#include <cmath>
using namespace std;

const int NMAX=200;

double sin_sum(const double x,const double N){
  double sum=x;
  double term=x;

  for (int n=2;n<=NMAX;n++){
    term *= -x*x/(2*n+1)/(2*n);
    sum +=term;
  }
  return sum; 

}

int main(){

   //cout<<sin_sum(0, NMAX)<< endl;
   //cout<<sin_sum(3, NMAX)<< endl;
   
  double x;
  double dx=0.2;
  for (int ii=0;ii<=NMAX;ii++){
    x=ii*dx;
    cout<<x <<"\t" <<fabs((sin_sum(x, NMAX) - sin(x))/sin(x))<<endl;
  }
  
  return 0;
}
