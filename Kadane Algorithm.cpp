#include <bits/stdc++.h>
#include<iostream>

using namespace std;

int kadaneAlgo(int n, int arr[]){
    int curSum=0, maxSum=0;
    for(int i=0;i<n;i++){
        curSum+=arr[i];
        if(curSum>maxSum){
            maxSum=curSum;
        }
        if(curSum<0){
            curSum=0;
        }
    }
    return maxSum;
}

int main(){
    int arr[8]={-2, -3, 4, -1, -2, 1, 5, -3};
    int n=8;
    int maxSum=kadaneAlgo(n, arr);
    cout<<maxSum;
    return 0;
}
