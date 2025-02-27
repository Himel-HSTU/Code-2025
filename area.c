#include <stdio.h>

int main() {

        for (int i = 5; i >0; --i)
        {
            for (int j = 0; j < i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    
    return 0;
}
/*
int a=567432;
    while (a)
    {
        int z=a%10;
        printf("%d\n",z);
        a = a/10;
    }
*/