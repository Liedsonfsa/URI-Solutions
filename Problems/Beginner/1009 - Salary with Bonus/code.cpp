#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
   string nome;
   double salario, totalVendas, receber;
   
   cin >> nome;
   cin >> salario >> totalVendas;
   
   receber = (totalVendas*0.15) + salario;
   
   cout << "TOTAL = R$ " << fixed << setprecision(2) << receber << endl;
 
    return 0;
}