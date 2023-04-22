
#include <stdio.h>
#include <stdint.h>


// тип_повертаємого_значення имя_функції ( тип1 імя_параметру_1,  тип2 імя_параметру_2, тип3 імя_параметру_3,)
// {
// 
// }

short findFakeCoin (short coin1, short coin2, short coin3, short coin4,
                   short coin5, short coin6, short coin7, short coin8)
{
    short originCoin = 1;
    short fakeCoin = 0;

    if(coin1 > originCoin)
    {
        fakeCoin = 1;
    }

    if(coin2 > originCoin)
    {
        fakeCoin = 2;
    }

    if (coin3 > originCoin)
    {
        fakeCoin = 3;
    }

    if (coin4 > originCoin)
    {
        fakeCoin = 4;
    }

    if (coin5 > originCoin)
    {
        fakeCoin = 5;
    }

    if (coin6 > originCoin)
    {
        fakeCoin = 6;
    }

    if (coin7 > originCoin)
    {
        fakeCoin = 7;
    }

    if (coin8 > originCoin)
    {
        fakeCoin = 8;
    }

    return fakeCoin;
}


short findFakeCoin2(short cn[8])
{
    short originCoin = 1;
    short fakeCoin = 0;

    for(int num = 0; num < 8; num++)
    {
        if( cn[num] > originCoin )
        {
            fakeCoin = num;
        }
    }

    fakeCoin = fakeCoin + 1;

    return fakeCoin;
}


void main()
{
    /*
        8 монет, одна монета фальшива(важче)
        знайти фальшиву монету!

        1 - справжня монета
        2 - фальшива монета
    */
    const short origin = 1;

    short coin[8] = {0,0,0,0,0,0,0,0};

    coin[0] = 1;
    coin[1] = 1;
    coin[2] = 1;
    coin[3] = 1;
    coin[4] = 1;
    coin[5] = 1;
    coin[6] = 3;
    coin[7] = 1;

    short fakeCoin;

    /*short coin[8] = {1, 1, 1, 1, 2, 1, 1, 1};

    for(int i = 0; i < 8 ; i++)
    {
        if (coin[i] != origin)
        {
            printf("coin %d is fake!\n", i);
        }
    }
    */

    fakeCoin = findFakeCoin(coin[0], coin[1], coin[2], coin[3], coin[4], coin[5], coin[6], coin[7]);
    printf("coin %d is fake!\n", fakeCoin);

    coin[0] = 1;
    coin[1] = 2;
    coin[2] = 1;
    coin[3] = 1;
    coin[4] = 1;
    coin[5] = 1;
    coin[6] = 1;
    coin[7] = 1;

    fakeCoin = findFakeCoin(coin[0], coin[1], coin[2], coin[3], coin[4], coin[5], coin[6], coin[7]);
    printf("coin %d is fake!\n", fakeCoin);

    coin[0] = 1;
    coin[1] = 1;
    coin[2] = 1;
    coin[3] = 1;
    coin[4] = 1;
    coin[5] = 5;
    coin[6] = 1;
    coin[7] = 1;

    fakeCoin = findFakeCoin2(coin);
    printf("coin %d is fake!\n", fakeCoin);
}
