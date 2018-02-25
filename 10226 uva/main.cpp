#include <iostream>
#include<bits/stdc++.h>
// 10226 uva
using namespace std;
int main()
{
    int testcases;
    bool tf=true;
    cin>>testcases;
    string s;
    //getline(cin,s);
    while(testcases--){
        string s;
       // cout<<endl;
        if(tf==true){getline(cin,s);getline(cin,s); tf=false;}

        int nline=0;
        double num;
        map<string,int>mp;
        map<string,int>::iterator it=mp.begin();
        while(getline(cin,s)&&s.length()>0){
            nline++;
            mp[s]++;
            //cout<<nline;
        }
       // cout<<nline;
        for( pair<string,int> element : mp){
            //cout<<element.second;
            num=double(element.second)/nline*100;
            cout<<element.first<<" "<<fixed<<setprecision(4)<<num<<endl;
            }
            if(testcases!=0)cout<<endl;
    }
    return 0;
}
