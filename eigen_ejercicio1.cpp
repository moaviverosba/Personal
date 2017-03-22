#include <iostream>
#include <Eigen/Dense>
using namespace std;
using namespace Eigen;

int main()
{
  std::cout << "Sistema m*x=n"<<endl;
  
  Eigen::MatrixXd m(4,4);
  m << 0.18, 0.60, 0.57, 0.96,
    0.41, 0.42, 0.99, 0.58,
    0.14, 0.30, 0.97, 0.66,
    0.51, 0.13, 0.19, 0.58;
   std::cout << "Matriz m"<<endl;
   std::cout << m<<endl;

   VectorXd n(4);
    n << 1, 2, 3, 4;
  std::cout << "Vector n"<<endl;
  std::cout << n<<endl;

  VectorXd z = m.colPivHouseholderQr().solve(n);
  std::cout << "Solución para x"<<endl;
  std::cout << z <<endl;

   VectorXd v(4);
   v=(m*z - n);
 std::cout << "Para comprobar la solución"<<endl;
 std::cout << v<<endl;
 std::cout << v.norm()<<endl;
   
   // MatrixXd adj = m.adjoint();
     
  // MatrixXd A = MatrixXd::Random(N,N); //matriz de números aleatorios
  // MatrixXd b = MatrixXd::Random(N,N/2);
  // MatrixXd x1 = m.fullPivLu().solve(n);
  // std::cout << z <<endl;
  //double relative_error = (A*x - b).norm() / b.norm(); // norm() is L2 norm
  //cout << "The relative error is:\n" << relative_error << endl;
}
