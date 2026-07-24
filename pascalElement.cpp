#include<bits/stdc++.h>
using namespace std;

void printPascalElement(int row,int col){

    //we know that the elements in the pascal triangle will follow nCr

    int n=row-1;
    int r=col-1;//(row-1)C(col-1)

    int res=n;

    for(int i=1;i<r;i++){//this basically solves the nCr value 

        res=res*(n-i);
        res=res/(i+1);

    }

    cout<<"Element: "<<res<<" ";

}



int main(){

    int row=5;
    int col=3;

    printPascalElement(row,col);



}
