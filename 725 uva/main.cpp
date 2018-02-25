#include <iostream>
#include<bits/stdc++.h>
//725 uva
using namespace std;

int main()
{
    int n,sol,num;
    int f,g,h,i,j;
    bool tf=false;

    while(cin>>n&&n!=0){
        if(tf==true)cout<<endl;
        tf=true;
        set<int>bt;
        set<int>m;
        for(int a=1;a<10;a++){
            for(int b=0;b<10;b++){
                if(b==a)continue;
                    //cout<<"a "<<a<<" b "<<b<<endl;
                for(int c=0;c<10;c++){
                    if(c==a||c==b)continue;
                    for(int d=0;d<10;d++){
                        if(d==a||d==b||d==c)continue;
                        for(int e=0;e<10;e++){
                            if(e==a||e==b||e==c||e==d)continue;
                            num=a*10000+b*1000+c*100+d*10+e;
                            //cout<<num<<"   ";
                            if((num%n==0)&&((num/n)/10000!=0||(num/n)/1000!=0)){
                            //if(num%n==0){
                                sol=num/n;
                                //cout<<"sol "<<sol<<" sol/10000 "<<sol/10000;
                                //int fff=sol/10000;
                                //if(fff==0){tf=false;}
                                //sol=num/n;
                                //cout<<"f "<<f<<endl;
                                //if(tf==true){f=sol/10000;}
                                //else if(tf==false){f=0;}
                                //cout<<" f "<<f;
                                if(sol/10000==0){
                                    f=0;
                                    g=(sol/1000);
                                    h=(sol/100)%10;
                                    i=(sol/10)%10;
                                    j=sol%10;
                                }
                                else{
                                    f=sol/10000;
                                    g=(sol/1000)%10;
                                    h=(sol/100)%10;
                                    i=(sol/10)%10;
                                    j=sol%10;}
                                //cout<<"sol "<<sol<< endl;

                                if((f!=a&&f!=b&&f!=c&&f!=d&&f!=e&&f!=g&&f!=h&&f!=i&&f!=j)&&(g!=a&&g!=b&&g!=c&&g!=d&&g!=e&&g!=h&&g!=i&&g!=j)&&(h!=a&&h!=b&&h!=c&&h!=d&&h!=e&&h!=i&&h!=j)&&(i!=a&&i!=b&&i!=c&&i!=d&&i!=e&&i!=j)&&(j!=a&&j!=b&&j!=c&&j!=d&&j!=e)){
                                    bt.insert(num);
                                    m.insert(sol);
                                   // cout<<"ab "<<a<<b<<c<<d<<e<<" num "<<num<<" fg "<<f<<g<<h<<i<<j<<" sol "<<sol<<endl;
                                }
                            }
                        }
                    }
                }
            }
        }

        set<int>::iterator it=bt.begin();
        set<int>::iterator iter=m.begin();
        if(bt.empty()==false){
            for(it=bt.begin();it!=bt.end();it++){
                cout<<*it<<" / ";
                if((*iter)/10000==0){cout<<0<<*iter<<" = "<<n<<endl;}
                else{cout<<*iter<<" = "<<n<<endl;}
                iter++;
            }
           // cout<<endl;
        }
        else{
            cout<<"There are no solutions for "<<n<<'.'<<endl;
        }

    }

    return 0;
}
