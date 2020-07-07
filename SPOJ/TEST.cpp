#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int i;
	while (cin >> i)
	{
		if (i == 42) break;
		cout << i << endl;
	}
	return 0;
}