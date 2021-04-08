/**
 * @file openLSTDriver.h
 *
 * @brief Public interface for the openLST driver.
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

void openLSTDriver_init(void);
void openLSTDriver_uninit(void);
void openLSTDriver_setCallsign(uint8_t length, uint8_t* callsign);
uint8_t openLSTDriver_getRxBuffer(uint8_t rxBuffer[OPENLST_BUFFER_SIZE_BYTES]);
void openLSTDriver__sendPacket(uint8_t length, uint8_t* packet);
