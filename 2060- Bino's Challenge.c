#include <stdio.h>
int main()
{
    int n, i, j, c2=0, c3=0, c4=0, c5=0;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &j);
        if(j % 2 == 0)
            c2++;
        if(j % 3 == 0)
            c3++;
        if(j % 4 == 0)
            c4++;
        if(j % 5 == 0)
            c5++;
    }
    printf("%d Multiplo(s) de 2\n", c2);
    printf("%d Multiplo(s) de 3\n", c3);
    printf("%d Multiplo(s) de 4\n", c4);
    printf("%d Multiplo(s) de 5\n", c5);
    return 0;
}
