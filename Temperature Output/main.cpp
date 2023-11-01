//Bar Chart Main
#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
// Declaring variables
    int starCount = 0;
    int loopCount;
    int temperature;
    string divider = "|";
// Header files for file input and string
    string filename;
    ifstream inData;
    inData.open(filename);
    string data, data2, data3, data4;
// Prompts the user to enter the name of the file containing the temperature values.
    cout << "Enter your file with temperatures: " << endl;
    cin >> filename;
// Reading the temperature values from the file
    temperature = -20;
    data = -20;
// Tempatures fall within the range of -30 to 120.
if (temperature < -30 || temperature > 120)
{
    cout << "-" << endl;
}
// Temperature ratio 3 to 1 represented by a star
    while (inData.is_open())
    {
        loopCount = 3;
        while (loopCount <= starCount)
        {
            cout << '*';
            loopCount++;
        }
    }
// Horzontal Heading
    cout << "Temperatures for 24 hours:" << endl;
    cout <<setw(7) << "-30" << setw(10) << '0' << setw(10) << "30" << setw(10) << "60" << setw(10) << "90" << setw(10) << "120"<< endl;
// Dividing at 0
    cout << fixed << showpoint << setprecision(1) << setw(17) << divider << endl;
// Vertical Heading
    cout << "-20" << endl << '0' << endl << "1" << endl << "2" << endl << "3" << endl << "4" << endl << "5" << endl << "10" << endl << "50" << endl << "100" << endl;
    
// Closing file & ending program
    inData.close();
    return 0;
}

