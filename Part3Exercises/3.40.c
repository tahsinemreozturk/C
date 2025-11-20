#include <stdio.h>

int main()
{
    int x = 2;

    while (1)
    {
        printf("%d\n", x);
        x = x * 2;
    }
    return 0;
}

// INTEGER OVERFLOW EXAMPLE
// x surekli 2 ile carpildigi icin deger sinirsiz bir sekilde buyuyecek ve sonsuz donguye girecektir.
// Bu nedenle program asla sonlanmayacak ve bellekteki degerler sinirlarini asacak, bu da bellek tasmasina neden oluyor.