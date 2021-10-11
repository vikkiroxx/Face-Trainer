#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,i,j,f;
    cin>>N;

    for(i=1; i<=N; i++){
        if(i==1 || i==0){
            continue;
        }
        f=1;

        for(j=2; j<=i/2; ++j){
            if(i%j==0){
                f=0;
                break;
            }
        }
        if(f==1){
        cout<<" "<<i;
        }
    }
    return 0;
}