#include<bits/stdc++.h>
using namespace std;

int optimal_app(int n){

    int low=1,high=n;

    while(low<=high){

        int mid=low+(high-low)/2;

        long long sq=1LL*mid*mid;

        if(sq<n) low=mid+1;
        else if(sq>n) high=mid-1;
        else return mid;

    }

    return high;

}

int main(){

    int n=56;

    int ans=optimal_app(n);

    cout<<"Square root of "<<n<<" is: "<<ans;

}
