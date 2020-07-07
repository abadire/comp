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

int tenpPow(int p)
{
	if (p == 0) return 1;
	if (p == 1) return 10;
	int res = 1;
	for (size_t i = 0; i < p; ++i)
	{
		res *= 10;
	}
	return res;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	#ifdef LOCAL
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int m,s;
	cin >>m>>s;
	if (m*9 < s || (m > 1 && s == 0)) cout << "-1 -1";
	else if (m == 1 && s == 0) cout << "0 0";
	else
	{
		vc max;
		int maxnum = 0;
		for (size_t i = 0; i < m; ++i)
		{
			if (s >= 9) maxnum = 9;
			else maxnum = s;
			max.push_back('0' + maxnum);
			s -= maxnum;
		}
		string maxs(max.begin(), max.end());
		auto iter = max.rbegin();
		if (*iter == '0')
		{
			*iter++ = '1';
			while (*iter == '0') ++iter;
			*iter -= 1;
		}
		cout << string(max.crbegin(), max.crend()) << ' ' << maxs;
	}

	return 0;

}

