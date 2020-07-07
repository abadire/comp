#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <cmath>

#define RD \
	freopen("input.txt", "r", stdin); \
	freopen("output.txt", "w", stdout)

using namespace std;



int main()
{
	RD;

	int c, i = 0, res = 0;
	cin >> c;
	while (c != 0)
	{
		while (c != 0)
		{
			i += pow(c, 2);
			c -= 1;
		}
		cout << i << endl;
		i = 0;
		cin >> c;
	}

	return 0;
}