#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> optimal_app(vector<int> arr,int n){

    sort(arr.begin(),arr.end());//the main focus is that we dont wanna use set so we edxternallly sort the array
    vector<vector<int>> ans;

    for(int i=0;i<n;i++){

        if(i>0 && arr[i]==arr[i-1]) continue;
        int j=i+1;
        int k=n-1;

        while(j<k){

            int sum=arr[i]+arr[j]+arr[k];
            if(sum<0) j++;
            else if(sum>0) k--;
            else{
        
                vector<int> temp={arr[i],arr[j],arr[k]};
                ans.push_back(temp);
                j++;
                k--;
                while(j<k && arr[j]==arr[j-1]) j++;
                while(j<k && arr[k]==arr[k+1]) k--;

                
            }

        }

    }

    return ans;

}

int main(){

    vector<int> arr={1,1,1,0,0,-1,3,-3,2,-2};

    vector<vector<int>> ans=optimal_app(arr,10);

    for(int i=0;i<ans.size();i++){

        for(int j=0;j<ans[i].size();j++){

            cout<<ans[i][j]<<" ";

        }

        cout<<"\n";

    }

}
