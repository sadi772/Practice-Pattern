#include<bits/stdc++.h>
using namespace std;

int main(){
        for(int i = 1; i <= 31; i++){
            int x =  round(5*sqrt((1+pow(i,2)/14))); // X^2/a^2 - y^2/b^2= 1;
            for(int j = 0; j <= x; j++){
                cout << "-";
            }

            for(int j = 0; j <= 30-x; j++){
                cout << "*";
            }
            for(int j = 0; j <= 30-x; j++){
                cout << "*";
            }
            cout << endl;
        }
        for(int i = 31; i >= 1; i--){
            int x =  round(5*sqrt((1+pow(i,2)/14))); // X^2/a^2 - y^2/b^2= 1;
            for(int j = 0; j <= x; j++){
                cout << "-";
            }

            for(int j = 0; j <= 30-x; j++){
                cout << "*";
            }
            for(int j = 0; j <= 30-x; j++){
                cout << "*";
            }
            cout << endl;
        }
    /*
    for(int i = 31; i >= 1; i--){
        int x =  5*sqrt((1+pow(i,2)/14)); // X^2/a^2 - y^2/b^2= 1;
        for(int j = 0; j <= 30-x; j++){
            cout << "-";
        }
        for(int j = 0; j <= x; j++){
            cout << "*";
        }
        for(int j = 0; j <= x; j++){
            cout << "*";
        }
        cout << endl;
    }

    for(int i = 1; i <= 31; i++){
        int x =  5*sqrt((1+pow(i,2)/14)); // X^2/a^2 - y^2/b^2= 1;
        for(int j = 0; j <= 30-x; j++){
            cout << "-";
        }
        for(int j = 0; j <= x; j++){
            cout << "*";
        }
        for(int j = 0; j <= x; j++){
            cout << "*";
        }
        cout << endl;
    }
    */
}
