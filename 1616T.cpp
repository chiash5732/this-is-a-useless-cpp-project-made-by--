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
    for (int j = 0; j <= 15; j++) //reset group to 257 (G[][])
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
    // for (int j = 0; j <= 15; j++) //input group
    // {
    //     for (int i = 0; i <= 15; i++)
    //     {
    //         cout << "input Group " << j << " No." << i << "(if input>255 to next group):";
    //         cin >> input;
    //         if (input > 255)
    //         {
    //             break;
    //         }
    //         else
    //         {
    //             G[j][i] = input;
    //         }
    //     }
    // }
    int NL[257], FinalC, Check[15], NCN, whilecounter, totalruncounter;
    int min = 0, max = 15;         //set rand range
    for (int i = 0; i <= 255; i++) //fill num
    {
        srand(time(NULL) * 1000);
        NL[i] = rand() % (max - min + 1) + min;
        // cout << "fill " << i <<NL[i];
    }
    int x, y;
    do
    {
        FinalC = 0;
        x = 0;
        y = 16;
        for (int k = 0; k < 16; k++)
        {
            for (int j = x; j < y; j++)
            {
                if (Check[(NL[j])] == 0)
                {
                    Check[(NL[j])] = 1;
                }
                else if (Check[(NL[j])] == 1)
                {
                    NCN = 0;
                    do
                    {
                        NCN++;
                    } while (Check[NCN] == 0);
                    NL[j] = NCN;
                    FinalC = 1;
                    cout << "1";
                }
            }
            for (int j = 0; j < 16; j++)
            {
                Check[j] = 0;
            }
            x += 16;
            y += 16;
        }

        x = 0;
        y = 256;
        for (int k = 0; k < 16; k++)
        {
            for (int j = x; j < y; j += 16)
            {
                if (Check[(NL[j])] == 0)
                {
                    Check[(NL[j])] = 1;
                }
                else if (Check[(NL[j])] == 1)
                {
                    NCN = 0;
                    do
                    {
                        NCN++;
                    } while (Check[NCN] == 0);
                    NL[j] = NCN;
                    FinalC = 2;
                    cout << "2";
                }
            }
            for (int j = 0; j < 16; j++)
            {
                Check[j] = 0;
            }
            x++;
        }

        // for (int k = 0; k <= 15; k++)
        // {
        //     for (int j = 0; j <= 15; j++)
        //     {
        //         if (G[k][j] == 257)
        //         {
        //             continue;
        //         }
        //         else if (Check[(NL[(G[k][j])])] == 0)
        //         {
        //             Check[(NL[(G[k][j])])] = 1;
        //         }
        //         else if (Check[(NL[(G[k][j])])] == 1)
        //         {
        //             NCN = 0;
        //             do
        //             {
        //                 NCN++;
        //             } while (Check[NCN] == 0);
        //             NL[j] = NCN;
        //             FinalC = 3;
        //         }
        //     }
        //     for (int j = 0; j < 16; j++)
        //     {
        //         Check[j] = 0;
        //     }
        // }
        cout << "`";
        whilecounter++;
        if (whilecounter >= 1000)
        {
            system("cls");
            whilecounter = 0;
            totalruncounter++;
        }
    } while (FinalC >= 1);
    cout << endl;
    for (int i = 0; i < 256; i++)
    {
        cout << NL[i] << "/t";
        if (i % 15 == 0 && i != 0)
        {
            cout << "\n";
        }
    }
    cout << "\ntotalrun:" << totalruncounter * 1000 << endl;
    system("pause");
    return 0;
}