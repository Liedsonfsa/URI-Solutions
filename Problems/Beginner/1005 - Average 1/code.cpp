#include<bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    double x, y, media;
    cin>>x>>y;
    
    x=x*3.5;
    y=y*7.5;
    media=(x+y)/(3.5 + 7.5);

    cout<<fixed;
    cout<<setprecision(5)<<"MEDIA = "<<media<<endl;
    
    return 0;
}