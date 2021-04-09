/**
 * @file openLSTDriver.h
 *
 * @brief Public interface for the openLST driver.
 */

#ifndef OPENLST_DRIVER_H
#define OPENLST_DRIVER_H

/*************************************************************************************************
 * INCLUDES *
 *************************************************************************************************/

#include <stdint.h>

#include <Arduino.h>

/*************************************************************************************************
 * PUBLIC CONSTANTS *
 *************************************************************************************************/

#define OPENLST_BUFFER_SIZE_BYTES 100U

/*************************************************************************************************
 * CLASSES *
 *************************************************************************************************/

class OpenLST
{
    public:
        uint8_t getRxBuffer(uint8_t rxBuffer[OPENLST_BUFFER_SIZE_BYTES]);
        void sendPacket(uint8_t length, uint8_t* packet);
    private:
        uint16_t hardwareID;
        uint8_t radioCallsignLength;
        char* radioCallsign;
};

#endif /* OPENLST_DRIVER_H */
