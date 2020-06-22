#include<iostream>
#include<vector>

using namespace std;

void PrintVector(vector<int>);
int GameStat(vector<int>, vector<int>);

int main()
{
    vector<int> answer;
    string ans;
    int stat = 1;
    cout << "enter: ";
    cin >> ans;
    for (int j = 0; j <= 3; j ++)
    {
        answer.push_back(ans[j] - '0');
    }
    // PrintVector(answer);
    while (stat)
    {
        int guess_time = 1;
        vector<int> guess;
        string gue;
        cout << "guess_" << guess_time << ": ";
        cin >> gue;
        PrintVector(guess);
        for (int j = 0; j <= 3; j ++)
        {
            guess.push_back(gue[j] - '0');
        }
        stat = GameStat(answer, guess);
        guess_time += 1;
    }
}

void PrintVector(vector<int> target)
{
    for (int i = 0; i < target.size(); i ++)
    {
        cout << target.at(i) << " ";
    }
    cout << endl;
}

int GameStat(vector<int> ans, vector<int> gue)
{
    int a = 0;
    int b = 0;
    for (int i = 0; i < ans.size(); i ++)
    {
        for (int j = 0; j < gue.size(); j ++)
        {
            if (ans.at(i) == gue.at(j))
            {
                if (ans.at(i) == gue.at(i))
                {
                    a += 1;
                }
                b += 1;
            }
        }
    }
    cout << a << "A" << b << "B" << endl;
    if (a == 4)
        return 0;
    else
    {
        return 1;
    }
}