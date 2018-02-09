#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while(cin>>n&&n!=0){
        if(n==1){
            cout<<"Discarded cards:"<<endl;
            cout<<"Remaining card: 1"<<endl;
        }
        else{
        queue<int>deleted;
        deque<int>num;
        for(int i=1;i<=n;i++){
            num.push_back(i);
        }
        while(num.size()>1){
            deleted.push(num.front());
            num.pop_front();
            num.push_back(num.front());
            num.pop_front();
        }
        cout<<"Discarded cards: ";
        while(deleted.size()>1){
            cout<<deleted.front()<<", ";
            deleted.pop();
        }
        cout<<deleted.front()<<endl;
        cout<<"Remaining card: "<<num.front()<<endl;
    }}
    return 0;
}
