#include <bits/stdc++.h>

#define endl '\n'

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

	int a, n, k;
	cin >> a >> n >> k;

	vector<int> vec(k, 0);

	a = a % (int)pow(n+1, k);
	for (size_t i = 0; i < k; ++i)
	{
		cout << a % (n+1) << ' ';
		a = a / (n+1);
	}
}