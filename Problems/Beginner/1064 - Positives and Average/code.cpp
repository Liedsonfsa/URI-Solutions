#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    float n, media, soma=0;
    int cont=1, q=0;
    while(cont<=6){
        cin>>n;
        if(n>0){
            soma+=n;
            q++;
        }
        cont++;
    }
    
    media=soma/q;
    cout<<q<<" valores positivos"<<endl;
    cout<<fixed<<setprecision(1)<<media<<endl;
 
    return 0;
}