#include <bits/stdc++.h>
using namespace std;
int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int i, j, k, n, m, t;
	cin >> n >> m;
	n = n + m;
	if (n >= 15 && m >= 8)
	{
		cout << 1 << endl;
	}
	else if (n >= 10 && m >= 3)
	{
		cout << 2 << endl;
	}
	else if (n >= 3)
	{
		cout << 3 << endl;
	}
	else
	{
		cout << 4 << endl;
	}
	return 0;
}
