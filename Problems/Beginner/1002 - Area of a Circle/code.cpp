#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
   double a, r, pi=3.14159;
   cin>>r;
   a=pi*(r*r);
   cout<<"A="<<fixed<<setprecision(4)<<a<<endl;
   
   
 
    return 0;
}