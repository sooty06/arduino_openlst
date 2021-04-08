/**
 * @file openLSTDriver.c
 *
 * @brief *****
 */

/*************************************************************************************************
 * INCLUDES *
 *************************************************************************************************/

#include <stdint.h>

/*************************************************************************************************
 * PUBLIC CONSTANTS *
 *************************************************************************************************/

#define OPENLST_BUFFER_SIZE_BYTES 100U

/*************************************************************************************************
 * PUBLIC FUNCTIONS *
 *************************************************************************************************/

/**
 * @brief Initialises the openLST driver.
 */
void openLSTDriver_init(void)
{

}

/**
 * @brief Uninitialises the openLST driver.
 */
void openLSTDriver_uninit(void)
{

}

/**
 * @brief *****
 *
 * @param[in] length *****
 * @param[in] callsign *****
 */
void openLSTDriver_setCallsign(uint8_t length, uint8_t* callsign)
{

}

/**
 * @brief *****
 *
 * @param[out] rxBuffer *****
 *
 * @return *****
 */
uint8_t openLSTDriver_getRxBuffer(uint8_t rxBuffer[OPENLST_BUFFER_SIZE_BYTES])
{

}

/**
 * @brief *****
 *
 * @param[in] length *****
 * @param[in] packet *****
 */
void openLSTDriver__sendPacket(uint8_t length, uint8_t* packet)
{

}
