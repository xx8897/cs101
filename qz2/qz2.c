#include <stdio.h>

void print_spaces(int r){
    int rows=5;
    for(int i=rows-r;i>0;i--){
        printf("  ");
    }
}

void print_stars(int r){
    int rows=5;
    for(int i=0;i<2*r-1;i++){
        printf("* ");
    }
}

int main(){
    int rows=5;
    for(int i=rows;i>=1;i--){
        print_spaces(i);
        print_stars(i);
        printf("\n");
    }
    return 0;
}