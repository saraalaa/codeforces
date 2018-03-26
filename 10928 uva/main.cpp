#include <iostream>
#include<bits/stdc++.h>
// 10928 uva my dear neighbour
using namespace std;

int main()
{
    int testcase;
    cin>>testcase;
    bool newline=false;
    while(testcase--){
        string line;
        if(newline){getline(cin,line);}
        newline=true;
        int n,mn=1001,sum=0;
        vector<int> v;
        cin>>n;
        bool tf=true;
        for(int i=1;i<=n;i++){
            string s;
            if(tf){getline(cin,s);tf=false;}
            getline(cin,s);
            stringstream ss( s );
            int x;
            while(ss>>x){
            sum++;
            }
            if(sum<mn){
                mn=sum;
                v.clear();
                v.push_back(i);
            }
            else if(sum==mn){
                v.push_back(i);
            }
            sum=0;
        }
        vector<int>::iterator iter=v.begin();
        bool b=false;
        for(iter=v.begin();iter<v.end();iter++){
            if(b){cout<<" ";}
            cout<<*iter;
            b=true;
        }
        cout<<endl;
        //string s;
        //getline(cin,s);
    }
    return 0;
}
