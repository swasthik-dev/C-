//Write a C++ program to overload unary operator as 
//i) member function

#include <iostream>
using namespace std;
class Number{
    private:
    int x;
    public:
    Number(int p):x(p){}
    void operator -(){
        x=-x;
    }
    void display(){
        cout<<"X="<<x<<endl;
    }
};
int main(){
    Number n(10);
    -n;
    n.display();
    return 0;
}

