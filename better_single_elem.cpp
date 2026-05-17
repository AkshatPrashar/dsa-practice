int better_single_elem(vector<int> arr){

    //use extra space called hash
    int max=arr[0],elem;
    int n=arr.size();

    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    
    int hash[max+1];
    for(int i=0;i<max+1;i++) hash[i]=2;

    for(int i=0;i<n;i++){
        hash[arr[i]]--;
    }

    for(int i=0;i<max+1;i++){
        if(hash[i]==1){
            elem=i;
            break;
        }
    }

    return elem;



}

int main(){

    vector<int> arr={0,0,1,1,2,3,4,3,4};
   
    //int elem=better_single_elem(arr);
    

    cout<<"The only single element: "<<elem;


}
