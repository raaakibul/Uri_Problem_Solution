#include<iostream>
#include<stdio.h>

using namespace std;
int main(){
    int num,hr;
    float salary ,total;
    cin >> num;
    cin >> hr;
    cin >> salary;

    total = hr*salary;
    printf("NUMBER = %d\n",num);
    printf("SALARY = U$ %.2f\n",total);


return 0;
}
