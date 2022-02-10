#include <iostream>
#include <fstream>
using namespace std;
int CHAPTER_NUMBER = 18;
int get_next_chapter_num()
{
  if (CHAPTER_NUMBER == 0)
    CHAPTER_NUMBER = 18;
  return CHAPTER_NUMBER--;
}
int main()
{
  ifstream obj_read;
  char line_array[50];
  while (true)
  {
    obj_read.open("answers.txt");
    if (obj_read.fail())
    {
      cout << "Plz make sure your file name is correct!" << endl;
    }
    string q;
    cout << endl
         << "Enter your question" << endl;
    cin >> q;
    cin.ignore();
    int counter = 0;
    char x;
    obj_read.get(x);
    bool hash_found = false;

    while (!obj_read.eof())
    {
      if (hash_found && x == 'N')
      {
        obj_read.get(x);
        continue;
      } // logic
      if (x == '\n')
      {
        // print out the answer line
        int i = 0;
        while (true)
        {
          if (line_array[i] == '\n')
          {
            counter = 0;
            // read next question
            string q;
            cout << endl
                 << "Enter your question" << endl;
            cin >> q;
            cin.ignore();
            break;
          }
          cout << line_array[i];
          i++;
        }
        // cout << endl;
      }
      else
      {
        if (x == '#')
        {
          int next_number = get_next_chapter_num();
          if (next_number < 10) // 1, 2, 3..
            line_array[counter++] = '0' + next_number;
          else
          { // 10, 11, 12, ...
            line_array[counter++] = '1';
            line_array[counter++] = '0' + (next_number - 10);
          }
          hash_found = true;
        }
        else
        {
          line_array[counter++] = x;
        }
        line_array[counter] = '\n';
      }

      obj_read.get(x);
    }
    // print last answer
    int i = 0;
    while (true)
    {
      if (line_array[i] == '\n')
      {
        break;
      }
      cout << line_array[i];
      i++;
    }
    obj_read.close();
  }
  return 0;
}