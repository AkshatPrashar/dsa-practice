
int better_max_subArray(vector<int> arr,int k){
    map<int,int> mp;
    int sum=0;
    int maxlen=0;
    int rem;
    int len;

    for(int i=0;i<arr.size();i++){

        sum+=arr[i];
        if(sum==k){
            maxlen=max(maxlen,i+1);
        }

        rem=sum-k;
        if(mp.find(rem)!=mp.end()){
            int len=i-mp[rem];
            maxlen=max(len,maxlen);
        }
        if(mp.find(sum)==mp.end()){
            mp[sum]=i;
        }
    }

    return maxlen;
}

int main(){
    vector<int> arr={1,2,0,0};
    int k=3;
    int len=better_max_subArray(arr,k);
    

    cout<<"Max length of Array: "<<len;
}
