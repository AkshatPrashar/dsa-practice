pair<int,int> brute_two_sum(vector<int> arr,int target,int n){

    for(int i=0;i<n;i++){

        for(int j=i+1;j<n;j++){

            if(arr[i]+arr[j]==target) return {arr[i],arr[j]};
        }
    }

    return {-1,-1};
}

int main(){

    vector<int> arr={1,12,3,4,1,7,2,6,4};
    int target=8;

    pair<int,int> ans=brute_two_sum(arr,target,arr.size());
    cout<<"The pair is: "<<"{"<<ans.first<<","<<ans.second<<"}";

}
