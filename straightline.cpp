#include<bits/stdc++.h>
using namespace std;

int main(){
    for(int i = 1 ; i <= 100; i++){
        int x = 10*i;
        for(int j = 0; j <= x; j++){
            if(j == x){
                cout << "**";
            }
            cout << " ";
        }
        cout << endl;
    }
}
