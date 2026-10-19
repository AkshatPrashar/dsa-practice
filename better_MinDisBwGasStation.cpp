
#include<bits/stdc++.h>
using namespace std;

long double better_app(vector<int>& arr, int n, int k) {
    vector<int> present(n-1, 0);
    priority_queue<pair<long double,int>> pq;

    for(int i = 0; i < n-1; i++)
        pq.push({(long double)(arr[i+1] - arr[i]), i});

    for(int g = 1; g <= k; g++) {
        auto temp = pq.top();
        pq.pop();

        int secInd = temp.second;
        present[secInd]++;

        long double original_dis = arr[secInd+1] - arr[secInd];
        long double new_dis =
            original_dis / (present[secInd] + 1);

        pq.push({new_dis, secInd});
    }

    return pq.top().first;
}

int main() {
    vector<int> arr = {1, 13, 17, 23};
    int k = 4;

    long double ans = better_app(arr, arr.size(), k);

    cout << fixed << setprecision(6)
         << "Minimum of the maximum distances is: " << ans;
}
