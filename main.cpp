#include <iostream>

using namespace std;
int main() {
  float dolares, total, colones=614.17;
 

  cout <<"\nCalcular el monto en colones ";

  cout <<"\nDigite el monto en dolares: "; cin>>dolares;
  
  total = (dolares*colones);
  cout <<"\nEl monto en colones es " <<total;

  return 0;
}