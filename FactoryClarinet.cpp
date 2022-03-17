#include "FactoryClarinet.h"

MusicalInstrument* FactoryClarinet::create_instrument()
{
    return new Clarinet();
}
