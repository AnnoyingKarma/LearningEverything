#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main() {
    // Complete the code.
    // if <9 then print alphabetic number
    //else print even or odd
    
    int a,b;
    cin >> a >> b;
    
    string s[9]={"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
        
    for(int i=a; i<=b; i++)
    {  
    if(i<=9)
    {
        int a= i-1;
        cout << s[a] << endl;
    }
    else if (i%2==0)
    {   cout << "even" << endl; }
    else
    cout << "odd" << endl;
    }

    }
    