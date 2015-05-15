/**
 * @file Progress.cc
 * Implementation of the Progress class.
 * @see Progress.h
 */

#include "Progress.h"
#include "Exception.h"
using namespace ugp3::log;

const Progress Progress::START(0);
const Progress Progress::END(1);

Progress::Progress(double value)
    : progress(value)
{
     if(this->progress < 0 || this->progress > 1)
    {
        throw Exception("The progress parameter should be in [0, 1].", LOCATION);
    }
}
