#include <iostream>
#include<bits/stdc++.h>
// dragon of loowater uva
using namespace std;

int main()
{
    int dragon,knight;
    while(cin>>dragon>>knight&&dragon!=0&&knight!=0){
        multiset<int>drag;
        multiset<int>kni;
        int x,res=0,sum=0;
        for(int i=0;i<dragon;i++){
            cin>>x;
            drag.insert(x);
        }
        for(int i=0;i<knight;i++){
            cin>>x;
            kni.insert(x);
        }
        multiset<int>::iterator it=drag.begin();
        multiset<int>::iterator iter=kni.begin();

        //for(int i=0;i<dragon;i++){
        while(it!=drag.end()){
            if(iter==kni.end()){break;}
            //cout<<"in for *it "<<*it<<endl;
            if(*it<=*iter){
                //cout<<"*iter "<<*iter<<" it "<<*it;
                sum++;
                res+=*iter;
                //cout<<" sum "<<sum<<" res "<<res<<endl;
                *iter++;
                *it++;
                //cout<<"after *it "<<*it<<endl;
            }
            else{
                *iter++;
            }
        }
        if(sum==dragon){
            cout<<res<<endl;
        }
        else{
            cout<<"Loowater is doomed!"<<endl;
        }
    }
    return 0;
}
