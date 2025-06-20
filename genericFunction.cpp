#include<iostream>
using namespace std;

template <typename T>

T getMax(T a, T b){
    return (a > b) ? a : b;
};

template <typename T>
T getMin(T x, T y){
    return (x < y) ? x : y;
};

int main(){
    cout<<"Max is: "<<getMax(20, 12)<<endl;
    cout<<"Min is: "<<getMin(20, 12)<<endl;
};