#include<bits/stdc++.h>
using namespace std;

vector<int> max_sub(vector<int> arr,int n){

    int maxi=INT_MIN,sum=0;
    int start;
    int startAns=-1;
    int endAns=-1;

    for(int i=0;i<n;i++){
        if(sum==0) start=i;
        
        sum=sum+arr[i];

        if(sum>maxi){
            maxi=sum;
            startAns=start;
            endAns=i;
        }

        if(sum<0) sum=0;

    }

    vector<int> a;
    for(int i=startAns;i<=endAns;i++) a.push_back(arr[i]);

    return a;
}

int main(){

    vector<int> arr={0,0,0,0,0,6};

    vector<int> a=max_sub(arr,arr.size());
    
    for(int x: a) cout<<x<<" ";

}
