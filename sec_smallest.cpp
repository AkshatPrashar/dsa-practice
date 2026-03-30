#include<bits/stdc++.h>
using namespace std;

int find_sec_smallest(vector<int>& arr,int n){
    int smallest=997;
    int ssmallest=998;

    for(int x:arr){
        if(x<smallest){
            ssmallest=smallest;
            smallest=x;
        }
        else if(x>smallest && ssmallest>x){
            ssmallest=x;
        }
    }

    if(ssmallest==997) return -1;
    else return ssmallest;
}

int main(){
    vector<int> arr={6,6,6,6,6,6};

    int s_smallest_ele=find_sec_smallest(arr,arr.size());

    cout<<"Second smallest: "<<s_smallest_ele;
}
