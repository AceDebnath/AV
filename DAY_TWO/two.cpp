#include<iostream>
using namespace std;

int main(){
    char ch;
    cout << "Enter yout char : ";
    cin >> ch;

    if(ch >= 'a' && ch <= 'z'){
        cout << "Lower case char";
    }
    else{
        cout << "Upper case char";
    }
    return 0;
}