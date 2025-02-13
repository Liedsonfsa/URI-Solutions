#include <iostream>
 
using namespace std;
 
int main() {
    int n; cin >> n;
    int v[n+1] = {0};
    
    for(int i = 1; i < n; i++){
        int c; cin >> c;
        v[c] = 1;
    }
    
    int ans = 0;
    for(int i = 1; i <= n; i++){
        if(!v[i]) ans = i;
    }
    
    cout << ans << '\n';
 
    return 0;
}