#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    int n, soma=0, cont=0;
    while(1){
        cin >> n;
        if(n<0) break;
        soma+=n;
        cont+=1;
        
    }
    
    float media;
    media = (float) soma/cont;
    
    cout << fixed << setprecision(2) << media << endl;
 
    return 0;
}