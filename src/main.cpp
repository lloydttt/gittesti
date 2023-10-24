#include<iostream>
#include"t.h"

using namespace std;

int main(){
    int a = 11;
    T kk(11);
    int res = kk.my_i;
    if(res == a){
        cout<<"OK";
    }else{
        cout<<"ERROR";
    }
    
}