#include <stdio.h>
int main() {
    int i=10;
    if(i%3){
        printf("love");
        if(i%5)printf("IU");
    }
    else if(i%5)printf("IU");
    else printf(i);

    return 0;
    
}