// Unary operator friend function

#include<iostream>
using namespace std;

class Number{
    public:
    int x;
    Number(int p):x(p){}
    friend Number operator -(Number& n);
    void display(){
        cout<<"X="<<x<<endl;
    }
};
Number operator -(Number& n){
    return Number(-n.x);
}
int main(){
    Number n(10);
    n.display();
    Number negNumber=-n;
    negNumber.display();
    return 0;
}