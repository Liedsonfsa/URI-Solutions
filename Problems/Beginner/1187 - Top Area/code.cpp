#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define pb push_back
#define ll long long
#define f first
#define s second
#define ALL(x) x.begin(), x.end()

const int inf = 1e9;
const int eps = 1e-9;
const int mod = 1e9+7;

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<ll> vll;

int main() { _
	
    double m[12][12], ans = 0.0;
	int count = 0;
	char c; cin >> c;

	for(int i = 0; i < 12; i++){
		for(int j = 0; j < 12; j++){
			cin >> m[i][j];
			
            if(j > i && j < 11 - i){
				ans += m[i][j];
				count++;
			}
		}
	}



	if(c == 'S') cout << fixed << setprecision(1) << ans << '\n';
	else cout << fixed << setprecision(1) <<  (ans / count) << '\n';

    return 0;
}
