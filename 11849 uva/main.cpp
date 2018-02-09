#include <iostream>
#include<bits/stdc++.h>
//cd uva
using namespace std;

int main()
{
   int n,m;
   while(cin>>n>>m&&!(n==0&&m==0)){
        set<int>s;
        int x;
        for(int i=0;i<n+m;i++){
            cin>>x;
            s.insert(x);
        }
        cout<<(n+m)-s.size()<<endl;
   }
    return 0;
}
