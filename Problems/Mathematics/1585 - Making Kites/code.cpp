#include <iostream>
 
using namespace std;
 
int main() {
 
    int n, x, y, cont = 1, r;
    cin >> n;

    while(cont <= n){
        cin >>x >> y;
        r = (x * y) / 2;
        cout << r << " cm2" << endl;
        cont++;
    }
    
    return 0;
}