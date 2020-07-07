#include <bits/stdc++.h>

#define endl '\n'
#define Infi numeric_limits<int>::max()
#define Infd numeric_limits<double>::max()
#define vi vector<int>
#define vd vector<double>
#define vs vector<string>
#define vb vector<bool>
#define vc vector<char>
#define ll long long
#define ii pair<int, int>
#define vii vector<ii>

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


	int day, month, year;
	cin >> day >> month >> year;
	int century = year / 100;
	year = year % 100;
	cout << (day + (int)floor(2.6 * month - 0.2) - 2 * century + year + year / 4 + century / 4) % 7;
	return 0;

}

