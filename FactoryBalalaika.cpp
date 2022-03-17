#include "FactoryBalalaika.h"

MusicalInstrument* FactoryBalalaika::create_instrument()
{
    return new Balalaika();
}
