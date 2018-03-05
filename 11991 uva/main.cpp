#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    while(cin>>n>>m){
        vector< vector <int> > v(1000001);
        //vector<vector<int>>::iterator it;
        int x;
        for(int i=0;i<n;i++){
            cin>>x;
            v[x].push_back(i+1);
        }
        int k,u;
        for(int i=0;i<m;i++){
            cin>>k>>u;
            if(v[u].size()>=k){cout<<v[u][k-1]<<endl;}
            else {cout<<0<<endl;}
        }
    }
    return 0;
}
