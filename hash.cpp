#include<bits/stdc++.h>
using namespace std;

int hash_fn(int i,int hash[]){
    hash[i]+=1;

}

int main(){
    int hash[13]={0};
    int arr[6]={4,6,4,2,1,3};
    set<int> st;

    for(int i=0;i<6;i++){
        int elem=arr[i];
        hash_fn(elem,hash);
        st.insert(arr[i]);
    }

    for(int x: st){
        printf("%d->%d times",x,hash[x]);
        cout<<"\n";
    }

}