#include <iostream>
#include<bits/stdc++.h>
//add all
using namespace std;

int main()
{
    int n;
    int sm=0,a,b,x;
    while(cin>>n&&n!=0){
        priority_queue<int>q;
        while(n--){
            cin>>x;
            q.push(-x);
        }
        while(q.size()>1){
            a=-q.top();q.pop();
            b=-q.top();q.pop();
            sm+=(a+b);
            q.push(-(a+b));
        }
        cout<<sm<<endl;
        sm=0;
    }

    return 0;
}
