#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    long long mini = INT_MAX;
    long long count = 0;
    long long indi = -1;
    for(long long i = 0; i<n; i++){
        long long x;
        cin>>x;
        if(x<mini){
            mini = x;
            count = 1;
            indi = i+1;
        }
        else if(x==mini){
            count++;
        }
    }
    if(count==1){
        cout<<indi<<"\n";
    }
    else{
        cout<<"Still Rozdil\n";
    }
}
