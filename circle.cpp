#include<bits/stdc++.h>
using namespace std;

int main(){
    for(int i = 31; i >= 1; i--){
        int x = floor(sqrt(1000-pow(i, 2))); // X^2 + y^2 = R^2
        for(int j = 1; j <= 31-x; j++){
            cout << "  ";
        }
        for(int j = 1; j <= x; j++){
            cout << "* ";
        }
        for(int j = 1 ; j <= x; j++){
            cout << "* ";
        }
        cout << endl;
    }

    for(int i = 1; i <= 31; i++){
        int x = sqrt(1000-pow(i, 2));
        for(int j = 1; j <= 31-x; j++){
            cout << "  ";
        }
        for(int j = 1; j <= x; j++){
            cout << "* ";
        }
        for(int j = 1; j <= x; j++){
            cout << "* ";
        }
        cout << endl;
    }
}
