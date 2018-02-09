#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
     string s;
     deque<char>dq;
    while(cin>>s){
        if(s=="EOF"){break;}
        deque<char>word;
        bool tf=true;
        for(int i=0;i<s.length();i++){
            if(s[i]!='['&&s[i]!=']'&&tf==true){
                dq.push_back(s[i]);
            }
            else if(s[i]=='['){
                tf=false;

              if(word.size()!=0){while(word.size()!=0){
                    dq.push_front(word.back());
                    word.pop_back();
               }
            }

            }
            else if(s[i]!='['&&s[i]!=']'&&tf==false){
                word.push_back(s[i]);
            }
            else if(s[i]==']'){
                tf=true;
               if(word.size()!=0){while(word.size()!=0){
                    dq.push_front(word.back());
                    word.pop_back();
               }
            }
        }
               }
            if(word.size()!=0){while(word.size()!=0){
                    dq.push_front(word.back());
                    word.pop_back();
               }}
       while(dq.size()!=0){
            cout<<dq.front();
            dq.pop_front();
        }
        cout<<endl;
    }

    return 0;
}
