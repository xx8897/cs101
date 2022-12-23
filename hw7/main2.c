#include <stdio.h>
int main(){
    double PI=0.0f;
    int x=1;
    int add=1;
    int count=0;
    for(x=1;!(PI<=3.141594&&PI>=3.141585);x+=2){
        PI+=4.0/x*add;
        add*=-1;
        count++;
    }
    printf("%d\n",x);
}