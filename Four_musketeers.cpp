#include <stdio.h>
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int a1,a2,a3,b1,b2,b3;
    cout<<"house 1 location ";
    cin>>a1>>b1;
    
    cout<<"house 2 location ";
    cin>>a2>>b2;
    
    cout<<"house 3 location ";
    cin>>a3>>b3;
    
    float a4 = (a1+a2+a3)/3;
    float b4 = (b1+b2+b3)/3;
    
    cout<<a4<<b4;
    
    return 0;
}
