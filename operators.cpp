#include<iostream>
#include <new>
using namespace std;

int main(){
    int i,n;
    int * p;
    cout<<"How many numbers do you want to input? ";
    cin >> i;
    p= new (nothrow)int[i];
    if(p==nullptr)
    cout <<"Error: memory could'nt be allocated";
    else{
          for (n=0; n<i; n++)
    {
      cout << "Enter number: ";
      cin >> p[n];
       cout << "You have entered: ";
    for (n=0; n<i; n++)
      cout << p[n] << ", ";
    delete[] p;
  }
    }
return 0;
    }
