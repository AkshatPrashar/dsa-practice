#include<bits/stdc++.h>
using namespace std;

long brute_app(vector<int>& arr,int k){

    int n=arr.size();
    vector<int> present(n-1,0);
    long double maxdis=-1;
    int maxind=-1;

    for(int g=1;g<=k;g++){

        maxdis=-1,maxind=-1;

        for(int i=0;i<n-1;i++){

            long double diff=arr[i+1]-arr[i];
            long double seclen=diff/(present[i]+1);

            if(seclen>maxdis){

                maxdis=seclen;
                maxind=i;

            }

        }

        present[maxind]++;


    }

    maxdis=-1;

    for(int i=0;i<n-1;i++){

        long double diff=arr[i+1]-arr[i];
        long double seclen=diff/(present[i]+1);
        maxdis=max(maxdis,seclen);

    }

    return maxdis;



}

int main(){

    vector<int> arr={1,13,17,23};
    int k=4;
    long ans=brute_app(arr,k);

    cout<<"Minimum of the maximum distances is: "<<ans;
}
