#include <iostream>
 
using namespace std;
 
int main() {
 
    int x, y;
    while(1){
        cin>>x;
        cin>>y;

        if(x==0 || y==0) break;

        if(x>0 && y>0) cout<<"primeiro\n";
        if(x<0 && y>0) cout<<"segundo\n";
        if(x<0 && y<0) cout<<"terceiro\n";
        if(x>0 && y<0) cout<<"quarto\n";
    }
 
    return 0;
}