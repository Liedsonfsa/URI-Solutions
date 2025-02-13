#include <iostream>
 
using namespace std;
 
int main() {
 
    int v, n;

    while(scanf("%d%d", &v, &n) != EOF){
        cout << (v * 2) * n;
        cout << "\n";
    }
 
    return 0;
}