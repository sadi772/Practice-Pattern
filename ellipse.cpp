#include<bits/stdc++.h>
using namespace std;

int main(){
    for(int i = 1; i < 100; i++){
        int x = 10*sqrt(1-pow(i, 2)/81); // x^2/a^2 + y^2/b^2 = 1
        for(int j = 1 ; j <=10-x; j++){
            cout << " ";
        }
        for(int j = 1; j <= x; j++){
            cout << "*";
        }
        for(int j = 1; j <= x; j++){
            cout << "*";
        }
        cout << endl;
    }

    for(int i = 100; i >= 1; i--){
        int x = 10*sqrt(1-pow(i, 2)/81);
        for(int j = 1 ; j <=10-x; j++){
            cout << " ";
        }
        for(int j = 1; j <= x; j++){
            cout << "*";
        }
        for(int j = 1; j <= x; j++){
            cout << "*";
        }
        cout << endl;
    }
}
