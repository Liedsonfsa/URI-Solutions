#include <iostream>

using namespace std;

int main() {

    int n, dias = 0, cont = 0;
    float quant;

    cin >> n;

    while(cont < n){
        cin >> quant;
        while(quant > 1){
            quant /= 2;
            dias++;
        }

        cout << dias <<" dias" << endl;
        cont += 1;
        dias = 0;
    }
    
    return 0;
}