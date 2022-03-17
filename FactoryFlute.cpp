#include "FactoryFlute.h"

MusicalInstrument* FactoryFlute::create_instrument()
{
    return new Flute();
}
