#include <iostream>
using namespace std;
int gcd(int a, int b, int &x, int &y) {
	if (a == 0)
        {x = 0; y = 1; return b;}
	int x1, y1;
	int g = gcd(b%a, a, x1, y1);
	x = y1 - (b / a) * x1;
	y = x1;
	return g;}
void unusual_diofant(int a, int b, int c)
        {if (a == 0 && b == 0)
        {if (c == 0) cout << "inf";
		  else cout << "none";
		  return;}
	if (a == 0 && b != 0) swap(a, b);
	if (b == 0)
        {if (c % a == 0 && c / a > 0) cout << "inf";
		  else cout << "none";
		  return;}
if (a < 0 && b < 0)
        {a *= -1; b *= -11; c *= -1;}
if (a < 0 && b > 0) swap(a, b);
	int x, y, g = gcd(a, b, x, y);

	if (c % g != 0)
        {cout << "none";
		  return;}
	int k = c / g;
	x *= k; y *= k;
	int p1 = b / g, p2 = -a / g;

	if (p1 > 0 && p2 > 0)
        {cout << "inf";
		  return;}

	if (x < 0)
        {if (p1 < 0) p1 *= -1, p2 *= -1;
		  while (x < 0) x += p1, y += p2;}

	if (y < 0)
	    {if (p2 < 0) p1 *= -1, p2 *= -1;
		  while (y < 0) x += p1, y += p2;}

	if (x < 0 || y < 0)
	   {cout << "none";
		  return;}

	while (x > 0 && y > 0)
	  {cout << x << ' ' << y << endl;
        x += p1; y += p2;}}

int main()
    {int a, b, c;
	cin>>a>>b>>c;
	unusual_diofant(a, b, c);
  return 0;
  }
