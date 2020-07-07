#include <bits/stdc++.h>

#define endl '\n'
#define Infi numeric_limits<int>::max()
#define Infd numeric_limits<double>::max()
#define vi vector<int>
#define vd vector<double>
#define vs vector<string>
#define vb vector<bool>
#define vc vector<char>
#define ll long long
#define ii pair<int, int>
#define vii vector<ii>

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

	int n;
	cin >> n;
	vii c;
	for (size_t i = 0; i < n * 2; ++i)
	{
		int a, b;
		cin >> a >> b;
		c.emplace_back(make_pair(a, b));
	}

	double res = 0;

	while (c.size() != 0)
	{
		double m = Infd;
		vii::iterator iter;
		for (size_t j = 1; j < c.size(); ++j)
		{
			double distance = pow(pow(c[0].first - c[j].first, 2) + pow(c[0].second - c[j].second, 2), 0.5);
			if (distance < m)
			{
				m = distance;
				iter = c.begin() + j;
			}
		}
		res += m;
		c.erase(c.begin());
		c.erase(iter);
	}

	cout << setprecision(3) << res;

	return 0;

}

