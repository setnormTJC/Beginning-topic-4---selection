#include <iostream>
#include <vector>
#include <algorithm>  
#include <cstdlib>    
#include <ctime>      

using namespace std;

enum class Color
{
    Red = 31,
    Green = 32,
    Yellow = 33,
    Blue = 34
};


void demoSwitchOnInts()
{
    while (true)
    {
        cout << "Enter the color you want: R = 31,G = 32, Y = 33, B = 34, etc:\n";
        int numberCorrespondingToColor;
        cin >> numberCorrespondingToColor;

        cout << "\033[";
        cout << numberCorrespondingToColor;
        cout << "m";

        switch (numberCorrespondingToColor)
        {
        case 31:
            cout << "Red?\n";
            break;

        case 32:
            cout << "Green?\n";
            break;

        case 33:
            cout << "Yellow?\n";
            break;

        case 34:
            cout << "Blue?\n";
            break;

        default:
            cout << "Unsupported color:\n";
            break;
        }

    }

}


void demoSwitchOnCharColor()
{
    while (true)
    {
        cout << "Enter the color you want: R,G, Y, B:\n";
        char color;
        cin >> color;

        switch (color)
        {
        case 'R':
            cout << "\033[";
            cout << (int)Color::Red;
            cout << "m";
            cout << "Red?\n";
            break;

        case 'G':
            cout << "\033[";
            cout << (int)Color::Green;
            cout << "m";
            cout << "Green?\n";
            break;

        default:
            cout << "Unsupported color:\n";
            break;
        }

    }

}

void demoSwitchOnEnumColor(Color chosenColor)
{
    cout << "\033[";
    cout << (int)chosenColor;
    cout << "m";

    switch (chosenColor)
    {
    case Color::Red:
        cout << "This should be red\n";
        break;

    case Color::Green:

        cout << "This should be green\n";
        break;

    case Color::Yellow:
        cout << "This should be yellow\n";
        break;

    default:
        cout << "Unsupported color:\n";
        break;
    }
}

int main() {

    //cout << "\a\tasdfasdf\nNew line";
    //cout << "\033[35m" << "Is this MAGENTA?\n";
    //cout << "\033[37m" << "Is this WHITE?\n";

    //demoSwitchOnInts();

    demoSwitchOnEnumColor(Color::Blue);

    demoSwitchOnEnumColor(Color::Red);

    //demoSwitchOnCharColor(); 


    //demoSwitchOnEnumColor(Color::Red);


    //demoSwitchOnEnumColor(Color::Blue);

    //demoSwitchOnEnumColor(Color::Yellow);

}
