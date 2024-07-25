#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
	unsigned long long t,n,cnt,sum=0;
	string s;
 	cin>>t;
	while(t--)
	{
		cin>>n;
		cin>>s;
		cnt=n-1;
		for(unsigned long long i=0; i<n; i++)
		{
			if(s[i]=='1')
			{
				if(cnt==0)
				{sum=sum+1;}
				else
				{sum=sum+pow(2,cnt);}
			}
			cnt--;
		}

        cout << sum << endl;
		sum=0;
	}

}
