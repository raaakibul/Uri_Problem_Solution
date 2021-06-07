#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    int a,b,c,max_value;
    cin >> a >> b >> c;

    max_value = a;
    if(b>max_value)
        max_value = b;
    if(c>max_value)
        max_value = c;
        printf("%d eh o maior\n",max_value);

return 0;
}
