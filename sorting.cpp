#include<bits/stdc++.h>
using namespace std;

void selection_sort(vector<int> v){
    int n=v.size();
    int mini=0;

    for(int i=0;i<=n-2;i++){//n-2 is lie kyuki we go to the second lat elemnt in outer loop for swapping
        mini=i;
        for(int j=i;j<=n-1;j++){
            if(v[j]<v[mini]){
                mini=j;
            }
        }
        swap(v[mini],v[i]);
    }

    for(int i=0;i<n;i++) cout<<v[i]<<" ";
}

void bubble_sort(vector<int> v){
    int n=v.size();

    for(int i=n-1;i>=1;i--){
        int swaps=0;
        for(int j=0;j<=i-1;j++){
            if(v[j]>v[j+1]){
                swap(v[j],v[j+1]);
                swaps++;
            } 
        }
        if(swaps==0){
            break;
        }
    }

    for(int i=0;i<n;i++) cout<<v[i]<<" ";
}

void insertion_sort(vector<int> v){
    int n=v.size();

    for(int i=0;i<=n-2;i++){
        for(int j=i+1;j>0;j--){
            if(v[j]<v[j-1]) swap(v[j],v[j-1]);
            else break;
        }
    }

    for(int i=0;i<n;i++) cout<<v[i]<<" ";
}

int main(){
    vector<int> v={5,4,3,2};
    //selection_sort(v);
    //bubble_sort(v);
    insertion_sort(v);
}