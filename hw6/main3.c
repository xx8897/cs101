#include <stdio.h>
int main() {
    int year=1900;
    if(year%400==0)printf("閏年");
    else if ((year%100!=0)&&(year%4==0))printf("閏年");
    else printf("不是閏年");

    return 0;
}