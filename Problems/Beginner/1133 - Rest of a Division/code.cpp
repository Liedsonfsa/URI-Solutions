#include <iostream>
 
using namespace std;
 
int main() {
 
    int x, y, i, maior, menor;
    cin >> x >> y;
    
    maior=(x>y) ? x : y;
    menor=(x<y) ? x : y;
    
    for(i=menor+1; i<maior; i++){
        if(i%5==2 || i%5==3){
            cout << i << endl;
        }
    }
 
    return 0;
}