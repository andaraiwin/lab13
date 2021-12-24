#include<iostream>
using namespace std;

int gcd(int , int);

int main(){
    int x, y;
    cin >> x >> y;
    cout << gcd(x,y);
    return 0; 
}

int gcd(int x, int y){
    int a,b;
    if(x%y == 0){
        return y;
    }else if(y%x == 0){
        return x;
    }else{
        a = gcd(y, x%y);
        return a;
    }
}