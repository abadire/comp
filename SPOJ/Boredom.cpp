#include <bits/stdc++.h>

#define endl '\n'
#define Inf numeric_limits<int>::max()
#define vi vector<int>
#define vd vector<double>
#define vs vector<string>

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

	int ans[10'001];
	int a[10'001];
	int i;
	cin >> i;
	while(i != 0) 
	{
		int c;
		cin >> c;
		++a[c];
		--i;
	}

	ans[0] = 0;
	ans[1] = a[1];

	for (i = 2; i != 10001; ++i)
	{
		ans[i] = max(ans[i-1], ans[i-2] + a[i]*i);
	}

	cout << ans[10000];

}

