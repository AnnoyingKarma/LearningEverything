#include<iostream>

int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
    int a,b,c;
    std::cin>>a>>b>>c;
    b+=(c/2);
    if(c%2==0) a+=(c/2);
    else a+=(c/2)+1;

    if(a>b) std::cout << "First\n";
    else std::cout << "Second\n";
    }
}