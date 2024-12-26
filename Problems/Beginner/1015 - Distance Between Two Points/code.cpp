#include <iostream>
#include <cmath>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    float x1, x2, y1, y2, resul;
    
    cin >> x1 >> y1 >> x2 >> y2;
    
    resul=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    
    cout << fixed << setprecision(4) << resul << endl;
 
    return 0;
}