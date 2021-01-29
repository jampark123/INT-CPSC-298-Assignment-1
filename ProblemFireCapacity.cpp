#include <iostream>

using namespace std;
int main ()
{
  /*
  assignment 1
  problem 2

  Program takes the current capacity and maximum capacity of a building to see
  if a meeting is following fire regulations. If the current capacity is less
  than the maximum capacity, then the program outputs how many people can join
  the meeting. If the current capacity is more than the maximum capacity, then
  the program outputs that the meeting cannot go on and the amount of people
  needed to leave to allow the meeting to go on.
  */

  //Maximum amount of people that could be in the building.
  int maxCapacity;
  //Current amount of people that are in the meeting.
  int currentCapactiy;
  //The amount of additonal people that could be in the meeting if the current
  //capacity is less than the maximum capacity.
  int numAdditionalPeople;
  //The amount of people that is needed to leave if the current capacity is less
  //than the maximum capacity.
  int numPeopleNeededToLeave;

  //Prompts the user to input the building's maximum capacity and current
  //capacity.
  cout << "Enter max capacity of the building: ";
  cin >> maxCapacity;
  cout << "Enter current capacity of the building: ";
  cin >> currentCapactiy;

  /*
  Checks if the current capacity is less than or more than the maximum capacity.
  If the current capacity is more than the maximum capacity, then the program
  returns that the meeting cannot proceed and the amount of people needed to
  leave to continue the meeting. Otherwise, the program outputs that the meeting
  could proceed and that the amount of additional that could join the meeting
  without breaking fire regulations.
  */
  if (maxCapacity < currentCapactiy)
  {
    numPeopleNeededToLeave = currentCapactiy - maxCapacity;
    cout << "Meeting cannot be held because of fire regulations." << endl;
    cout << "So, " << numPeopleNeededToLeave << " people must leave." << endl;
  }
  else if (maxCapacity >= currentCapactiy)
  {
    numAdditionalPeople = maxCapacity - currentCapactiy;
    cout << "Meeting is following fire regulations and therefore could be held." << endl;
    cout << "So, " << numAdditionalPeople << " additional people could join meeting." << endl;
  }
}
