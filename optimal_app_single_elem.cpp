int optimal_single_elem(vector<int> arr){

    //use xor
    int exor=0;
    int n=arr.size();
    
    for(int i=0;i<n;i++){
        exor=exor^arr[i];
    }

    return exor;

}
int main(){

    vector<int> arr={0,0,1,1,2,3,4,3,4};
    int elem=optimal_single_elem(arr);

    cout<<"The only single element: "<<elem;


}
