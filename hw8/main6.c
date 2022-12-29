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
void print_house(int rows){
    print_stars(1,rows);
    for(int i=0;i<rows;i++){
        printf("*");
        print_spaces(2*rows-2);
        printf("*\n");
    }
    print_stars(1,rows);
}
int main(){
    int rows=4;
    for(int i=rows;i>0;--i){
        print_spaces(i);
        print_stars(i,rows);
    }
    print_house(rows);
    return 0;
}