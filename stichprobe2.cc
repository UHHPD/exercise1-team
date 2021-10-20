#include <fstream>
#include <iostream>
#include <cmath>

int main() {
  std::ifstream fin("datensumme.txt");
  std::ifstream fin2("datensumme.txt");
  std::ofstream fout("mittelwerte.txt");
  std::ofstream fout2("varianzen.txt");
  for(int j=0;j<26;j++) {
    int sum=0;
    for(int i=0;i<9;i++) {
      int num1;
      fin >> num1;
      sum+=num1;
      }
    double mean=sum/9.0;
    fout << mean << std::endl;

    double var=0;
    for(int i=0;i<9;i++) {
      int num1;
      fin2 >> num1;
      var+=(num1-mean)*(num1-mean);
    }
    double varnorm=var/9.f;
    fout2 << varnorm << std::endl;
  }
  fin.close();
  fin2.close();
  fout.close();
  fout2.close();
}