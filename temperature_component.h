#ifndef TEMPERATURE_COMPONENT_HEADER
#define TEMPERATURE_COMPONENT_HEADER
#include "core.h"
char* comp_abv = "tem";
CoreQueue TemperatureIncomingQueue;
CoreQueue TemperatureOutgoingQueue;
CoreComp TemperatureComponent = {comp_abv, TemperatureIncomingQueue, TemperatureOutgoingQueue};
CoreComp initTemperatureConstant(char*, CoreQueue, CoreQueue);
#endif

