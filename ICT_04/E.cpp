#include <bits/stdc++.h>
using namespace std;
int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int i, j, k = 0, n, m, t;
	char s[1500];
	cin >> s;
	for (i = 0; s[i] != '\0'; ++i)
	{
		if ((i + 1) % 2 == 0)
		{
			if (s[i] < 'A' || s[i] > 'Z')
			{
				k = 1;
			}
		}
		else
		{
			if (s[i] < 'a' || s[i] > 'z')
			{
				k = 1;
			}
		}
	}
	if (k == 0)
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}
	return 0;
}
