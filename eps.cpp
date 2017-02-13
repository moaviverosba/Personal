#include <iostream>
using namespace std;

int main(){

  float eps=1;
  float one=1;

  for(int n=1;n<=25;n++){
    eps=eps/2;
    one=1+eps;
    cout<<eps<<one<<endl;
  }
  
  return 0;
}
