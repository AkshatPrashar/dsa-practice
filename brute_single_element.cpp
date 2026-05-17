int brute_single_elem(vector<int> arr){

    //check for one element every othrt element
    int count=0,n=arr.size();
    int elem;

    for(int i=0;i<n;i++){
        count=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]) count++;
        }

        if(count==1){
            elem=arr[i];
            break;
        }
    }

    return elem;

}

int main(){

    vector<int> arr={0,0,1,1,2,3,4,3,4};
    int elem=brute_single_elem(arr);

    cout<<"The only single element: "<<elem;


}
