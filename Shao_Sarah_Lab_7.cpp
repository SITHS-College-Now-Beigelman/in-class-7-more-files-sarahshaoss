//Sarah Shao
//10/31/2024
//Lab 7l;

#include <iostream>
//include all needed libraries to use commands
#include <fstream>
#include <string>

using namespace std;
//shortcut

int main()
{
  string name;
  //creates variable for name
  double score1;
  //creates variable for score 1
  double score2;
  //creates variable for score 2
  double score3;
  //creates variable for score 3
  double average;
  //creates variable for average
  int i = 0;
  //creates variable for loop

  ifstream inFile;
  //creates variable for input file
  inFile.open("game_score.txt");
  //opens input file

  for (i = 0; i < 3; i++) //loops 3 times
    {
      inFile >> name >> score1 >> score2 >> score3;
      //inputs name, score 1, score 2, and score 3 from input file
      average = score1 * .2 + score2 * .3 + score3 * .5;
      //calculates weighted average
      if (average > 2000)
        //if average is greater than 2000
        cout << name << ": Congrats! You are an Expert!" << endl;
      else if (average >= 1800 && average <=2000)
        //if average is between 1800 and 2000
        cout << name << ": Master - Good Job!" << endl;
      else if (average >= 1500 && average < 1800)
        //if average is between 1500 and 1800
        cout << name << ": Advanced - Good Job!" << endl;
      else if (average >= 1000 && average < 1500)
        //if average is between 1000 and 1500
        cout << name << ": Intermediate" << endl;
      else if (average < 1000)
        //if average is less than 1000
        cout << name << ": Beginner - Keep Practicing!" << endl;
    }
  return 0;
  //end program
}
