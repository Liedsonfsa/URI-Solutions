#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    double pi, volume, r;
    pi = 3.14159;
    
    cin >> r;
    
    volume = (4.0/3.0)*pi*(r*r*r);
    
    cout <<"VOLUME = "<<fixed<<setprecision(3)<<volume<<endl;
 
    return 0;
}