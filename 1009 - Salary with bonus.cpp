#include<iostream>
#include<stdio.h>

using namespace std;
int main(){
    char name[20];
    double total,salary,sell;
    cin >> name;
    cin >> salary;
    cin >> sell;

     total = salary + (0.15*sell);
     printf("TOTAL = R$ %.2lf\n",total);
return 0;
}

