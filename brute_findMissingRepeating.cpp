#include<bits/stdc++.h>
using namespace std;

pair<int,int> app1(vector<int> arr,int n){

    int c=0;
    int miss=-1,rep=-1;

    for(int i=1;i<=n;i++){

        c=0;
        for(int j=0;j<n;j++){

            if(i==arr[j]) c++;

        }

        if(c==2) rep=i;
        else if(c==0) miss=i;

    }

    return {rep,miss};

}

int main(){

    vector<int> arr={1,2,3,5,6,6};
    //pair<int,int> ans=app1(arr,arr.size());

    cout<<"{"<<ans.first<<" ,"<<ans.second<<"}";

}
