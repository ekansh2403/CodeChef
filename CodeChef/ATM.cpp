#include<iostream>
#include <iomanip>
using namespace std;
int main(){
    int X;
    float Y,Z=0.5;
    cin>>X>>Y;
    if(X%5==0&&Y>=(X+Z)){
        Y=Y-X-Z;
        
    }
    cout<<fixed<<setprecision(2)<<Y<<endl;
    return 0;
}