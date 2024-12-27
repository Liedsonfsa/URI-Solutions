#include <iostream>
 
using namespace std;
 
int main() {
 
   int n, m;
   cin>>n;

   int cont=1;
   while(cont<=n){
       cin>>m;
       
       if(m==0) cout<<"NULL"<<endl;
       if(m>0 && m%2==0) cout<<"EVEN POSITIVE"<<endl;
       if(m<0 && m%2==0) cout<<"EVEN NEGATIVE"<<endl;
       if(m>0 && m%2!=0) cout<<"ODD POSITIVE"<<endl;
       if(m<0 && m%2!=0) cout<<"ODD NEGATIVE"<<endl;
       cont++;
   }
 
    return 0;
}