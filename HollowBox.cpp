#include "HollowBox.h"
#include <string>

HollowBox::HollowBox(int w, int h, char b)
    : Box(w, h), border{b}
{

}

std::string HollowBox::asString() const
{
    std::string str;
    for(int i = 0; i < this->height; i+=1)
    {
        for(int n = 0; n < this->width; n+=1)
        {
            if(i==0 || i==(this->height-1) || n==0 || n==(this->width-1))
            {
                str+=this->border;
            }
            else
            {
                str+=" ";
            }
        }
        str+="\n";
    }
    
    return str;
}
