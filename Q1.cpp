#include<iostream>
#include <utility>
using namespace std;


int isPossible(int arr[],int n,int m,int mid){
    int studCnt=1;
    int pageSum=0;

    for(int i=0;i<n;i++){
        if(pageSum+arr[i]<=mid){
            pageSum+=arr[i];
        }else{
            studCnt++;
            if(studCnt>m || arr[i]>mid){
                return 0;
            }
            pageSum=arr[i];
        }
    }
    return 1;
}

int main(){
    int n=4,m=2;
    int arr[]={12,34,67,90};

    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int s=0;
    int e=sum;
    int ans=-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(isPossible(arr,n,m,mid)){
            ans=mid;
            e=mid-1;
        }else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    cout<<"The ans is "<<ans;
    return 0;
    
}