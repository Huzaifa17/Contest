#include <bits/stdc++.h>
using namespace std;
int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int i, j, k, n, m, t, v, s, d;
	cin >> v >> t >> s >> d;
	s = s * v;
	t = t * v;
	if (d >= t && d <= s)
	{
		cout << "No" << endl;
	}
	else
	{
		cout << "Yes" << endl;
	}
	return 0;
}
