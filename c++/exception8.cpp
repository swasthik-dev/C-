#include<iostream>
using namespace std;

int main(){
    int a=20, b=10;
    int res=a-b;
    try{
        if(res!=0){
            cout<<(a/res)<<endl;
        }
        else{
            throw(res);
        }
    }
    catch(int i){
        cout<<"Caught Expression"<<endl;
    }
    return 0;
}