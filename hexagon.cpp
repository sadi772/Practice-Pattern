#include<bits/stdc++.h>
using namespace std;

int main(){

    for(int i = 1; i <= 5; i++){
        int x = 2*i - 1;
        for(int j = 5-i; j >= 1; j--){
            cout << "  ";
        }
        for(int j = 1; j <= x; j++){
            cout << "* ";
        }
        cout << endl;
    }

    //int hypotenuse = sqrt(pow(5, 2)+ pow(5, 2)); // a^2 + b^2 = c^2;
    for(int i = 1; i <= floor(sqrt(pow(4, 2)+ pow(4, 2))) ; i++){
        for(int j = 1; j <= 9; j++){
            cout << "* ";
        }
        cout << endl;
    }

   for(int i = 5; i >= 1; i--){
        int x = 2*i - 1;
        for(int j = 5-i; j >= 1; j--){
            cout << "  ";
        }
        for(int j = 1; j <= x; j++){
            cout << "* ";
        }
        cout << endl;
    }
}
