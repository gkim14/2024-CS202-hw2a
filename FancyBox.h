#pragma once
#include "Box.h"
#include <string>

class FancyBox: public Box
{
    public: 

        FancyBox(int w, int h);

        std::string asString() const override;

};
