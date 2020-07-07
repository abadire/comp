#include <iostream>
#include <string>
#include <vector>
#include <stack>
#define RD \
	freopen("input.txt", "r", stdin); \
	freopen("output.txt", "w", stdout)
using namespace std;



int main()
{
	RD;
	int count;
	cin >> count;

	auto rever = [](int a)
	{
		int ten = 1, res = 0;
		stack<int> s;
		while (a != 0)
		{
			s.push(a % 10);
			a = a / 10;
		}
		while (!s.empty())
		{
			res += ten * s.top();
			s.pop();
			ten *= 10;
		}
		return res;
	};

	while (count > 0)
	{
		int a, b;
		cin >> a >> b;
		cout << rever(rever(a) + rever(b)) << endl;
		count--;
	}
}