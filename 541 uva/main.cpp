#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while(cin>>n&&n!=0){
        int arr[n][n];
        int row=0,column=0;
        int odd1=0,odd2=0;
        int ii=0,jj=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>arr[i][j];
                row+=arr[i][j];
            }
            if(row%2==1){
                odd1++;
                ii=i+1;
            }
            row=0;
        }
        //int jjj=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                column+=arr[j][i];
            }
            if(column%2==1){
                odd2++;
                jj=i+1;
            }
            column=0;
        }
        if((odd1==0)&&(odd2==0)){
            cout<<"OK"<<endl;
        }
        else if((odd1==1)&&(odd2==1)){
            cout<<"Change bit ("<<ii<<','<<jj<<')'<<endl;
        }
        else{
            cout<<"Corrupt"<<endl;
        }
    }
    return 0;
}
