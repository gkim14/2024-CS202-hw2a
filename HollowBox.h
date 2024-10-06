#pragma once
#include "Box.h"
#include <string>

class HollowBox: public Box
{
    public:

        HollowBox(int w, int h, char b);

        std::string asString() const override;

    protected:

        char border;

};
