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

	int count, g, t = 0;
	map<int, int> nums{{1,0}, {2,0}, {3,0}, {4,0}};

	cin >> count;
	for (size_t i = 0; i < count; ++i)
	{
		cin >> g;
		++nums[g];
	}

	t += nums[4];

	t += nums[3];
	nums[1] -= nums[3];

	if (nums[2] % 2 == 0) t += nums[2] / 2;
	else
	{
		t += (nums[2]+1) / 2;
		nums[1] -= 2;
	}

	if (nums[1] > 0) t += ceil(nums[1] / 4.0);

	cout << t;
}