#include "FactoryViolin.h"

MusicalInstrument* FactoryViolin::create_instrument()
{
    return new Violin();
}
