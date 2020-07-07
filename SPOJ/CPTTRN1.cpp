#include <iostream>
#define RD \
	freopen("input.txt", "r", stdin); \
	freopen("output.txt", "w", stdout)
using namespace std;

int main()
{
	RD;
	int count;
	bool start, s;
	cin >> count;
	for (int i = 0; i != count; ++i)
	{
		int h, w;
		cin >> h >> w;
		start = true;
		for (int j = 0; j != h; ++j)
		{
			s = start;
			for (int k = 0; k != w; ++k)
			{
				cout << (s ? "*" : ".");
				s = !s;
			}
			start = !start;
			cout << endl;
		}
		cout << endl;
	}
}