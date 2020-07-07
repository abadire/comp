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

	int n;
	cin >> n;
	vi seq;
	for (size_t i = 0; i < n; ++i)
	{
		int in;
		cin >> in;
		seq.emplace_back(in);
	}

	vector<vi> ans;
	for (int i = 1; i <= n; ++i)
	{
		ans.emplace_back(vi(i, 0));
	}

	int out = ans[0][0] = 1 - seq[0] + accumulate(seq.begin()+1, seq.end(), 0);

	for (int i = 1; i != n; ++i)
	{
		ans[i][0] = i+1 - accumulate(seq.begin(), seq.begin() + i+1, 0) + accumulate(seq.begin() + i+1, seq.end(), 0);
		out = max(out, ans[i][0]);
		for (int j = 1; j != ans[i].size(); ++j)
		{
			ans[i][j] = seq[j-1] == 1 ? ans[i][j-1] + 1 : ans[i][j-1] - 1;
			out = max(out, ans[i][j]);
		}
	}
	
	cout << out;

	return 0;

}

