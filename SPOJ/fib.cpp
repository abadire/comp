#include <bits/stdc++.h>

#define endl '\n'
#define Inf numeric_limits<int>::max()
#define vi vector<int>
#define vd vector<double>
#define vs vector<string>

using namespace std;

int fib(int n)
{
	int result;
	if (n == 1 || n == 0) result = 1;
	else result = fib(n-1) + fib(n-2);
	return result;
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

	int i;
	cin >> i;
	cout << fib(i);
}

