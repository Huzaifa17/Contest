#include <bits/stdc++.h>
using namespace std;
int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int i, j, k = 0, n, m, t;
	cin >> n >> m;
	int arr[n];
	for (i = 0; i < n; ++i)
	{
		cin >> arr[i];
		if (arr[i] == m)
		{
			arr[i] = 0;
		}
	}
	for (i = 0; i < n; ++i)
	{
		if (arr[i] != 0)
		{
			if (k == 0)
			{
				cout << arr[i];
				k = 1;
			}
			else
			{
				cout << " " << arr[i];
			}
		}
	}
	cout << endl;
	return 0;
}
