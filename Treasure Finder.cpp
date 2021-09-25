#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int a,b,c,big,gcd;
    
    cin>>a>>b>>c;
    
    if(a>b){
        if(b>c){
            cout<<"The treasure is in the box which has number "<<b<<endl;
        }else{
            cout<<"The treasure is in the box which has number "<<c<<endl;
        }
    }else if(b>c){
        if(c>a){
            cout<<"The treasure is in the box which has number "<<c<<endl;
        }else{
            cout<<"The treasure is in the box which has number "<<a<<endl;
        }
    }else{
        if(a>b){
            cout<<"The treasure is in the box which has number "<<a<<endl;
        }else{
            cout<<"The treasure is in the box which has number "<<b<<endl;
        }
    }
    
    big=max(a,b);
    big=max(big,c);
    for(gcd=big;gcd>=1;gcd--){
        if(a%gcd==0 && b%gcd==0 && c%gcd==0)
        break;
    }
    
    cout<<"The code to open the box is "<<gcd;
    
    return 0;
}