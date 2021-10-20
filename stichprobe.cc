#include <fstream>
#include <iostream>

int main() {
  std::ifstream fin("datensumme.txt");
  int sum=0;
  for(int i=0;i<234;i++) {
    int num1;
    fin >> num1;
    sum+=num1;
    }
  double ergebnis=sum/234.0;

  std::cout << ergebnis << std::endl;
  
  fin.close();
}