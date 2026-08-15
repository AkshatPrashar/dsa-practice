#include<bits/stdc++.h>
using namespace std;

double angle(int h,int m){

    double hswept=h*30+m*0.5;
    double mswept=m*6.0;

    double diff=abs(hswept-mswept);

    return min(diff,360-diff);

}

int main(){

    double ans=angle(12,0);

    cout<<"Angle: "<<ans;

}
