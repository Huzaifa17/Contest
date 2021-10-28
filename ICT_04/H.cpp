#include <bits/stdc++.h>
using namespace std;
int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	long long int i, j, k, n, m, t, min = 1000000001, c = 0, a, p, x;
	cin >> n;
	for (i = 0; i < n; ++i)
	{
		cin >> a >> p >> x;
		if ((a * 10) < (x * 10 - 5))
		{
			c = 1;
			if (p < min)
			{
				min = p;
			}
		}
	}
	if (c == 1)
	{
		cout << min << endl;
	}
	else
	{
		cout << -1 << endl;
	}
	return 0;
}
