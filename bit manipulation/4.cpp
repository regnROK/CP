//Length of the Longest Consecutive 1s in Binary Representation

#include <iostream>
using namespace std;
int bianry(int n){
    int ans=0;
    int p=1;
    while(n>0){
        int lb=(n&1);
        ans=ans+(p*lb);
        p=p*10;
        n=n>>1;
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    int p=bianry(n);
    string s= to_string(p);
  int count=1;
  int maxx=0;
   for(int i=0;i<(s.size()-1);i++){
   if((s[i]==s[i+1])&& s[i]=='1'){
   	count++;
     maxx=max(count,maxx);
   }
     else if(s[i]!=s[i+1]){
     	count=1;
     }
   }
cout<<maxx;
}