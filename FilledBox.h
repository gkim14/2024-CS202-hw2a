#pragma once
#include "HollowBox.h"
#include <string>

class FilledBox: public HollowBox
{
        public: 

                FilledBox(int w, int h, char f);

                std::string asString() const override;

};
