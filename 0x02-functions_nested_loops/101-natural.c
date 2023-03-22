#include <stdio.h>

int main() {
    int i, j;
    for (i = 0; i <= 1024; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            printf("%c", ',');
            printf("%d", i);
            
        }
    }
    

    return 0;
}
