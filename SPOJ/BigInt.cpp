#include <bits/stdc++.h>

using namespace std;

class BigInt
{
public:
	typedef vector<char>::iterator iterator;
	typedef vector<char>::const_iterator const_iterator;
	typedef vector<char>::reverse_iterator reverse_iterator;
	typedef vector<char>::const_reverse_iterator const_reverse_iterator;

	BigInt() {}
	BigInt(string str)
	{
		string::const_iterator iter = str.cbegin();
		while (*iter == '0') ++iter;
		s = vector<char>(iter, str.cend());
	}
	BigInt(const BigInt& i): s(i.s) {}
	BigInt(const reverse_iterator& beg, const reverse_iterator& end): s(beg, end) {}

	iterator               begin()        { return s.begin();  }
	const_iterator         begin() const  { return s.begin();  }
	iterator               end()          { return s.end();    }
	const_iterator         end() const    { return s.end();    }
	reverse_iterator       rbegin()       { return s.rbegin(); }
	const_reverse_iterator rbegin() const { return s.rbegin(); }
	reverse_iterator       rend()         { return s.rend();   }
	const_reverse_iterator rend() const   { return s.rend();   }

	BigInt reverse()
	{
		reverse_iterator iter = rbegin();
		while (*iter == '0') ++iter;
		return BigInt(iter, rend());
	}

	BigInt& operator++()
	{
		reverse_iterator iter = rbegin();
		while (iter != rend())
		{
			if (*iter == '9')
			{
				*iter++ = '0';
				if (iter == rend())
				{
					s.insert(s.begin(), '1');
				}
			}
			else
			{
				(*iter)++;
				return *this;
			}
		}
		return *this;
	}

	bool operator==(const BigInt& rhs)
	{
		return s == rhs.s;
	}

	bool operator!=(const BigInt& rhs)
	{
		return !(*this == rhs);
	}

private:
	vector<char> s;
};