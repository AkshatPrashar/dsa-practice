#include<bits/stdc++.h>
using namespace std;

void hash_fn(int c,int hash[]){
    hash[c]++;
}

int main(){
    int hash[25]={0};
    set<char> st;
    char arr[]="akshat";
    int n=strlen(arr);

    for(int i=0;i<n;i++){
        hash_fn(arr[i]-'a',hash);
        st.insert(arr[i]);
    }

    for(char x:st){
        cout<<x<<" occurs "<<hash[x-'a']<<" times";
        cout<<"\n";
    }
}