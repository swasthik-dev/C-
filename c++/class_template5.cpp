#include<iostream>
using namespace std;

template<class X>
class big{
    public:
    X num1, num2;
    big(X a, X b){
        num1=a;
        num2=b;
    }
    void compare(){
        if(num1>num2){
            cout<<"Num1 is largest!"<<endl;
        }
        else{
            cout<<"Num2 is lasrgest!"<<endl;
        }
    }
};
int main(){
    big <float> b(11.5,11);
    b.compare();
    return 0;
}