#include <iostream>
#include<bits/stdc++.h>
//uva 10789
using namespace std;
vector<bool>prime(2001,true);
void sieve(){
    prime[0]=prime[1]=false;
    for(int i=2;i*i<2001;i++){
        if(prime[i]){
            for(int j=i*i;j<=2001;j+=i){
                prime[j]=0;
            }
        }
    }
}
int main()
{
    sieve();
    int testcase;
    cin>>testcase;
    string s;
    for(int t=0;t<testcase;t++){
        bool flag=true;
        int arr[126]={0};
        cin>>s;
        for(int i=0;i<s.length();i++){
            arr[(int)s[i]]++;
        }
        cout<<"Case "<<t+1<<": ";
    for(int j=0;j<126;j++){
        if(prime[arr[j]]){
            cout<<char(j);
            flag=false;
        }
    }
    if(flag){cout<<"empty";}
    cout<<endl;

    }
    return 0;
}
