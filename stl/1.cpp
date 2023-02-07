//Kth Largest Element in an Array.

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vec;
    int n;
    cin>>n;
    int p;
    for(int i=0;i<n;i++){
        cin>>p;
        vec.emplace_back(p);
    } 
    int k;
    cin>>k;
    sort(vec.begin(),vec.end());
    int s=n-k;
    cout<<vec[s];
}

/*utput cases
Input: nums = [3,2,3,1,2,4,5,5,6], k = 4, n=9
Output: 4
*/