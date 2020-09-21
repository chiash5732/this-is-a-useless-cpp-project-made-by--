#include <iostream>
#include <stdio.h>
#include <string.h>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int G[15][15];
    int input;
    for (int j = 0; j <= 15; j++)  //reset group to 257 (G[][])
    {
        for (int i = 0; i <= 15; i++)
        {
            G[j][i] = 257;
        }
    }
    for (int i = 0; i <= 255; i++) //print list
    {
        cout << i << "\t";
        if (i % 15 == 0 && i != 0)
        {
            cout << "\n";
        }
    }
    for (int j = 0; j <= 15; j++)   //input group
    {
        for (int i = 0; i <= 15; i++)
        {
            cout << "input G" << j << " No" << i << "(if input>255 to next group):";
            cin >> input;
            if (input > 255)
            {
                break;
            }
            else
            {
                G[j][i] = input;
            }
        }
    }
    int NL[257], FinalC, Check[15], NCN, whilecounter, totalruncounter;
    int min = 0, max = 15; //set rand range
    for (int i = 0; i <= 255; i++) //fill num
    {
        if (NL[i] == 0)
        {
            srand(time(NULL));
            NL[i] = rand() % (max - min + 1) + min;
        }
    }
    int x, y;
    do
    {
        FinalC = 0;
        x = 0;
        y = 16;
        for (int k = 0; k < 16; k++)
        {
            for (int i = x; i < y; i++)
            {
                for (int j = x; j < y; j++)
                {
                    if (i == j)
                    {
                        continue;
                    }
                    else if (NL[i] == NL[j])
                    {
                        srand(time(NULL));
                        NL[i] = rand() % (max - min + 1) + min;
                        srand(time(NULL));
                        NL[j] = rand() % (max - min + 1) + min;
                        FinalC = 1;
                    }
                }
            }
            x += 16;
            y += 16;
        }

        x = 0;
        y = 256;
        for (int k = 0; k < 16; k++)
        {
            for (int i = x; i < y; i += 16)
            {
                for (int j = x; j < y; j += 16)
                {
                    if (i == j)
                    {
                        continue;
                    }
                    else if (NL[i] == NL[j])
                    {
                        srand(time(NULL));
                        NL[i] = rand() % (max - min + 1) + min;
                        srand(time(NULL));
                        NL[j] = rand() % (max - min + 1) + min;
                        FinalC = 1;
                    }
                }
            }
            x++;
        }

        for (int k = 0; k <= 15; k++)
        {
            for (int i = 0; i < 16; i++)
            {
                for (int j = 0; j < 16; j++)
                {
                    if (i == j)
                    {
                        continue;
                    }
                    else if (NL[G[k][i]] == NL[G[k][j]] && G[k][i] != 257 && G[k][j] != 257)
                    {
                        srand(time(NULL));
                        NL[G[k][i]] = rand() % (max - min + 1) + min;
                        srand(time(NULL));
                        NL[G[k][j]] = rand() % (max - min + 1) + min;
                        FinalC = 1;
                    }
                }
            }
        }
        cout << "`";
        whilecounter++;
        if (whilecounter >= 2000)
        {
            system("cls");
            whilecounter = 0;
            totalruncounter++;
        }
    } while (FinalC = 1);
    cout << endl;
    for (int i = 0; i < 256; i++)
    {
        cout << NL[i] << "/t";
        if (i % 15 == 0 && i != 0)
        {
            cout << "\n";
        }
    }
    cout << "\ntotalrun:" << totalruncounter * 2000 << endl;
    system("pause");
    return 0;
}