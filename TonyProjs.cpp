/*
        Program: Create a State class
        Programmer: Anthony Drofyak
       Date: 8/9/2020
       Purpose: Practice creating a simple class and declaring objects
*/
#include<iostream>
#include<string>
using namespace std;
class State
{
private:
    string Name();
    string Capital();
    int yearFounded();
public:
    State() { Name = "unknown"; Capital = "unknown"; yearFounded = 0; }
    State(string nm, string cap, int year) { Name = nm; Capital = cap; yearFounded = year; }
    void setName(string nm) { Name = nm; }
    void setCapital(string cap) { Capital = cap; }
    void setYearFounded(int year) { yearFounded = year; }
    string getName() { return Name; }
    string getCapital() { return Capital; }
    int getYearFounded() { return yearFounded; }
    void printState();
};
string State::Name()
{
    return string();
}
string State::Capital()
{
    return string();
}
int State::yearFounded()
{
    return 0;
}
void State::printState()
{
    cout << "This is information about the state of: " << Name << ", " << Capital << endl;
    cout << "The State was founded in " << yearFounded << endl;
}
void main()
{
    string stateName, capital;
    int year;
    //get input from user
    State stateName1;
    cout << "Enter name of State: ";
    getline(cin, stateName);
    stateName1.setName(stateName);
    cout << "Enter name of capital: ";
    getline(cin, capital);
    stateName1.setCapital(capital);
    cout << "Enter year founded: ";
    cin >> year;
    cin.ignore();
    stateName1.setYearFounded(year);
    //print out information
    stateName1.printState();
    //get input from user using contstruction with parameters
    cout << "Enter name of State: ";
    getline(cin, stateName);
    cout << "Enter name of capital: ";
    getline(cin, capital);
    cout << "Enter year founded: ";
    cin >> year;
    State stateName2(stateName, capital, year);
    stateName2.printState();
    system("pause");
}