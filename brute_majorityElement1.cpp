#include<bits/stdc++.h>
using namespace std;

int brute_maj(vector<int> arr){

    int count;
    for(int i=0;i<arr.size();i++){
        count=0;
        for(int j=0;j<arr.size();j++){
            if(arr[j]==arr[i]) count++;
            if(count>(arr.size()/2)) return arr[i];
        }
    }

    return -1;

}

int main(){

    vector<int> arr={2,2,2,2,1,1,1};
    int maj=brute_maj(arr);
    cout<<"Majiorty element= "<<maj;

}
