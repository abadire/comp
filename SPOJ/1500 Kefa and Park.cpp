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

	int n,m;
	cin >> n >> m;
	
	vb cats{false};
	bool cat;
	for (int i = 0; i != n; ++i)
	{
		cin >> cat;
		cats.emplace_back(cat);
	}

	vector<set<int>> tree(n+1, set<int>{});
	int beg, end;
	for (int i = 0; i != n - 1; ++i)
	{
		cin >> beg >> end;
		tree[beg].emplace(end);
		tree[end].emplace(beg);
	}

	vi lengths(n+1, 0);
	lengths[1] = cats[1];

	set<int> visited{1};
	
	queue<int> q;
	q.push(1);
	int leaves = 0;
	while(!q.empty())
	{
		int cur = q.front();
		q.pop();

		if (lengths[cur] <= m)
		{
			if (tree[cur].empty())
			{
				++leaves;
			}
			else 
			{
				for (auto child : tree[cur])
				{
					if (cats[child]) lengths[child] = lengths[cur] + 1;
					if (visited.find(child) == visited.end()) 
					{
						q.push(child);
						tree[child].erase(cur);
						visited.insert(child);
					}
				}
			}
		}
	}
	cout << leaves;


	return 0;

}

