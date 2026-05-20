int much_better_single_elem(vector<int> arr){

    //use map
    int n=arr.size(),elem;
    map<int,int> mp;

    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }

    for(auto it: mp){

        if(it.second==1){
            elem=it.first;
            break;
        }
    }

    return elem;

    

}

int main(){

    vector<int> arr={0,0,1,1,2,3,4,3,4};
   
    int elem=much_better_single_elem(arr);
    

    cout<<"The only single element: "<<elem;


}
