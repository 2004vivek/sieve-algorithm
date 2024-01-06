// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here
    int n;
    cin>>n;
    vector<int>v(n+1);
    for(int i=1;i<=n;i++){
        v[i]=i;
    }
    for(int i=2;i*i<=n;i++){
       if(v[i]==i){
           for(int j=i*i;j<=n;j=j+i){
               if(v[j]==j){
                   v[j]=i;
               }
           }
       }
    }
    while(n!=1){
       cout<<v[n]<<" ";
       n=n/v[n];
    }
    

    return 0;
}
