#include<bits/stdc++.h>
using namespace std;


#include<bits/stdc++.h>
using namespace std;

int maxo(vector<vector<int>>& arr, int n, int m, int col) {

    int maxi = INT_MIN, ind = -1;

    for(int i = 0; i < n; i++) {
        if(arr[i][col] > maxi) {
            maxi = arr[i][col];
            ind = i;
        }
    }

    return ind;
}

vector<int> optimal_app(vector<vector<int>>& arr) {

    int n = arr.size(), m = arr[0].size();
    int low = 0, high = m-1;

    while(low <= high) {

        int mid = low + (high-low)/2;

        int maxInd = maxo(arr, n, m, mid);

        int left = (mid == 0) ? INT_MIN : arr[maxInd][mid-1];
        int right = (mid == m-1) ? INT_MIN : arr[maxInd][mid+1];

        if(arr[maxInd][mid] > left && arr[maxInd][mid] > right)
            return {maxInd, mid};

        else if(arr[maxInd][mid] < left)
            high = mid-1;

        else
            low = mid+1;
    }

    return {-1,-1};
}


int main(){

    vector<vector<int>> arr={{10,20,15},{21,30,14},{7,16,32}};
    vector<int> ans=optimal_app(arr);

    cout<<"["<<ans[0]<<", "<<ans[1]<<"]";


}
