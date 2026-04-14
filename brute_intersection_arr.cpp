vector<int> brute_intersection_arr(vector<int> a,vector<int> b){

    vector<int> v;
    vector<int> c;

    for(int i;i<b.size();i++) v.push_back(0);

    for(int i=0;i<a.size();i++){

        for(int j=0;j<b.size();j++){

            if(a[i]==b[j]){

                v[j]=1;
                c.push_back(b[j]);
                break;

            }

            if(b[j]>a[i]) break;
        }
    }

    return c;


}

int main(){
    vector<int> a={1,2,2,2,3,4};
    vector<int> b={2,2,3};

    vector<int> c=brute_intersection_arr(a,b);

   

    for(int x: c) cout<<x<<" ";


}
