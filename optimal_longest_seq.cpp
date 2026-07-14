#include<bits/stdc++.h>
using namespace std;

int optimal_longestSeq(vector<int> arr,int n){

    if(n==0) return 0;

    unordered_set<int> st;
    int len=1,max=1;

    for(int i=0;i<n;i++){

        st.insert(arr[i]);

    }

    for(auto it: st){

        if(st.find(it-1)==st.end()){

            len=1;
            int elem=it;

            while(st.find(elem+1)!=st.end()){

                elem=elem+1;
                len++;

            }

            if(len>max) max=len;

        }

    }

    return max;

}

int main(){

    vector<int> arr={3,6,10,20,21,21,22,1,2,4,5,6,7};

    int ans=optimal_longestSeq(arr,arr.size());
    cout<<"len="<<ans;
    cout<<"len="<<ans;

}
