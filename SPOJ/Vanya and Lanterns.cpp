#include <bits/stdc++.h>

#define endl '\n'
#define Inf numeric_limits<int>::max()
#define vi vector<int>
#define vd vector<double>

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

	int n, l, el;
	set<int> s;
	cin >> n >> l;
	for (size_t i = 0; i < n; ++i)
	{
		cin >> el;
		s.insert(el);
	}

	vi v(s.begin(), s.end());
	sort(v.begin(), v.end());

	vd ranges(v.size()+1, 0.0);
	ranges.front() = v.front();
	ranges.back() = l - v.back();

	for (size_t i = 1; i < v.size(); ++i)
	{
		ranges[i] = (v[i] - v[i-1])/2.0;
	}

	cout << fixed << *max_element(ranges.begin(), ranges.end());
}