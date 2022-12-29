#include <stdio.h>
int main(){
    int rows =7;
    int spc =rows;
    for(int i=1;i<=rows;i++){
        for(int k=spc;k>=1;k--){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("%c",'*');
            printf(" ");
        }
        printf("\n");
        spc--;
    }
}