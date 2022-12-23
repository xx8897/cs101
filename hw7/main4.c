#include <stdio.h>
int main(){
    int i=12345;
    int m=(i/1000)%10;
    int n=i%10;
    int ans=i-m*1000+n*1000-n+m;
    if(i>0)    printf("%d",ans);
    else    printf("錯誤，數字小於0");

}