#include<bits/stdc++.h>
using namespace std;

vector<int> optimal_app(vector<vector<int>> arr,int n,int m){

    int left=0,right=m-1;
    int top=0,bottom=n-1;
    vector<int> ans;

    while(left<=right && top<=bottom){

        //print::left->right (constant::top,veriable::left)
        for(int i=left;i<=right;i++) ans.push_back(arr[top][i]);
        top++;

        //print::top->bottom (constant::right,veriable::top)
        for(int i=top;i<=bottom;i++) ans.push_back(arr[i][right]);
        right--;

        if(top<=bottom){

            //print::right->left (constant::bottom,veriable::right)
            for(int i=right;i>=left;i--) ans.push_back(arr[bottom][i]);
            bottom--;

        }

        if(left<=right){

            //print::bottom->top (constant::left,veriable::bottom)
            for(int i=bottom;i>=top;i--) ans.push_back(arr[i][left]);
            left++;

        }

        

    }

    return ans;

}

int main(){

    vector<vector<int>> arr={{3,2,6,8},{4,1,1,0},{0,0,1,2},{4,9,9,6}};

    vector<int> ans=optimal_app(arr,4,4);

    for(int x:ans) cout<<x<<" ";

}
