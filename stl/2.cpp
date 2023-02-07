    //KFirst Unique Character in a String.

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n=s.length();
    vector<int> vec(26,0);
    for(int i=0;i<n;i++){
        vec[s[i]-'a']++;  
    }
    int p=0;
    for(int i=0;i<n;i++){
        if(vec[s[i]-'a']==1){
            cout<<i<<endl;
            p++;
            break;
        }
    }
    if(p==0){
        cout<<"-1"<<endl;
    }
}

