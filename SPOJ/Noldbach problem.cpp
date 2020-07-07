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

	vb isPrime(1000001, true);
	isPrime[0] = isPrime[1] = false;
	vi primes;
	for (size_t i = 2; i <= 1000001; ++i)
	{
		if (isPrime[i] == true && (ll)i*i <= 1000001)
		{
			for (size_t j = i+i; j <= 1000001; j+=i)
			{
				isPrime[j] = false;
			}
			primes.emplace_back(i);
		}
	}

	int n, k;
	cin >> n >> k;

	for (size_t i = 0; i < primes.size() - 2; ++i)
	{
		int num = primes[i] + primes[i+1] + 1;
		if (num <= n)
		{
			if (find(primes.begin(), primes.end(), num) != primes.end() && --k == 0)
			{
				break;
			}
		}
		else
		{
			break;
		}
	}
	if (k <= 0) cout << "YES";
	else cout << "NO";

	return 0;

}

