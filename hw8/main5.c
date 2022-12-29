#include <stdio.h>

void print_spaces(int r){
    int i;
    for(i=0;i<r-1;i++){
        printf("  ");
    }
}
void print_stars(int r,int rows){
    int i;
    for(i=0;2*(rows-r)-1>i;i++){
        printf("* ");
    }
}
void print_top{
    int rows=5;
    for(int i=rows;i>=1;--i){
        print_spaces(i);
        print_stars(i,rows);
        printf("\n");
    }
    return 0;
}