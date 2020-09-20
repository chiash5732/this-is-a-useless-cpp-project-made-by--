#include<iostream>
#include<stdio.h>
#include<string.h>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    int G0[15], G1[15], G2[15], G3[15], G4[15], G5[15], G6[15], G7[15], G8[15], G9[15], G10[15], G11[15], G12[15], G13[15], G14[15], G15[15];
    int input;

    for (int i = 0; i <= 15; i++)
    {
        G0[i] = 257;
        G1[i] = 257;
        G2[i] = 257;
        G3[i] = 257;
        G4[i] = 257;
        G5[i] = 257;
        G6[i] = 257;
        G7[i] = 257;
        G8[i] = 257;
        G9[i] = 257;
        G10[i] = 257;
        G11[i] = 257;
        G12[i] = 257;
        G13[i] = 257;
        G14[i] = 257;
        G15[i] = 257;
    }
    for (int i = 0; i < 256; i++)
    {
        cout << i << "\t";
        if ( i%15==0 && i!=0)
        {
            cout << "\n";
        }
    }

    for (int i = 0; i <= 15; i++){
        cout << "input G0 No" << i << "(if input>255 to next group):";
        cin >> input;
        if (input>255){
            break;
        }
        else{
            G0[i] = input;
        }
    }
    for (int i = 0; i <= 15; i++){
        cout << "input G1 No" << i << "(if input>255 to next group):";
        cin >> input;
        if (input>255){
            break;
        }
        else{
            G1[i] = input;
        }
    }
    for (int i = 0; i <= 15; i++){
        cout << "input G2 No" << i << "(if input>255 to next group):";
        cin >> input;
        if (input>255){
            break;
        }
        else{
            G2[i] = input;
        }
    }
    for (int i = 0; i <= 15; i++){
        cout << "input G3 No" << i << "(if input>255 to next group):";
        cin >> input;
        if (input>255){
            break;
        }
        else{
            G3[i] = input;
        }
    }
    for (int i = 0; i <= 15; i++){
        cout << "input G4 No" << i << "(if input>255 to next group):";
        cin >> input;
        if (input>255){
            break;
        }
        else{
            G4[i] = input;
        }
    }
    for (int i = 0; i <= 15; i++){
        cout << "input G5 No" << i << "(if input>255 to next group):";
        cin >> input;
        if (input>255){
            break;
        }
        else{
            G5[i] = input;
        }
    }
    for (int i = 0; i <= 15; i++){
        cout << "input G6 No" << i << "(if input>255 to next group):";
        cin >> input;
        if (input>255){
            break;
        }
        else{
            G6[i] = input;
        }
    }
    for (int i = 0; i <= 15; i++){
        cout << "input G7 No" << i << "(if input>255 to next group):";
        cin >> input;
        if (input>255){
            break;
        }
        else{
            G7[i] = input;
        }
    }
    for (int i = 0; i <= 15; i++){
        cout << "input G8 No" << i << "(if input>255 to next group):";
        cin >> input;
        if (input>255){
            break;
        }
        else{
            G8[i] = input;
        }
    }
    for (int i = 0; i <= 15; i++){
        cout << "input G9 No" << i << "(if input>255 to next group):";
        cin >> input;
        if (input>255){
            break;
        }
        else{
            G9[i] = input;
        }
    }
    for (int i = 0; i <= 15; i++){
        cout << "input G10 No" << i << "(if input>255 to next group):";
        cin >> input;
        if (input>255){
            break;
        }
        else{
            G10[i] = input;
        }
    }
    for (int i = 0; i <= 15; i++){
        cout << "input G11 No" << i << "(if input>255 to next group):";
        cin >> input;
        if (input>255){
            break;
        }
        else{
            G11[i] = input;
        }
    }
    for (int i = 0; i <= 15; i++){
        cout << "input G12 No" << i << "(if input>255 to next group):";
        cin >> input;
        if (input>255){
            break;
        }
        else{
            G12[i] = input;
        }
    }
    for (int i = 0; i <= 15; i++){
        cout << "input G13 No" << i << "(if input>255 to next group):";
        cin >> input;
        if (input>255){
            break;
        }
        else{
            G13[i] = input;
        }
    }
    for (int i = 0; i <= 15; i++){
        cout << "input G14 No" << i << "(if input>255 to next group):";
        cin >> input;
        if (input>255){
            break;
        }
        else{
            G14[i] = input;
        }
    }
    for (int i = 0; i <= 15; i++){
        cout << "input G15 No" << i << "(if input>255 to next group):";
        cin >> input;
        if (input>255){
            break;
        }
        else{
            G15[i] = input;
        }
    }
    int NL[257];
    int FinalC=1,Check;
    int min = 0, max = 15;
        for (int i = 0; i <= 255; i++){
            if(NL[i]==0){
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
                            break;
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
                            break;
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

            for (int i = 0; i < 16; i++)
            {
                for (int j = 0; j < 16; j++)
                {
                    if (i==j)
                    {
                        break;
                    }
                    else if(NL[G0[i]]== NL[G0[j]]&& G0[i]!=257 && G0[j]!=257)
                    {
                        srand(time(NULL));
                        NL[G0[i]] = rand() % (max - min + 1) + min;
                        srand(time(NULL));
                        NL[G0[j]] = rand() % (max - min + 1) + min;
                        FinalC = 1;
                    }
                }
            }
            for (int i = 0; i < 16; i++)
            {
                for (int j = 0; j < 16; j++)
                {
                    if (i==j)
                    {
                        break;
                    }
                    else if(NL[G1[i]]== NL[G1[j]] && G1[i]!=257 && G1[j]!=257)
                    {
                        srand(time(NULL));
                        NL[G1[i]] = rand() % (max - min + 1) + min;
                        srand(time(NULL));
                        NL[G1[j]] = rand() % (max - min + 1) + min;
                        FinalC = 1;
                    }
                }
            }
            for (int i = 0; i < 16; i++)
            {
                for (int j = 0; j < 16; j++)
                {
                    if (i==j)
                    {
                        break;
                    }
                    else if(NL[G2[i]]== NL[G2[j]]&& G2[i]!=257 && G2[j]!=257)
                    {
                        srand(time(NULL));
                        NL[G2[i]] = rand() % (max - min + 1) + min;
                        srand(time(NULL));
                        NL[G2[j]] = rand() % (max - min + 1) + min;
                        FinalC = 1;
                    }
                }
            }
            for (int i = 0; i < 16; i++)
            {
                for (int j = 0; j < 16; j++)
                {
                    if (i==j)
                    {
                        break;
                    }
                    else if(NL[G3[i]]== NL[G3[j]]&& G3[i]!=257 && G3[j]!=257)
                    {
                        srand(time(NULL));
                        NL[G3[i]] = rand() % (max - min + 1) + min;
                        srand(time(NULL));
                        NL[G3[j]] = rand() % (max - min + 1) + min;
                        FinalC = 1;
                    }
                }
            }
            for (int i = 0; i < 16; i++)
            {
                for (int j = 0; j < 16; j++)
                {
                    if (i==j)
                    {
                        break;
                    }
                    else if(NL[G4[i]]== NL[G4[j]]&& G4[i]!=257 && G4[j]!=257)
                    {
                        srand(time(NULL));
                        NL[G4[i]] = rand() % (max - min + 1) + min;
                        srand(time(NULL));
                        NL[G4[j]] = rand() % (max - min + 1) + min;
                        FinalC = 1;
                    }
                }
            }
            for (int i = 0; i < 16; i++)
            {
                for (int j = 0; j < 16; j++)
                {
                    if (i==j)
                    {
                        break;
                    }
                    else if(NL[G5[i]]== NL[G5[j]]&& G5[i]!=257 && G5[j]!=257)
                    {
                        srand(time(NULL));
                        NL[G5[i]] = rand() % (max - min + 1) + min;
                        srand(time(NULL));
                        NL[G5[j]] = rand() % (max - min + 1) + min;
                        FinalC = 1;
                    }
                }
            }
            for (int i = 0; i < 16; i++)
            {
                for (int j = 0; j < 16; j++)
                {
                    if (i==j)
                    {
                        break;
                    }
                    else if(NL[G6[i]]== NL[G6[j]]&& G6[i]!=257 && G6[j]!=257)
                    {
                        srand(time(NULL));
                        NL[G6[i]] = rand() % (max - min + 1) + min;
                        srand(time(NULL));
                        NL[G6[j]] = rand() % (max - min + 1) + min;
                        FinalC = 1;
                    }
                }
            }
            for (int i = 0; i < 16; i++)
            {
                for (int j = 0; j < 16; j++)
                {
                    if (i==j)
                    {
                        break;
                    }
                    else if(NL[G7[i]]== NL[G7[j]]&& G7[i]!=257 && G7[j]!=257)
                    {
                        srand(time(NULL));
                        NL[G7[i]] = rand() % (max - min + 1) + min;
                        srand(time(NULL));
                        NL[G7[j]] = rand() % (max - min + 1) + min;
                        FinalC = 1;
                    }
                }
            }
            for (int i = 0; i < 16; i++)
            {
                for (int j = 0; j < 16; j++)
                {
                    if (i==j)
                    {
                        break;
                    }
                    else if(NL[G8[i]]== NL[G8[j]]&& G8[i]!=257 && G8[j]!=257)
                    {
                        srand(time(NULL));
                        NL[G8[i]] = rand() % (max - min + 1) + min;
                        srand(time(NULL));
                        NL[G8[j]] = rand() % (max - min + 1) + min;
                        FinalC = 1;
                    }
                }
            }
            for (int i = 0; i < 16; i++)
            {
                for (int j = 0; j < 16; j++)
                {
                    if (i==j)
                    {
                        break;
                    }
                    else if(NL[G9[i]]== NL[G9[j]]&& G9[i]!=257 && G9[j]!=257)
                    {
                        srand(time(NULL));
                        NL[G9[i]] = rand() % (max - min + 1) + min;
                        srand(time(NULL));
                        NL[G9[j]] = rand() % (max - min + 1) + min;
                        FinalC = 1;
                    }
                }
            }
            for (int i = 0; i < 16; i++)
            {
                for (int j = 0; j < 16; j++)
                    if (i==j)
                    {
                        break;
                    }
                    else if(NL[G10[i]]== NL[G10[j]]&& G10[i]!=257 && G10[j]!=257)
                    {
                        srand(time(NULL));
                        NL[G10[i]] = rand() % (max - min + 1) + min;
                        srand(time(NULL));
                        NL[G10[j]] = rand() % (max - min + 1) + min;
                        FinalC = 1;
                    }
            }
            for (int i = 0; i < 16; i++)
            {
                for (int j = 0; j < 16; j++)
                {
                    if (i==j)
                    {
                        break;
                    }
                    else if(NL[G11[i]]== NL[G11[j]]&& G11[i]!=257 && G11[j]!=257)
                    {
                        srand(time(NULL));
                        NL[G11[i]] = rand() % (max - min + 1) + min;
                        srand(time(NULL));
                        NL[G11[j]] = rand() % (max - min + 1) + min;
                        FinalC = 1;
                    }
                }
            }
            for (int i = 0; i < 16; i++)
            {
                for (int j = 0; j < 16; j++)
                {
                    if (i==j)
                    {
                        break;
                    }
                    else if(NL[G12[i]]== NL[G12[j]]&& G12[i]!=257 && G12[j]!=257)
                    {
                        srand(time(NULL));
                        NL[G12[i]] = rand() % (max - min + 1) + min;
                        srand(time(NULL));
                        NL[G12[j]] = rand() % (max - min + 1) + min;
                        FinalC = 1;
                    }
                }
            }
            for (int i = 0; i < 16; i++)
            {
                for (int j = 0; j < 16; j++)
                {
                    if (i==j)
                    {
                        break;
                    }
                    else if(NL[G13[i]]== NL[G13[j]]&& G13[i]!=257 && G13[j]!=257)
                    {
                        srand(time(NULL));
                        NL[G13[i]] = rand() % (max - min + 1) + min;
                        srand(time(NULL));
                        NL[G13[j]] = rand() % (max - min + 1) + min;
                        FinalC = 1;
                    }
                }
            }
            for (int i = 0; i < 16; i++)
            {
                for (int j = 0; j < 16; j++)
                {
                    if (i==j)
                    {
                        break;
                    }
                    else if(NL[G14[i]]== NL[G14[j]]&& G14[i]!=257 && G14[j]!=257)
                    {
                        srand(time(NULL));
                        NL[G14[i]] = rand() % (max - min + 1) + min;
                        srand(time(NULL));
                        NL[G14[j]] = rand() % (max - min + 1) + min;
                        FinalC = 1;
                    }
                }
            }
            for (int i = 0; i < 16; i++)
            {
                for (int j = 0; j < 16; j++)
                {
                    if (i==j)
                    {
                        break;
                    }
                    else if(NL[G15[i]]== NL[G15[j]]&& G15[i]!=257 && G15[j]!=257)
                    {
                        srand(time(NULL));
                        NL[G15[i]] = rand() % (max - min + 1) + min;
                        srand(time(NULL));
                        NL[G15[j]] = rand() % (max - min + 1) + min;
                        FinalC = 1;
                    }
                }
            }

            cout << "`";
            system("cls");
    } while (FinalC = 1);
    cout << endl;
    for (int i = 0; i < 256; i++)
    {
        cout << NL[i] << "/t";
        if ( i%15==0 && i!=0)
        {
            cout << "\n";
        }
    }

    return 0;
}