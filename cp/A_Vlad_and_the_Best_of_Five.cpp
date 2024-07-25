#include <iostream>
#include <algorithm>
using namespace std;
void A_Vlad_and_the_Best_of_Five() {
    string s;
    cin>>s;
    sort(s.begin(), s.end());
    cout << s[2] << "\n";
}
int main() {
    int n;
    cin >> n;
    while (n--) {
        A_Vlad_and_the_Best_of_Five();
    }
    return 0;
}