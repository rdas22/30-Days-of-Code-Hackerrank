#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t,i;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        for(i=0;i < s.size();++i)
            if((i%2) == 0) cout<<s[i];
        cout<<" ";
        for(i=0;i < s.size();++i)
            if((i%2) != 0) cout<<s[i];
        cout<<"\n";
    }   
    return 0;
}
