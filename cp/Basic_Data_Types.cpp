#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main() {
    // Complete the code.
    int a;
    long long  b;
    char c;
    float d;
    double e;
    cin>>a>>b>>c>>d>>e;
    
    // 
    cout << a <<endl << b << endl<< c << endl << fixed << setprecision(3) << d<< endl << fixed << setprecision(9)<<e;
    
    
    return 0;
}
// problem was i wasn't using fixed 
// it was providing value in scientific numbers that why using fixed is important