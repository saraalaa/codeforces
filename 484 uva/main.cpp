#include <iostream>
#include<bits/stdc++.h>
//484 uva
using namespace std;

int main()
{
    map<int,int>mp;
    vector<int>v;
    vector<int>::iterator it=v.begin();
    //string line;
    //getline(cin,line);
    //istringstream iss1(line);
    int x;
    //while(iss1.fail()==false){
    while(cin>>x){
        //iss1>>x;
        //cout<<x<<endl;
        mp[x]+=1;
        if(find(v.begin(),v.end(),x)==v.end()){
            v.push_back(x);
        }

    }
    //mp[x]-=1;
    /*for( pair<int,int> element : mp){
            //cout<<element.second;
            cout<<element.first<<" "<<element.second<<endl;
            }
     */
    for(it=v.begin();it<v.end();it++){
        cout<<*it<<" "<< mp.find(*it)->second<<endl;
    }

    return 0;
}
