#include <stdio.h>

void print_spaces(int r){
    int i;
    for(i=0;i<r-1;i++){
        printf(" ");
    }
}
void print_stars(int r,int rows){
    int i;
    for(i=0;i<2*(rows-r)+1;i++){
        printf("*");
    }
    printf("\n");
}

int main(){
    int rows=4;
    int i=0;
    for(i=0)
    for(i=rows;i>0;--i){
        print_spaces(i);
        print_stars(i,rows);
    }
    return 0;
}