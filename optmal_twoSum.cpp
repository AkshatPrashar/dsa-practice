pair<int,int> optimal_two_sum(vector<int> arr,int target,int n){
    
    sort(arr.begin(),arr.end());
    int low=0,high=n-1;
    int sum=0;

    while(low<high){

        sum=arr[low]+arr[high];
        if(sum>target) high--;
        else if(sum<target) low++;
        else if(sum==target) return {arr[low],arr[high]};

    }
    return {-1,-1};
}


int main(){

    vector<int> arr={1,12,3,4,1,7,2,6,4};
    int target=8;

    //pair<int,int> ans=brute_two_sum(arr,target,arr.size());
    //pair<int,int> ans=better_two_sum(arr,target,arr.size());
    pair<int,int> ans=optimal_two_sum(arr,target,arr.size());
    cout<<"The pair is: "<<"{"<<ans.first<<","<<ans.second<<"}";

}
