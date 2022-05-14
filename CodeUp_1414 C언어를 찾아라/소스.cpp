#include <iostream>
using namespace std;

int main()
{
	string str;
	cin >> str;
	int c_cnt = 0, cc_cnt = 0;
	for (int i = 0; str[i]; i++)
	{
		if (str[i] == 'c' || str[i] == 'C')
		{
			c_cnt++;
			if (str[i + 1] == 'c' || str[i + 1] == 'C')
				cc_cnt++;
		}
	}
	cout << c_cnt << endl << cc_cnt;

	return 0;
}