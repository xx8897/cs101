#include <stdio.h>
//#include <stdlib.h>
int round_func(float f){
    int i=(int)f;
    if(2*(f-i)>1){
        printf("%d\n",i+1);
    }
    else printf("%d\n",i);
}

int main(){
    float f=1.4;
    round_func(f);
    return 0;
}