
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

short findFakeCoin3(short cn[8])
{
    //  1 2 3  4 5 6  7 8
    //  1 ta 2

    short fakeCoin;

    if (cn[0] > cn[1])
    {
        fakeCoin = 1;
    }
    else if(cn[1] > cn[2])
    {
        fakeCoin = 2;
    }
    else if (cn[2] > cn[3])
    {
        fakeCoin = 3;
    }
    else if (cn[3] > cn[4])
    {
        fakeCoin = 4;
    }
    else if (cn[4] > cn[5])
    {
        fakeCoin = 5;
    }
    else if (cn[5] > cn[6])
    {
        fakeCoin = 6;
    }
    else if (cn[6] > cn[7])
    {
        fakeCoin = 7;
    }
    else
    {
        fakeCoin = 8;
    }

    return fakeCoin;
}

short findFakeCoin4(short cn[8])
{
    //  1 2 3  4 5 6  7 8

    // (1 2 3) == (4 5 6)   7 > 8
    // (1 2 3) > (4 5 6)    1==2     3
    // (1 2 3) < (4 5 6)    4==5     6

    short fakeCoin = 0;

    short coin123 = cn[0] + cn[1] + cn[2];
    short coin456 = cn[3] + cn[4] + cn[5];

    if(coin123 > coin456)
    {
        if(cn[0] > cn[1])
        {
            fakeCoin = 1;
        }
        else if(cn[0] < cn[1])
        {
            fakeCoin = 2;
        }
        else if (cn[0] == cn[1])
        {
            fakeCoin = 3;
        }
    }
    else if (coin123 < coin456)
    {
        if (cn[3] > cn[4])
        {
            fakeCoin = 4;
        }
        else if(cn[3] < cn[4])
        {
            fakeCoin = 5;
        }
        else if (cn[3] == cn[4])
        {
            fakeCoin = 6;
        }
    }
    else if (coin123 == coin456)
    {
        if (cn[6] > cn[7])
        {
            fakeCoin = 7;
        }
        else
        {
            fakeCoin = 8;
        }
    }

    return  fakeCoin;
}


void Task1(void)
{
    /*
       Задача1:
       8 монет, одна монета фальшива(важче)
       знайти фальшиву монету!

       1 - справжня монета
       2 - фальшива монета
   */
    const short origin = 1;

    short coin[8] = { 0,0,0,0,0,0,0,0 };

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
    printf("findFakeCoin2: coin %d is fake!\n", fakeCoin);

    fakeCoin = findFakeCoin3(coin);
    printf("findFakeCoin3: coin %d is fake!\n", fakeCoin);

    fakeCoin = findFakeCoin4(coin);
    printf("findFakeCoin4: coin %d is fake!\n", fakeCoin);
}

void Task2(void)
{
     /*
        Задача2: В банці є один червяк,
        Кожну секунду червяк ділиться на 2.
        За 30 с банка заповнюється повністm.
        Якщо в банку помістити 2 червяки то за скільки заповнится повністю банка?

        // 15 сек  29
        // 15 сек
     */



}

void main()
{
    Task1();
    Task2();
}
