vector<int> intersection_arr(vector<int> a,vector<int> b){

    int i=0,j=0,k=0;

    vector<int> c;
    while(i<a.size() && j<b.size()){

        if(a[i]<b[j] ) i++;
        else if(a[i]>b[j]) j++;
        else if(a[i]==b[j]){
            c.push_back(a[i]);
            i++;
            j++;
        }
    }

    return c;
}
