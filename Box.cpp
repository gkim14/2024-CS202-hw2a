#include "Box.h"

Box::Box (int w, int h)
    : width{w}, height{h}
{

}

int Box::getWidth() const
{
    return this->width;
}

int Box::getHeight() const
{
    return this->height;
}
