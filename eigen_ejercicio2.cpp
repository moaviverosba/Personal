#include <iostream>
#include <Eigen/Dense>
using namespace std;
using namespace Eigen;

int main()
{
  MatrixXf m(3,3);
  m << 4, -2, 1,
       3, 6, -4,
       2, 1, 8;
   std::cout << "Matriz m"<<endl;
   std::cout << m<<endl<<endl;
   std::cout << m.inverse()<<endl<<endl;
   std::cout << m*m.inverse()<<endl<<endl;

  MatrixXf m1(3,3);
  m1 << 52, 17, 2,
       -32, 30, 19,
       -9, -8, 30;
   std::cout << "Matriz identidad"<<endl;
   std::cout << (1.0/263)*m1*m<<endl<<endl;

   SelfAdjointEigenSolver<Matrix3f> eigensolver(m);
   if (eigensolver.info() != Success) abort();
   cout << "The eigenvalues of m are:\n" << eigensolver.eigenvalues() << endl;
   cout << "Here's a matrix whose columns are eigenvectors of m corresponding to these eigenvalues:\n" << eigensolver.eigenvectors() << endl;

}
