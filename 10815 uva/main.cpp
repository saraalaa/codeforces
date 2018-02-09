#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
	string word="";
	//string no="\"\':;\|/.,][}{=+-)(*&^%$#@!~`<>?1234567890";
	string yes="qwertyuiopasdfghjklzxcvbnm";
	set<string>st;
	while(cin>>s){
	//getline(cin,s);
        for(int i=0;i<s.length();i++){
            s[i]=tolower(s[i]);
            //cout<<"letter "<<s[i]<<endl; correct
            if(yes.find(s[i])!=-1){
                word+=s[i];
                //cout<<"word "<<word<<endl; correct
            }
            else if(yes.find(s[i])==-1){
                if(word.empty()==false){
                    st.insert(word);
                    //cout<<"word "<<word<<endl; false
                    word="";
                }
            }
        }
        if(word.empty()==false){
                    st.insert(word);
                    //cout<<"word "<<word<<endl; false
                    word="";
        }
	}
	set<string>::iterator it=st.begin();
	for(it=st.begin();it!=st.end();it++){
        cout<<*it<<endl;
	}
    return 0;
}
