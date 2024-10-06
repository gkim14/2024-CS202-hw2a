#include "FilledBox.h"
#include <string>

FilledBox::FilledBox(int w, int h, char f)
    : HollowBox(w, h, f)
{

}

std::string FilledBox::asString () const
{
    std::string str;
    for(int i = 0; i < this->height; i+=1)
    {
        for(int n = 0; n < this->width; n+=1)
        {
            str += this->border;
        }
        str += "\n";
    }

    return str;
}
