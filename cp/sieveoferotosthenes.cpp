#include <iostream> 
using namespace std;

const int Nmax=100001;
bool isPrime[Nmax];

void soe(int n)
{
    for(int i=2; i<=n; i++)
    {
        isPrime[i] = true;
        for (int i=2; i<=n/2; i++)
        {
            if(isPrime[i] == true)
            {
                for(int j=i*2; j<=n; j+=i)
                {
                    isPrime[j]=false; 
                }
            }
        }
    }
}

int main()
{
    soe(2);
    for(int i=2; i<=20; i++)
    if(isPrime[i] == true)
    cout << i << " ";

}