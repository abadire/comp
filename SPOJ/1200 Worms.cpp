#include <bits/stdc++.h>

#define endl '\n'
#define Inf numeric_limits<int>::max()
#define vi vector<int>
#define vd vector<double>
#define vs vector<string>
#define vb vector<bool>
#define vc vector<char>
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

	int n, m;
	cin >> n;
	vi a{0};
	for (size_t i = 1; i <= n; ++i)
	{
		int in;
		cin >> in;
		for (size_t j = 0; j < in; ++j)
		{
			a.emplace_back(i);
		}
	}

	cin >> m;
	for (size_t i = 0; i < m; ++i)
	{
		int in;
		cin >> in;
		cout << a[in] << endl;
	}

	return 0;

}

