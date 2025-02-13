#include <iostream>
 
using namespace std;
 
int main() {
 
    int x, y, z, n;
    cin >> n;
    cin >> x >> y >> z;
    
    if(x >= n && y >= n && z >= n){
        cout << "S" << endl;
    } else{
        cout << "N" << endl;
    }
 
    return 0;
}