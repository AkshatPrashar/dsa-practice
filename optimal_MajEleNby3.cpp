#include<bits/stdc++.h>
using namespace std;

vector<int> optimal_app(vector<int>& arr,int n){

    //there can be at max only 2 elements who have count greater than n/3

    int c1=0,c2=0;
    int el1=INT_MIN,el2=INT_MIN;
    vector<int> ans;

    for(int i=0;i<n;i++){

        if(c1==0 && arr[i]!=el2){

            c1=1;
            el1=arr[i];

        }
        else if(c2==0 && arr[i]!=el1){

            c2=1;
            el2=arr[i];

        }
        else if(el1==arr[i]) c1++;
        else if(el2==arr[i]) c2++;
        else{

            c1++;
            c2++;

        }

    }

    c1=0,c2=0;
    for(int i=0;i<n;i++){

        if(el1==arr[i]) c1++;
        if(el2==arr[i]) c2++;

    }

    if(c1>(n/3)) ans.push_back(el1);
    if(c2>(n/3)) ans.push_back(el2);

    return ans;


}

int main(){

    vector<int> arr={1,1,1,1,2,2,2,2,3,4};
    vector<int> ans=optimal_app(arr,10);

    for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";


}
