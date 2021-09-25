#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<bits/stdc++.h>

using namespace std;

int main(){
int t,x,y;
	int n;    
    cout<<"total no. of balls:";
    cin>>t;
    
    cout<<"total no of runs:";
    cin>>x;
    
    cout<<"no of runs scored:";
    cin>>y;
    
    cout<<"no of balls bowled:";
    cin>>n;
    float p;
    p=n%6;
    float over = t/6;
    float finished=(n/6)+(p/10);
    float rrmi = x/over;
    float rrcsk = y/finished;
    
    cout<<"Overs"<<over<<endl;
    cout<<"Finished Overs"<<finished<<endl;
    cout<<"Current RunRate"<<rrcsk<<endl;
    cout<<"Total RunRate"<<rrmi<<endl;
    if (rrcsk>rrmi){
        cout<<"Eligible to win";
    }
    else{
        cout<<"Ineligible to win";
    }
    return 0;
}