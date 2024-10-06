#include "FancyBox.h"
#include <string>

FancyBox::FancyBox(int w, int h)
    : Box(w, h)
{

}

/*std::string FancyBox::asString() const
{
    std::string str;

    for( int r = 0; r < height; r+=1)
    {
        for(int c = 0; c < width; c+=1)
        {   
            if(r==0 && c==0)
            {
                str+="┌";
            }
            else if(r==0 && c==(width-1))
            {
                str+="┐";
            }
            else if(r==(height-1) && c==0)
            {
                str+="└";
            }
            else if(r== (height-1) && c==(width-1) )
            {
                str+="┘";
            }
            else if(r==0 || r==(height-1))
            {
                str+="─";
            }
            else if(c==0 || c==(width-1))
            {
                str+="│";
            }
            else
            {
                str+= " ";
            }
        }
        str += "\n";
    }

    return str;
}
*/

std::string FancyBox::asString() const
{
    std::string str;

    for( int r = 0; r < height; r+=1)
    {
        for(int c = 0; c < width; c+=1)
        {   
            if(r==0 && c==0)
            {
                str+="╓";
            }
            else if(r==0 && c==(width-1))
            {
                str+="╖";
            }
            else if(r==(height-1) && c==0)
            {
                str+="╙";
            }
            else if(r== (height-1) && c==(width-1) )
            {
                str+="╜";
            }
            else if(r==(height-1))
            {
                str+="╧";
            }
            else if(r==0)
            {
                str+="╤";
            }
            else if(c==0)
            {
                str+="╟";
            }
            else if(c==(width-1))
            {
                str+="╢";
            }
            else
            {
                str+= "┼";
            }
        }
        str += "\n";
    }

    return str;
}
