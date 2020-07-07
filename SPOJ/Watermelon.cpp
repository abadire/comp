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

	int w;
	cin >> w;
	if (w == 2) cout << "NO";
	else cout << (w % 2 == 0 ? "YES" : "NO");

}