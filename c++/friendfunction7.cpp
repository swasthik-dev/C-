#include<iostream>
using namespace std;

class box{
    private:
    int length;
    public:
    box():length(5){}
    friend int printlength(box);
};
int printlength(box b){
    b.length+=10;
    return b.length;
}
int main(){
    box b;
    cout<<"Length of the box "<<printlength(b);
    return 0;
}