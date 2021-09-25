#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int x,y,z;
    char lab[10];
    
    cin>>x>>y>>z>>lab;
    
    if(lab=="L1"){
        if(y>z){
            cout<<"L3";
        }else{
            cout<<"L2";
        }
    }else if(lab=="L2"){
        if(x>z){
            cout<<"L3";
        }else{
            cout<<"L1";
        }
    }else{
        if(x>y){
            cout<<"L2";
        }else{
            cout<<"L1";
        }
    }
    return 0;
}