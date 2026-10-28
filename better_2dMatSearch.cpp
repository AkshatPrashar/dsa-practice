#include<bits/stdc++.h>
using namespace std;

bool better_app(vector<vector<int>>& arr, int target) {
    int n = arr.size(), m = arr[0].size();
    int low = 0, high = n - 1;
    int ind = -1;

    while(low <= high) {
        int mid = low + (high - low) / 2;

        if(arr[mid][0] <= target) {
            ind = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if(ind == -1) return false;

    low = 0;
    high = m - 1;

    while(low <= high) {
        int mid = low + (high - low) / 2;

        if(arr[ind][mid] == target) return true;
        else if(arr[ind][mid] < target) low = mid + 1;
        else high = mid - 1;
    }

    return false;
}
