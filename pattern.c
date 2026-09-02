#include<stdio.h>

int main(){
    for(int i = 1; i <= 4; i++){
        for(int j = 1; j <= 4; j++){
            printf("%c ", 64+i);
        }
        printf("\n");
    }
    return 0;
}


/*
   1
  12
 123
1234
 123
  12
   1

int main(){

    for(int i = 1; i <= 4; i++){
        for(int j = 3; j >= i;j--){
            printf(" ");
        }
        for(int j = 1; j <= i; j++){
            printf("%d", j);
        }
        printf("\n");

    }

    for(int i = 3 ; i >= 1; i--){
        for(int j = i; j <= 3; j++){
            printf(" ");
        }
        for(int j = 1; j <= i; j++){
            printf("%d", j);
        }
        printf("\n");

    }

    return 0;
}

/*
1234
 123
  12
   1

int main(){

    for(int i = 4; i >= 1; i--){

        for(int j = i+1; j <= 4; j++){
            printf(" ");
        }
        for(int j = 1; j <= i; j++){
            printf("%d", j);
        }
        printf("\n");

    }


    return 0;
}


/*
   1
  12
 123
1234

int main(){

    for(int i = 1; i <= 4; i++){
        for(int j = 1; j <= 4-i; j++){
            printf(" ");
        }
        for(int k = 1; k <= i; k++){
            printf("%c", k);
        }
        printf("\n");

    }


    return 0;
}



/*
A
B B
C C C
D D D D
E E E E E
F F F F F F



int main(){

    for(int i = 1; i <= 6; i++){
        for(int j = 1; j <= i; j++){
            printf("%c ", i+64);
        }
        printf("\n");
    }


    return 0;
}
*/

