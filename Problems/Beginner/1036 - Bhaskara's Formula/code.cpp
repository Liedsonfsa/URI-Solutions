#include <iostream>
#include <iomanip>
#include <math.h>
 
using namespace std;
 
int main() {

    double a, b, c, t, r1, r2;

    cin >> a >> b >> c;

    if(((b*b) - 4 * a * c) <0 || a==0){
        cout << "Impossivel calcular" << endl;
    } else{
        t = sqrt((b*b) - 4 * a * c);
        r1 = (-b + t) / (2 * a);
        r2 = (-b - t) / (2 * a);
        cout << "R1 = "<< fixed << setprecision(5) << r1 << endl;
        cout << "R2 = "<< fixed << setprecision(5) << r2 << endl;
    }

    return 0;
}