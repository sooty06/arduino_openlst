/**
 * @file openLSTDriver.cpp
 *
 * @brief *****
 */

/*************************************************************************************************
 * INCLUDES *
 *************************************************************************************************/

#include <stdint.h>

#include <Arduino.h>

#include "openLSTDriver.h"

/*************************************************************************************************
 * PUBLIC FUNCTIONS *
 *************************************************************************************************/

/**
 * @brief Constructs the OpenLST class.
 *
 * @param[in] hwID *****
 * @param[in] length *****
 * @param[in] callsign *****
 */
OpenLST::OpenLST(uint16_t hwID, uint8_t callsignLength, uint8_t* callsign)
{
    /* open the serial port */
    Serial1.begin(115200);

    /* store the hardware ID */
    /* ***** */

    /* set the callsign */
    /* ***** */
}

/**
 * @brief Destructs the OpenLST class.
 */
OpenLST::~OpenLST(void)
{

}

/**
 * @brief *****
 *
 * @param[out] rxBuffer *****
 *
 * @return *****
 */
uint8_t OpenLST::getRxBuffer(uint8_t rxBuffer[OPENLST_BUFFER_SIZE_BYTES])
{

}

/**
 * @brief *****
 *
 * @param[in] length *****
 * @param[in] packet *****
 */
void OpenLST::sendPacket(uint8_t length, uint8_t* packet)
{

}
