#include<bits/stdc++.h>
using namespace std;

#define fo(u,k,n) for(u=k;u<=n;u++)
#define all(x) x.begin(), x.end()
#define ll long long
typedef pair<ll, ll>	    pll;
typedef vector<pll>		    vpll;

ll u, k, j, l, n, m;


void timepass() {
	ll nt, fh;
	cin >> n >> nt >> fh;
	vpll arr(n);
	fo(u, 0, n - 1) {
		cin >> j;
		cin >> k;
		arr[u] = {j, k};
	}
	sort(all(arr));
	ll tot = arr[0].first - 0;
	ll maxi = arr[0].second;
	fo(u, 1, n - 1) {
		if (arr[u].first > maxi) {
			tot += abs(arr[u].first - maxi);
		}
		maxi = max(maxi, arr[u].second);
	}
	tot += fh - maxi;
	if (tot >= nt)cout << "YES" << endl;
	else cout << "NO" << endl;
}


int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	ll t = 1; cin >> t;
	while (t--) {
		timepass();
	}
	return 0;
}