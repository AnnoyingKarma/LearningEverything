#include <iostream>
#include <vector>
using namespace std;

int f[100], expo[100], len;

void primeFac(int n)
{
   if(n==1)
   {
      len++;
      f[len]=2;
      expo[len]=0;
   }
   int d=2;
   while(d*d <=n && n>1)
   {
      int e=0;
      while(n% d==0)
      {
         e++;
         n/=d;
      }
      if(e>0){
         len++;
         f[len]=d;
         expo[len]=e;
      }
      d++;
   }
   if(n>1){
      len++;
      f[len]=n;
      expo[len] = 1;
   }
}


int main()
{
int t; cin>>t;
while(t--)
{

int n; cin>>n;
primeFac(n);
for(int i=1; i<=len; i++)
{
   cout << f[i] << " " << expo[i] << "\n";
}
cout << "\n";
} 

    
}