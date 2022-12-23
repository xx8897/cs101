#include <stdio.h>
int main(){
    int x=1,y=1;
    while(y<=9){
        if(x<=9){
            printf("%d*%d=%d\t",y,x,y*x);
            x++;
        }
        if(x>9){
            x=1;
            y++;
            printf("\n");
        }
    }
}