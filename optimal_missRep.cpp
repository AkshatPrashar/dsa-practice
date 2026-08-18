#include<bits/stdc++.h>
using namespace std;
pair<int,int> app3(vector<int> arr,int n){

    long long nsum=(n*(n+1))/2;
    long long nsq=(n*(n+1)*(2*n+1))/6;
    long long sum=0,sq=0;

    for(int x:arr){

        sum+=x;
        sq+=x*x;

    }

    long long val1=sum-nsum;
    long long val2=sq-nsq;
    long long val3=val2/val1;
    long long rep=(val1+val3)/2;
    long long miss=rep-val1;

    return {(int)rep,(int)miss};

}

int main(){

    vector<int> arr={1,2,3,5,6,6};
    pair<int,int> ans=app3(arr,arr.size());

    cout<<"{"<<ans.first<<" ,"<<ans.second<<"}";

}
