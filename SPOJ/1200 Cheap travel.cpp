#include <bits/stdc++.h>

#define endl '\n'
#define Inf numeric_limits<int>::max()
#define vi vector<int>
#define vd vector<double>
#define vs vector<string>
#define vb vector<bool>
#define ll long long

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	#ifdef LOCAL
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n, m, a, b;
	cin >> n >> m>>a >>b;

	vi ans(n+1, 0);
	ans[0] = 0;
	ans[1] = min(a, b);
	for (int i = 2; i <= n; ++i)
	{
		ans[i] = min(ans[i-1] + a, min((i / m > 0 ? ans[i-m] + b : b), ans[i-1] + b));
	}
	cout << ans[n];

	return 0;

}

