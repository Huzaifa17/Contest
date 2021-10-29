#include <bits/stdc++.h>
using namespace std;
int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int i, j, k, n, m, t;
	int min1 = 10000005, min2 = 10000005, m1 = 10000005, m2 = 10000005, min, c1, c2, sum, sum_min = 1000000001;
	cin >> n;
	int a[n], b[n];
	cin >> a[0] >> b[0];
	m1 = a[0];
	m2 = b[0];
	for (i = 1; i < n; ++i)
	{
		cin >> a[i] >> b[i];
		if (a[i] < m1)
		{
			m1 = a[i];
			c1 = i;
		}
		if (b[i] < m2)
		{
			m2 = b[i];
			c2 = i;
		}
		sum = a[i] + b[i];
		if (sum < sum_min)
		{
			sum_min = sum;
		}
	}
	if (c1 == c2)
	{
		for (i = 0; i < n; ++i)
		{
			if (i == c1)
			{
				continue;
			}
			if (a[i] < min1)
			{
				min1 = a[i];
			}
			if (b[i] < min2)
			{
				min2 = b[i];
			}
		}
		if (m1 > min2)
		{
			min2 = m1;
		}
		if (m2 > min1)
		{
			min1 = m2;
		}
		if (min1 > min2)
		{
			min1 = min2;
		}
	}
	else
	{
		if (m1 > m2)
		{
			min1 = m1;
		}
		else
		{
			min1 = m2;
		}
	}
	if (min1 < sum_min)
	{
		cout << min1 << endl;
	}
	else
	{
		cout << sum_min << endl;
	}
	return 0;
}
