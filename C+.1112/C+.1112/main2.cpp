#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
	int StrToInt(string str) {
		int n = str.size(), s = 1;
		int i;
		long long res = 0;

		if (!n) 
			return 0;

		if (str[0] == '-') 
			s = -1;

		if (str[0] == '-' || str[0] == '+')
		{
			i = 1;
		}
		else
		{
			i = 0;
		}
		for (i; i < n; ++i)
		{
			if (str[i] <= '0' || str[i] >= '9') 
				return 0;

			res = res * 10 + str[i]-'0';
		}

		res = res * s;
		return res;
	}
};

int main()
{
	Solution T;
	string s1 = "+21474836471a33";
	string s2 = "1a33";

	T.StrToInt(s1);
	T.StrToInt(s2);


	system("pause");
	return 0;
}