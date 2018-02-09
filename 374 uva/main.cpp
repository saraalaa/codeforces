#include <iostream>
//big mod uva
using namespace std;
long long m;
long long pow(long long a,long long n){
    if(n==0)return 1;
    if(n%2==0){
        return pow((a*a)%m,n/2);
    }
    else{
        return pow(a,n-1)*a%m;
    }
}
int main()
{
    long long a,n;

    while(cin>>a>>n>>m){
    cout<<pow(a,n)<<endl;
    }
    return 0;
}
