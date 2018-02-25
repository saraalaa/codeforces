#include <iostream>
#include<bits/stdc++.h>
// 10282 uva
using namespace std;

int main()
{
    map<string,string>mp;
    string str;
    while(getline(cin, str) && str.length()>0){
    string word,forign;
    stringstream ss;
    ss << str;
    ss >> word;
    ss >> forign;
    mp[forign]=word;
    }
    string x;
    while(cin>>x){
        map<string,string>::iterator it =mp.find(x);
        if(it!=mp.end()){
            cout<<it->second<<endl;
        }
        else{
            cout<<"eh\n";
        }
    }
    return 0;
}
