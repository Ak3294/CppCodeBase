#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;

	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int c = 0, o = 0, d = 0, e = 0, h = 0, f = 0;
		for (int i = 0; i < n; i++)
		{
			string s;
			cin >> s;
			int l = s.length();
			for (int j = 0; j < l; j++)
			{
				if (s[j] == 'c')
					c++;
				if (s[j] == 'd')
					o++;
				if (s[j] == 'd')
					d++;
				if (s[j] == 'e')
					e++;
				if (s[j] == 'h')
					h++;
				if (s[j] == 'f')
					f++;
			}
		}
		int count = 0;
		while (c != 0 && o != 0 && d != 0 && e != 0 && h != 0 && f != 0 && c > 1 && e > 1)
		{
			count++;
			c = c - 2;
			o--;
			d--;
			e - e - 2;
			h--;
			f--;
		}
		cout << count << endl;
	}
}
