pair<int,int> better_two_sum(vector<int> arr,int target,int n){
    //lexicographical order
    int rem,sum=0;

    map<int,int> mp;
    vector<pair<int,int>> v;

    for(int i=0;i<n;i++){

        int elem=arr[i];
        rem=target-elem;

        if(mp.find(rem)!=mp.end()){
            v.push_back({mp[rem],i});
        }
        if(mp.find(elem)==mp.end()){
            mp[elem]=i;
        }

    }

    int min=777,index=-1;
    for(int i=0;i<v.size();i++){
        if(v[i].first<min){
            min=v[i].first;
            index=i;
        }
    }

    if(index!=-1){
        return {v[index]};
    }

    return {-1,-1};


}

int main(){

    vector<int> arr={1,12,3,4,1,7,2,6,4};
    int target=8;
    pair<int,int> ans=better_two_sum(arr,target,arr.size());
    cout<<"The pair is: "<<"{"<<ans.first<<","<<ans.second<<"}";

}
