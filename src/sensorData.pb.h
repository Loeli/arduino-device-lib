/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.6 at Thu Oct 27 16:05:33 2016. */

#ifndef PB_SENSORDATA_PB_H_INCLUDED
#define PB_SENSORDATA_PB_H_INCLUDED
#include <pb.h>

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Struct definitions */
typedef struct _api_SensorData {
    bool has_motion;
    bool motion;
    bool has_water;
    uint32_t water;
    bool has_temperature_celcius;
    float temperature_celcius;
    bool has_temperature_fahrenheit;
    float temperature_fahrenheit;
    bool has_humidity;
    float humidity;
    pb_callback_t analog_readings;
/* @@protoc_insertion_point(struct:api_SensorData) */
} api_SensorData;

/* Default values for struct fields */

/* Initializer values for message structs */
#define api_SensorData_init_default              {false, 0, false, 0, false, 0, false, 0, false, 0, {{NULL}, NULL}}
#define api_SensorData_init_zero                 {false, 0, false, 0, false, 0, false, 0, false, 0, {{NULL}, NULL}}

/* Field tags (for use in manual encoding/decoding) */
#define api_SensorData_motion_tag                1
#define api_SensorData_water_tag                 2
#define api_SensorData_temperature_celcius_tag   3
#define api_SensorData_temperature_fahrenheit_tag 4
#define api_SensorData_humidity_tag              5
#define api_SensorData_analog_readings_tag       110

/* Struct field encoding specification for nanopb */
extern const pb_field_t api_SensorData_fields[7];

/* Maximum encoded size of messages (where known) */
/* api_SensorData_size depends on runtime parameters */

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define SENSORDATA_MESSAGES \


#endif

#ifdef __cplusplus
} /* extern "C" */
#endif
/* @@protoc_insertion_point(eof)  */

#endif
