#include <bits/stdc++.h>

#define endl '\n'
#define Inf numeric_limits<int>::max()
#define vi vector<int>
#define vd vector<double>
#define vs vector<string>
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

	vi isPrime(1'000'000+1, true);

	isPrime[0] = isPrime[1] = false;

	for (size_t i = 2; i <= 1'000'000; ++i)
	{
		if (isPrime[i] && (long long)i*i < 1'000'000)
		{
			for (int j = i+i; j <= 1'000'000; j+=i)
			{
				isPrime[j] = false;
			}
		}
	}

	int in;
	cin >> in;

	while (in != 0)
	{
		ll num;
		cin >> num;
		int count = 0;
		for (size_t i = 2; i < 1'000'000; ++i)
		{
			if (isPrime[i] && num % i == 0)
			{
				if (2 == i && num != 4) count += 2;
				else count += 1;
				if (count > 1) break;
			}
			if ((ll)i*i > num) break;
		}
		if (count == 1) cout << "YES" << endl;
		else cout << "NO" << endl;
		--in;
	}

	return 0;

}

