#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int x(0), y(0);
    for(int i = 1; i<=5; i++){
        int flag =0;
        for(int j =1 ; j<=5; j++){
            int val;
            cin>>val;
            if(val==1){
                x=i;
                y=j;
            }
        }
    }
    int sum = abs(x-3) + abs(y-3);
    cout<<sum<<"\n";
}
