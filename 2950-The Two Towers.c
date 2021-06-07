#include<stdio.h>
int main(){
    int N,x,y;
    scanf("%d%d%d",&N,&x,&y);
    if(x>0 && y<100){
        printf("%.2lf\n",(double)N/(x+y));
    }


return 0;
}
