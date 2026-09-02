#include<bits/stdc++.h>
using namespace std;

int main(){
    for(int k = 0; k < 2; k++){
        for(int i = 1; i <= 100; i++){
            int x = floor(sqrt(100*i));
            for(int m = 0; m < 3; m++){
                for(int j = 0; j <= 100-x; j++){
                    cout << "-";
                }
                for(int j = 0; j <= x; j++){
                    cout << " ";
                }
                for(int j = 0; j <= x; j++){
                    cout << " ";
                }
                for(int j = 0; j <= 100-x; j++){
                    cout << "-";
                }

                for(int j = 0; j <= 100-x; j++){
                    cout << "-";
                }
                for(int j = 0; j <= x; j++){
                    cout << "*";
                }
                for(int j = 0; j <= x; j++){
                    cout << "*";
                }
                for(int j = 0; j <= 100-x; j++){
                    cout << "-";
                }

                }
                cout << endl;
            }
        // perabola
        for(int i = 100; i >= 1; i--){
            int x = floor(sqrt(100*i));
                for(int m = 0; m < 3; m++){


                for(int j = 0; j <= 100-x; j++){
                    cout << "-";
                }
                for(int j = 0; j <= x; j++){
                    cout << "*";
                }
                for(int j = 0; j <= x; j++){
                    cout << "*";
                }
                for(int j = 0; j <= 100-x; j++){
                    cout << "-";
                }
                //

                for(int j = 0; j <= 100-x; j++){
                    cout << "-";
                }
                for(int j = 0; j <= x; j++){
                    cout << " ";
                }
                for(int j = 0; j <= x; j++){
                    cout << " ";
                }
                for(int j = 0; j <= 100-x; j++){
                    cout << "-";
                }
            }
            cout << endl;
        }
    }
}
