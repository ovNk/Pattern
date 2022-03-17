#include "FactoryBassGuitar.h"

MusicalInstrument* FactoryBassGuitar::create_instrument()
{
    return new BassGuitar();
}
