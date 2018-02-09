#include <iostream>
#include<bits/stdc++.h>
//Machined Surfaces uva
using namespace std;

int main()
{
    int n;
    while(cin>>n&&n!=0){
        string s;
        int arr[n];
        int mn=100,x=0,sol=0;
        getline(cin,s);
        for(int i=0;i<n;i++){
            getline(cin,s);
            for(int j=0;j<25;j++){
                if(s[j]=='X'){ x++;}
            }
            arr[i]=25-x;
            x=0;
            if(arr[i]<mn){mn=arr[i];}
        }
        for(int k=0;k<n;k++){
            sol+=arr[k]-mn;
        }
        cout<<sol<<endl;
    }
    return 0;
}
