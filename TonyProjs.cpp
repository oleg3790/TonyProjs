#include<iostream>
#include<string>
#include<cstring>
using namespace std;

bool checkVin(char[]);
#define SIZE 30
#define NUMCHARS 17

int main()
{
    char vin[SIZE];
    string getVinInput = "yes";

    cout << "Verify VIN Number Program\n";
    cout << "The VIN number should be exactly 17 characters long\n";
    cout << "The VIN number should only contain letters and numerals\n";
    cout << "The VIN number should indicate the car is manufactured in North America.\n";
    cout << "The VIN number should be for a car manufactured in 2010 or later.\n";

    while (getVinInput == "yes")
    {
        cout << "Enter your VIN number: ";
        cin.getline(vin, SIZE);

        if (checkVin(vin))
        {
            cout << "The VIN number is valid and acceptable\n";
        }
        else
        {
            cout << "The VIN number was invalid or unacceptable\n";
        }

        cout << "Do you want to enter another VIN number? (yes or no): ";
        getline(cin, getVinInput);
    }

    return 0;
}

bool checkVin(char vin[])
{
    char* p = vin; //pointer to array

    if (strlen(vin) != NUMCHARS)
    {
        cout << "VIN number must have " << NUMCHARS << " characters.\n";
        return false;
    }

    for (int i = 0; i < NUMCHARS; i++, p++)
    {
        if (isalpha(*p))
        {
            continue;
        }
        else if (isdigit(*p))
        {
            continue;
        }
        else
        {
            cout << "VIN can only contain letters and digits.\n";
        }

        return false;
    }

    p = vin; //again pointer initialises to starting position

    if (*p < '1' || *p > '5')
    {
        cout << "VIN number should indicate a car manufactured in North America but did not.\n";
        return false;
    }

    if (toupper(*(p + 9)) < 'A' || toupper(*(p + 9)) > 'I')
    {
        cout << "VIN number should indicate a car manufactured in 2010 or later, but did not.\n";
        return false;
    }

    return true;
}