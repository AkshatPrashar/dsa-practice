#include<bits/stdc++.h>
using namespace std;

//printing nth row of a pascal triangle

void brute_printPascalElement(int row,int col){

    //we know that the elements in the pascal triangle will follow nCr

    int n=row-1;
    int r=col-1;//(row-1)C(col-1)
    if(r==0){

        cout<<1<<" ";
        return;

    }
    int res=n;

    for(int i=1;i<r;i++){//this basically solves the nCr value 

        res=res*(n-i);
        res=res/(i+1);

    }

    cout<<res<<" ";

}

void brute_print_Nth_row(int row){


    for(int i=1;i<=row;i++){//the nth row has nth element

        brute_printPascalElement(row,i);

    }



}

int main(){

    int row=5;
    brute_print_Nth_row(2);

}
