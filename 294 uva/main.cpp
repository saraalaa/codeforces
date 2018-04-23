#include <iostream>
#include<bits/stdc++.h>
//uva 294
using namespace std;

vector<int> divisors(int n){
    vector<int>v;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            v.push_back(i);
            if(i*i!=n)v.push_back(n/i);
        }
    }
    return v;
}
int main()
{
    int testcase;
    cin>>testcase;
    while(testcase--){
        int l,u;
        cin>>l>>u;
        int maxnum=0;
        int maxx=0;
        for(int i=l;i<=u;i++){
            int x=divisors(i).size();
            if(x>maxx){
                maxx=x;
                maxnum=i;
            }
        }
        cout<<"Between "<<l<<" and "<<u<<", "<<maxnum<<" has a maximum of "<<maxx<<" divisors."<<endl;
    }
    return 0;
}
