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
const int maxn = 1e3+10;

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pii> vii;

int main() { _

	int n; cin >> n;
	int v[12];
	v[1] = 1;

	for(int i = 2; i <= 11; i++){
		v[i] = v[i-1] * i;
	}

	int ans = 0;
	for(int i = 11; i >= 1; i--){
		if(v[i] <= n){
            int r = n / v[i];
            ans += r;
            n -= (v[i] * r);
		}
	}

	cout << ans << '\n';

    exit(0);
}
