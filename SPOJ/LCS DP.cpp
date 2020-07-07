#include <bits/stdc++.h>

#define endl '\n'
#define Inf numeric_limits<int>::max()
#define vi vector<int>
#define vd vector<double>
#define vs vector<string>

using namespace std;

string LCS(const string& S, int n, const string& T, int m)
{
	string result = "";
	if (n==0 || m==0) return "";
	if (S[n-1] == T[m-1]) result += LCS(S,n-1,T,m-1) + S[n-1]; // no harm in matching up
	else 
	{
		string s1 = LCS(S,n-1,T,m);
		string s2 = LCS(S,n,T,m-1);
		result += s1.size() > s2.size() ? s1 : s2 ;
	}
	return result;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
#	ifdef LOCAL
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	string s = LCS("ABAZDC", 6, "BACBAD", 6);
	cout << s;

}

