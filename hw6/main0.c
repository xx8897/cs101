#include <stdio.h>
int main() {
    int i=10;
    printf("%d is %s",i, (i > 0) && ((i & (i - 1)) == 0)?"true":"false");

    return 0;
}