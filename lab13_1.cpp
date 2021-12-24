#include<iostream>
using namespace std;

int fibonacci(int);

int main(){
    int x;
    cin >> x;
    cout << fibonacci(x);
    return 0; 
}

int fibonacci(int x){
    int y = x;
    if(x == 0){
        y = 0;
    }else if(x == 1){
        y = 1;
    }else{
        y = fibonacci(x - 1) + fibonacci(x - 2);
    }
    return y;
}
