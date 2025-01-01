#include <iostream>
 
using namespace std;
 
int main() {
 
    int n;
    int i;
    
    cin >> n;
    
    cout << "N[0] = " << n << endl;
    for(i=1; i<10; i++){
        n *= 2;
        cout << "N[" << i << "] = " << n << endl; 
        
    }
 
    return 0;
}