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

	int count;
	string s;
	unordered_map<string, int> db;
	cin >> count;
	while (count != 0)
	{
		cin >> s;
		if (db.count(s) != 0)
		{
			cout << s + to_string(++db[s]) << endl;
		}
		else 
		{
			db.insert({s, 0});
			cout << "OK" << endl;
		}
		--count;
	}
}