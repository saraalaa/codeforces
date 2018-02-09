#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x;
    while(cin>>x&&x!=0){
        int a=0,b=0;
        int flag=1;
        for(int i=0;i<32;i++){
            if((x&(1<<i))&&flag){
                flag=0;
                a|=(1<<i);
            }
            else if((x&(1<<i))&&!flag){
                flag=1;
                b|=(1<<i);
            }
        }
        cout<<a<<" "<<b<<endl;
    }
    return 0;
}
