#include<bits/stdc++.h>
using namespace std;

string optimal_app(string s,int n){

    string ans="";
    int level=0;
    for(char x:s){

        if(x=='('){

            if(level>0) ans+=x;

            level++;

        }
        else{

            level--;
            if(level>0) ans+=x;

        }

    }

    return ans;

}

int main(){

    string str="(())()()()";

    string ans=optimal_app(str,str.size());
    cout<<"New string: "<<ans;

}
