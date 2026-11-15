#include<bits/stdc++.h>
using namespace std;

void reverse(vector<string>& str,int low,int high){

    while(low<high) swap(str[low++],str[high--]);

}

string brute_app(string& str,int n){

    vector<string> words;
    string word="";

    for(int i=0;i<n;i++){

        if(str[i]==' '){

            if(!word.empty()){

                words.push_back(word);
                word="";

            }
            
        }
        else word+=str[i];

    }

    if(!word.empty()){

        words.push_back(word);
        word="";

    }

    reverse(words,0,words.size()-1);

    string res="";

    int m=words.size();

    for(int i=0;i<m;i++){

        res+=words[i];
        if(i!=m-1) res+=" ";

    }

    return res;

}

int main(){

    string str="  Hello this is a normal   string ";

    string ans=brute_app(str,str.size());

    cout<<"Reversed string: "<<ans;

}
