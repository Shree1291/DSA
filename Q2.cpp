#include<stdio.h>
#include<iostream>
using namespace std;
int find_gcd(int a,int b)
{
    if(a==0)
    return b;

    if(b==0)
    return a;

    while(a!=b){
         if(a>b){
            a-=b;
         }
         if(a<b){
            b-=a;
         }
         
    }
    return a;
}
int main(){

    int m=17,n=7;
    cout<<find_gcd(m,n);
    return 0;
}