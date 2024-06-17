#include<iostream>

using namespace std;

int addition(int x, int y){
    int z;
    z=x+y;

    return z;
}

int main(){
    int w;
    w= addition(26,62);
    cout << "The result is "<<w;
}