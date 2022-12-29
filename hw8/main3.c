#include <stdio.h>
int get_binary(int n){
    int count=1;
    float j=(float)n;
    while(j>1){
        count++;
        j=j/(float)16;
    }
    printf("jj%f\n",j);
    return count,j;
}
int main(){
    int i =15;
    int count;
    float j;
    count,j=get_binary(i);
    printf("count%d\n",i);
    j=(float)15/16;
    printf("j%f\n",j);

}