#include <fstream>
#include <iostream>
#include <cmath>

int main() {
  std::ifstream fin("datensumme.txt");
  int sum=0;
  for(int i=0;i<234;i++) {
    int num1;
    fin >> num1;
    sum+=num1;
    }
  double mean=sum/234.0;

  std::cout << mean << std::endl;

  double var=0;
  for(int i=0;i<234;i++) {
    int num1;
    fin >> num1;
    var+=(num1-mean)*(num1-mean);
    }
  double varnorm=var/234.0;
  std::cout << varnorm << std::endl;
  
  double sigma = sqrt(varnorm);
  std::cout << sigma << std::endl;
  fin.close();
}