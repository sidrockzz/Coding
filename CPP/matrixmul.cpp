//
// Created by siddharth on 19/06/20.
//

#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int matrix1[4][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int matrix2[4][4] = { {17,18,19,20},{21,22,23,24},{25,26,27,28},{29,30,31,32}};
    int matrix3[4][4];
    int a;
    int b;
    int c;
    int multi = 0;

    //Multiplication:
    for (a = 0; a < 4; a++)
    {
        for (b = 0; b < 4; b++)
        {
            multi = 0;
            for (c = 0; c < 4; c++)
            {
                int temp = matrix2[c][b];
                while (temp > 0)
                {
                    multi += matrix1[a][c];
                    temp--;
                }
            }
            matrix3[a][b] = multi;
        }
    }

    //result;
    for (a = 0; a < 4; a++)
    {
        for (b = 0; b < 4; b++)
        {
            printf("%d\t", matrix3[a][b]);
        }
        printf("\n");
    }
    return 0;
}