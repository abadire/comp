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

struct node {
	int val = 0;
	int lev = 0;
};

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
	cin >> n >> m;
	set<int> visited;
	queue<node> q;
	q.push({n, 0});
	while (!q.empty())
	{
		node current = q.front();
		q.pop();

		if (current.val == m)
		{
			cout << current.lev;
			break;
		}
		else 
		{
			if (visited.find(current.val * 2) == visited.end() && current.val * 2 >= 0 && current.val < m)
			{
				q.push({current.val * 2, current.lev + 1});
			}
			if (visited.find(current.val - 1) == visited.end() && current.val - 1 >= 0)
			{
				q.push({current.val - 1, current.lev + 1});
			}
			visited.emplace(current.val);
		}
	}

	return 0;

}

