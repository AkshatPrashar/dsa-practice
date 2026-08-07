#include<bits/stdc++.h>
using namespace std;

vector<int> longest_max_sub(vector<int> arr,int n){

    int maxi=INT_MIN,sum=0;
    int start=0;
    int startans=-1,endans=-1;

    for(int i=0;i<n;i++){

        sum=sum+arr[i];
        if(sum>=maxi){//fixed here as we should alos count the equal sums
            maxi=sum;
            startans=start;
            endans=i;
        }

        if(sum<0){
            sum=0;
            start=i+1;
        }

    }

    vector<int> a;
    for(int i=startans;i<=endans;i++) a.push_back(arr[i]);

    return a;

}

int main(){

    vector<int> arr={0,0,0,0,0,6};
    
    vector<int> a=longest_max_sub(arr,arr.size());
    
    for(int x: a) cout<<x<<" ";


}
