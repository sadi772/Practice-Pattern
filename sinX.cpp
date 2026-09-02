#include<bits/stdc++.h>
using namespace std;

int main(){
    for(int i = 0; i <= 1000; i++){
        int x = ceil(sin(i));
        for(int j = 0; j <= x; j++){
            if(j == x){
                cout << "*";
            }
            cout << " ";
        }
        cout << endl;
    }
}
