// tell size of the both strings
// add both strings and give it as output as a single string
// replace both strings first characters with each other 

#include <iostream>
using namespace std;

int main ()
{
    string a,b;
    cin >> a >> b;
    cout << a.size() << " " << b.size() << "\n";
    cout << a+b << "\n";
    swap(a[0],b[0]);
    cout << a << " " << b << "\n" ;
}