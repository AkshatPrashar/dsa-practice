#include<bits/stdc++.h>
using namespace std;

//printing nth row of a pascal triangle

void optimal_print_Nth_row(int row){


    //find the 2nd element by nCr
    if(row==1){

        cout<<1;
        return;

    }
    cout<<1<<" ";
    int res=row-1;
    cout<<res<<" ";
    for(int i=1;i<row-1;i++){

        res=res*(row-1-i);
        res=res/(i+1);
        cout<<res<<" ";

    }




}

int main(){

    int row=5;
    optimal_print_Nth_row(2);

}
