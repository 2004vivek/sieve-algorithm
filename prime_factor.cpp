// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here
    int n;
    cin>>n;
    for(int i=2;i<=sqrt(n);i++){
        while(n%i==0){
            cout<<i<<" ";
            n=n/i;
        }
    }
    if(n>1){
        cout<<n;
    }

    return 0;
}
