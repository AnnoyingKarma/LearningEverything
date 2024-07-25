#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        set<pair<char,char>>s;
        long long int n;
        cin>>n;
        string str;
        cin>>str;
        for(long long int i=0;i<str.size()-1;i++){
        char a,b;
        a=str[i];
        b=str[i+1];
        s.insert({a,b});
        }
        cout<<s.size()<<endl;
}
}