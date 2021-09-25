#include <stdio.h>
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"Coordinates of friend house.";
    cin>>x>>y;
    
    int x2=pow ((x-3),2);
    int y2=pow ((y-5),2);
    int d= x2+y2;
    
    d =sqrt(d);
    d =round(d);
    
    cout<<d;
    
    return 0;
}
