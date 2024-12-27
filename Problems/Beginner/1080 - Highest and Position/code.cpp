#include <iostream>
 
using namespace std;
 
int main() {
 
    int n, maior, ind, i;
    for(i=1; i<=100; i++){
        cin>>n;
        
        if(i==1){
            maior=n;
            ind=i;
        }
        if(n>maior){
            maior=n;
            ind=i;
        }
    }

    cout<<maior<<endl;
    cout<<ind<<endl;
 
    return 0;
}