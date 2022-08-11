#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long int ll;
typedef long double ld;
typedef pair <int, int> pii;
typedef vector <int> vi;
 
const int MAXn = 1e6 + 10, MAXsq = 1e3 + 10;
const int MAXg = MAXn / MAXsq + 10;
 
struct Point 
{
	int X, Y;
	int ColumnIdx, Idx;
};
 
Point points[MAXn];
vi columns[MAXg];
 
bool cmp(Point l, Point r)
{
	int gL = l.Y / MAXsq, gR = r.Y / MAXsq;
	if (gL != gR)
		return gL < gR;
 
	if (l.X != r.X)
	{
		if (gL % 2)
			return l.X > r.X;
		else
			return l.X < r.X;
	}
 
	if (l.ColumnIdx % 2)
		return l.Y > r.Y;
	else
		return l.Y < r.Y;
}
 
bool solve()
{
	int n;
	cin >> n;
 
	for (int i = 0; i < n; i++)
	{
		cin >> points[i].X >> points[i].Y;
		points[i].Idx = i + 1;
		columns[points[i].Y / MAXsq].push_back(points[i].X);
	}
	
	for (int i = 0; i < MAXg; i++)
	{
		sort(columns[i].begin(), columns[i].end());
		columns[i].erase(unique(columns[i].begin(), columns[i].end()), columns[i].end());
	}
	
	for (int i = 0; i < n; i++)
	{
		int group = points[i].Y / MAXsq;
		points[i].ColumnIdx = lower_bound(columns[group].begin(),
				columns[group].end(),
			       	points[i].X)
			- columns[group].begin();
	}
 
	sort(points, points + n, cmp);
 
	for (int i = 0; i < n; i++)
		cout << points[i].Idx << ' ';
 
	return 0;
}
 
int main()
{
	    ios :: sync_with_stdio(0), cin.tie(0), cout.tie(0);
 
    	int ntc = 1;
    	//cin >> ntc;
    	while (ntc--)
        	solve();
}
