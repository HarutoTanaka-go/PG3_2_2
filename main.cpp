#include <stdio.h>

int Recursive(int kyuuryou, int zikan, int kotei)
{
    if (kyuuryou >= kotei)
    {
        printf("%dŠÔŒã‚É’´‚¦‚é", zikan);
        return zikan;
    }




    printf("%d@%d\n", kyuuryou, kotei);
    kyuuryou = kyuuryou * 2 - 50;

    return (Recursive(kyuuryou, ++zikan, kotei += 1072));
}

int main()
{

    int saiki = 100;
    int ippan = 1226;
    int zikan = 0;
    int resullt1 = Recursive(saiki, zikan, ippan);

    return 0;
}