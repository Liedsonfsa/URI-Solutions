#include <iostream>
 
using namespace std;
 
int beto(int x, int y);
int carlos(int x, int y);
int rafael(int x, int y);

int main() {
 
    int n, x, y, cont = 1, b, r, c;
    cin >> n;
    
    while(cont <= n){
        cin >> x;
        cin >> y;
        b = beto(x,y);
        c = carlos(x,y);
        r = rafael(x,y);
        if(b > c && b > r){
            cout << "Beto ganhou\n";
        }
        if(c > b && c > r){
            cout << "Carlos ganhou\n";
        }
        if(r > b && r > c){
            cout << "Rafael ganhou\n";
        }
        cont++;
    }

    return 0;
}

int beto(int x, int y){
    int ret;
    ret = (2 * (x * x)) + ((5 * y) * (5 * y));
    
    return ret;
}

int carlos(int x, int y){
    int ret;
    ret = -100 * x + (y * y * y);
    
    return ret;
}

int rafael(int x, int y){
    int ret;
    ret = ((3 * x) * (3 * x)) + y * y;

    return ret;
}