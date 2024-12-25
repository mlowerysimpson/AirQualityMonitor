#include "AirQuality.h"
#include <math.h>
#include "sgp40.h"

static int aq_initialized = 0; // flag gets set to 1 after the air quality sensor has been initialized
static sgp40_t aqDev;

/// @brief Initialize the device descriptor
/// @return 0 if initialized successfully, otherwise returns a negative error code.
static int InitializeSensor()
{
    // initialize device descriptor
    if ( sgp40_init_desc(&aqDev, 0, 8, 9) != ESP_OK )
    {
        printf("Failed to init device descriptor.\n");
        return -1;
    }
    // initialize sensor
    if ( sgp40_init(&aqDev) != ESP_OK )
    {
        printf("Failed to init sensor.\n");
        return -2;
    }
    aq_initialized = 1;
    return 0;
}


/// @brief Does air quality measurement and gets air quality VOC index (0-500)
/// @return If successful, returns the air quality VOC index (0-500). If unsuccessful, 
/// returns a negative error code.
int32_t GetAirQuality()
{
    int32_t retVal = 0;
    if ( aq_initialized == 0 )
    {
        retVal = InitializeSensor();
        if ( retVal < 0 )
        {
            // an error occurred, return the negative value from the InitializeSensor function
            return retVal;
        }
    }
    // take air quality measurement
    if (sgp40_measure_voc(&aqDev, NAN, NAN, &retVal) != ESP_OK)
    {
        return -3;
    }
    return retVal;
}