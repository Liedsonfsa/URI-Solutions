#include <iostream>
 
using namespace std;
 
int main() {
 
    int vA[5], vB[5], i, cont = 0;
    
    for(i = 0; i < 5; i++){
        cin >> vA[i];
    }
    
    for(i = 0; i < 5; i++){
        cin >> vB[i];
    }
    
    for(i = 0; i < 5; i++){
        if(vA[i] != vB[i]){
            cont += 1;
        }
    }
    
    if(cont == 5){
        cout << "Y" << endl;
    } else{
        cout << "N" << endl;
    }

    return 0;
}