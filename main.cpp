#include <iostream>
#include <vector>

using namespace std;

void PrintVectorThing(string, vector<int>);
int GuessGameHints(vector<int>, vector<int>);

int main()
{
  vector<int> answer;
  int guess_count = 0;
  int game_stat = 1;

  for (int i = 0; i < 4; i ++)
  {
    int temp_ans;
    const char order_ans[4][10] = {
      "first", "second", "third", "last"
    };
    cout << "enter the " << order_ans[i] << " answer: ";
    cin >> temp_ans;
    answer.push_back(temp_ans);
  }

  // PrintVectorThing("answer", answer);

  cout << endl;

  while (game_stat)
  {
    vector<int> guess(4);
    cout << "guess_" << guess_count << ": ";
    char temp_gue[4];
    cin >> temp_gue;
    for (int i = 0; i <= 3; i ++)
    {
      guess[i] = temp_gue[i] - '0';
    }

    // PrintVectorThing("guess", guess);

    game_stat = GuessGameHints(answer, guess);
    guess_count += 1;
  }

  return 0;
}

void PrintVectorThing(string title, vector<int> print_target)
{
  cout << title << " is: ";
  for (int i = 0; i < print_target.size(); i ++)
  {
    cout << print_target.at(i);
  }
  cout << endl;
}

int GuessGameHints(vector<int> ans, vector<int> gue)
{
  int a = 0, b = 0;
  for (int j = 0; j < gue.size(); j ++)
  {
    for (int k = 0; k < gue.size(); k ++)
    {
      if (ans[j] == gue[k])
      {
        if (ans[j] == gue[j])
        {
          a += 1;
          break;
        }
        b += 1;
      }
    }
  }
  cout << a << "A" << b << "B" << endl;
  if (a != 4)
    return 1;
  else
    cout << "Congratulations!" << endl;
    return 0;
}