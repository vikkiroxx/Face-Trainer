#include<bits/stdc++.h>
using namespace std;

bool isPrime(long int n){
    if(n==1){
        return false;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    long int n;
    cin>>n;

    if(isPrime(n))
    cout<<"the given number is a prime number";
    else
    cout<<"the given number is not a prime number";
    return 0;
}