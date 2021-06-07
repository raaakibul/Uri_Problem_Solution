#include<iostream>
#include<stdio.h>

using namespace std;
int main(){
    double a,b,avg;
    cin >> a;
    cin >> b;
    avg = ((a*3.5)+(b*7.5))/(3.5+7.5);

    printf("MEDIA = %.5lf\n",avg);
return 0;
}
