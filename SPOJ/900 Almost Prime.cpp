
#include <bits/stdc++.h>

#define endl '\n'
#define Inf numeric_limits<int>::max()
#define vi vector<int>
#define vd vector<double>
#define vs vector<string>
#define vb vector<bool>
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

	int in;
	cin >> in;

	vb isPrime(in+1, true);
	isPrime[0] = isPrime[1] = false;
	for (size_t i = 2; i <= in; ++i)
	{
		if (isPrime[i])
		{
			for (size_t j = i+i; j <= in; j += i)
			{
				isPrime[j] = false;
			}
		}
	}

	int nums = 0;
	for (size_t i = 2; i <= in; ++i)
	{
		int count = 0;
		for (int j = 2; j <= i/2; ++j)
		{
			if (isPrime[j] && i % j == 0 && ++count == 3) break;
		}
		if (count == 2) ++nums;
	}

	cout << nums;

	return 0;

}

