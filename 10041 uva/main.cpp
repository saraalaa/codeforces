#include <iostream>
#include<bits/stdc++.h>
//10041 in uva vito's family in sheet5 of level 1
using namespace std;
int main()
{
   int testcase;
   cin>>testcase;

   while(testcase>0){
        testcase--;
        int mx=0;
        int mn=30000;
        //cout<<"test "<<endl;
        int n,dist=0,distf=1000000000;
        //int sum=0;
        //double value;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
           // sum+=arr[i];
           //mn=min(mn,arr[i]);
           //mx=max(mx,arr[i]);
        }
        sort(arr,arr+n);
        mn=*min_element(arr,arr+n);
        mx=*max_element(arr,arr+n);
        //sol1=sum/n;


        //value=double(sum)/n;
        //int sol2=bsfindlast(0,(n-1),value);
        //int sol3=bsfindfirst(0,(n-1),value);

       // for(int i=0;i<n;i++){
         //   dist1+=abs(arr[i]-sol1);
        //}

        for(int j=mn;j<=mx;j++){
            //    cout<<" j "<<j;
            for(int i=0;i<n;i++){
                   // cout<<"i"<<i<<endl;
                dist+=abs(arr[i]-j);
            }

            distf=min(dist,distf);
          //  cout<<"dist "<<dist<<" distf "<<distf<<" ";
            dist=0;
        }
        //distf=min(dist,distf);
       // dist1=min(dist1,dist3);
        cout<<distf<<endl;


   }
    return 0;
}


