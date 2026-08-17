#include<bits/stdc++.h>
using namespace std;

pair<int,int> app2(vector<int> arr,int n){

    vector<int> a(n+1,0);

    for(int i=1;i<=n;i++){

        a[arr[i-1]]++;

    }

    int rep=-1,miss=-1;

    for(int i=1;i<=n;i++){

        if(a[i]==2) rep=i;
        else if(a[i]==0) miss=i;

    }

    return {rep,miss};

}

int main(){

    vector<int> arr={1,2,3,5,6,6};
   
    //pair<int,int> ans=app2(arr,arr.size());
    cout<<"{"<<ans.first<<" ,"<<ans.second<<"}";

}
