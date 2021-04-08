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
 * PUBLIC CONSTANTS *
 *************************************************************************************************/

#define OPENLST_BUFFER_SIZE_BYTES 100U

/*************************************************************************************************
 * PUBLIC FUNCTIONS *
 *************************************************************************************************/

/**
 * @brief Constructs the OpenLST class.
 */
OpenLST::OpenLST(void)
{

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
 * @param[in] length *****
 * @param[in] callsign *****
 */
void OpenLST::setCallsign(uint8_t length, uint8_t* callsign)
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
