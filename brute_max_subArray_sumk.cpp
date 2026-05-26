int brute_max_subArray(vector<int> arr,int k){

    int sum=0,maxlen=0;
    for(int i=0;i<arr.size();i++){
        sum=0;
        for(int j=i;j<arr.size();j++){
            sum+=arr[j];
            if(sum==k){
                maxlen=max(maxlen,j-i+1);
            }
        }
    }

    return maxlen;
}

int main(){
    vector<int> arr={1,2,0,0};
    int k=3;
   
    int len=brute_max_subArray(arr,k);

    cout<<"Max length of Array: "<<len;
}
