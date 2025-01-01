#include <iostream>
 
using namespace std;
 
int main() {
 
    int i, n, num, cont=1;
    
    cin>>n>>num;
    
    for(i=1; i<=num; i++){
        cout<<i;
        if(cont!=n){
            cout<<" ";
            cont+=1;
        } else{
            cont=1;
            cout<<endl;
        }

    }
 
    return 0;
}