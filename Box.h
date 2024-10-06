#pragma once
#include <string>

class Box
{
    public:

        int getWidth() const;
        int getHeight() const;
        virtual std::string asString() const = 0;

    protected:
    
        Box(int w, int h);

        int width;
        int height;

};
