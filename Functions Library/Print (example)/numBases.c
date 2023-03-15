#include <stdio.h>
#include <stdlib.h>

// Can only apply to integers

int main()
{
    int n = 46382;
    printf("Dec form: %d\n", n);
    printf("Oct form: %o\n", n);
    printf("Hex form: %x (lowercased letter(s))\n", n);
    printf("Hex form: %X (uppercased letter(s))\n", n);

    system("pause");
    return 0;
}
