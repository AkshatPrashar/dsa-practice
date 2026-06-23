#include<bits/stdc++.h>
using namespace std;

vector<int> union_arr(vector<int> a,vector<int> b){
    int i=0,j=0,k=0;

    vector<int> c;
    if(b.size()==0 || (a.size() && a[i]<=b[j])){
        c.push_back(a[i++]);
    }
    else{
        c.push_back(b[j++]);
    }

    while(i<a.size() && j<b.size()){
    
        if(a[i]<=b[j] && a[i]!=c[k]){//jab chota hai lekin main array mai nahi aya hai
            c.push_back(a[i]);
            i++;
            k++;
        }
        else if(a[i]<=b[j] && a[i]==c[k]){//jab chota hai lekin main array mai aa chuka hai
            i++;
        }
        else if(a[i]>b[j] && b[j]!=c[k]){
            c.push_back(b[j]);
            j++;
            k++;
        }
        else if(a[i]>b[j] && b[j]==c[k]){
            j++;
        }
    }

    for(;i<a.size();i++){
        if(a[i]!=c[k]){
            c.push_back(a[i]);
            k++;
        }
    }

    for(;j<b.size();j++){
        if(b[j]!=c[k]){
            c.push_back(b[j]);
            k++;
        }
    }

    return c;
}

int main(){
    vector<int> a={2,3,4,5,6};
    vector<int> b={1,7};

    vector<int> d=union_arr(a,b);

    for(int x: d) cout<<x<<" ";

}
