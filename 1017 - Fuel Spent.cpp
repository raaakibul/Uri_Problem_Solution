#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    int time ,speed;
    cin >> time >> speed;

    float distance =  time*speed;
    printf("%.3f\n",(distance/12));

return 0;
}
