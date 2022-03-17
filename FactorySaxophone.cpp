#include "FactorySaxophone.h"

MusicalInstrument* FactorySaxophone::create_instrument()
{
    return new Saxophone();
}
