#include <iostream>
 
using namespace std;
 
int main() {
 
    int x;
    while(x!=0){
        cin>>x;
        
        for(int i=1; i<=x; i++){
            cout<<i;
            if(i<x){
                cout<<" ";
            }
            if(i==x){
                cout<<endl;
            }
        }
        
    }
 
    return 0;
}