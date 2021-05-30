#include<bits/stdc++.h>
#include <string>
using namespace std;

#define fo(u,k,n) for(u=k;u<=n;u++)
#define ll long long

typedef vector<ll>		    vl;


ll u, k, j, l, n, m;



void bekr() {
	cin >> n >> m >> k;
	vl str(k);
	fo(u, 0, k - 1)cin >> str[u];
	map<ll, ll>mp;
	fo(u, 0, k - 1) {
		if (str[u] <= n)
			mp[str[u]]++;
	}
	ll c = 0;
	for (auto it : mp) {
		if (it.second >= 2)c++;
	}
	cout << c << " ";
	for (auto it : mp) {
		if (it.second >= 2) cout << it.first << " ";
	}
	cout << endl;


}

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	ll t = 1; cin >> t;
	while (t--) {
		bekr();
	}
	return 0;
}
