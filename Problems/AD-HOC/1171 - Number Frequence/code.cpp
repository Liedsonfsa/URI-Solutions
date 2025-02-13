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
	int n, num; cin >> n;
	map<int, int> mp;
	for(int i = 1; i <= n; i++){
		cin >> num;
		mp[num]++;
	}

	for(auto x : mp){
		cout << x.f << " aparece " << x.s << " vez(es)\n";
	}

    return 0;
}
