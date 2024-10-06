#include "FancyBox.h"
#include "HollowBox.h"
#include "FilledBox.h"
#include <iostream>
#include <string>
#include <vector>

using std::cout; 
using std::cerr;
using std::endl;
using std::string;
using std::stoi;
using std::vector;

int main(int argc, char** argv)
{
    if(argc != 4)
    {
        cerr << "Usage: " << argv[0] << " width height int" << endl;
        
        return 1; 
    }

    vector<string> args{argv, argv + argc};

    if(stoi(args[3]) == 1)
    {
        FancyBox box(stoi(args[1]), stoi(args[2]));

        cout << box.asString() << endl;

    }
    else if (stoi(args[3]) == 2)
    {
        HollowBox box(stoi(args[1]), stoi(args[2]), '*');

        cout << box.asString() << endl;
    }
    else
    {
        FilledBox box(stoi(args[1]), stoi(args[2]), '*');

        cout << box.asString() << endl;
    }
    

    return 0;
}
