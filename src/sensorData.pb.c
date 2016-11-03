/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-0.3.6 at Thu Oct 27 16:05:33 2016. */

#include "sensorData.pb.h"

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif



const pb_field_t api_SensorData_fields[7] = {
    PB_FIELD(  1, BOOL    , OPTIONAL, STATIC  , FIRST, api_SensorData, motion, motion, 0),
    PB_FIELD(  2, UINT32  , OPTIONAL, STATIC  , OTHER, api_SensorData, water, motion, 0),
    PB_FIELD(  3, FLOAT   , OPTIONAL, STATIC  , OTHER, api_SensorData, temperature_celcius, water, 0),
    PB_FIELD(  4, FLOAT   , OPTIONAL, STATIC  , OTHER, api_SensorData, temperature_fahrenheit, temperature_celcius, 0),
    PB_FIELD(  5, FLOAT   , OPTIONAL, STATIC  , OTHER, api_SensorData, humidity, temperature_fahrenheit, 0),
    PB_FIELD(110, UINT32  , REPEATED, CALLBACK, OTHER, api_SensorData, analog_readings, humidity, 0),
    PB_LAST_FIELD
};


/* @@protoc_insertion_point(eof) */
