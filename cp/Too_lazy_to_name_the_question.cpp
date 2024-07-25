#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int gcd(int a, int b)
{
    if (a==0)
        return b;
    return gcd(b%a, a);
}

int lcm(int a, int b)
{
    return (a*b)/gcd(a, b);
}

int main()
{
	int a,b,c,d;
	vector <int> v;
	cin>>a>>b>>c;
    int l = lcm(a,b);
	for(int i=1; i<=c; i++)
	{
		v.push_back(a*i);
        v.push_back(b*i);
	}
    sort(v.begin(), v.end());
    d=v[c];
    cout << d << " ";
    if(d%a==0&&d%b==0)
    {
        while(d!=0)
        {cout << d-l << " ";
        d=d-a*b;}

    }
    else if(d%a==0)
    {
        while(d!=0)
        {cout << d-a << " ";
        d=d-a;}
    }
    else if(d%b==0)
    {
        while(d!=0)
        {cout << d-b << " ";
        d=d-b;}
    }

}