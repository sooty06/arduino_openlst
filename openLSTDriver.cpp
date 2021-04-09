/**
 * @file openLSTDriver.cpp
 *
 * @brief *****
 */

/*************************************************************************************************
 * INCLUDES *
 *************************************************************************************************/

#include <stdint.h>
#include <malloc.h>
#include <string.h>

#include <Arduino.h>

#include "openLSTDriver.h"

/*************************************************************************************************
 * PRIVATE CONSTANTS *
 *************************************************************************************************/

static const char SET_CALLSIGN_COMMAND[] = "SET_CALLSIGN ";
static const char SEND_ASCII_COMMAND[] = "ASCII ";

/*************************************************************************************************
 * PUBLIC FUNCTIONS *
 *************************************************************************************************/

/**
 * @brief Constructs the OpenLST class.
 *
 * @param[in] hwID Hardware ID to expect from the connected openLST.
 * @param[in] callsignLength Length of the callsign to use in radio transmissions.
 * @param[in] callsign Callsign to use in radio transmissions.
 */
OpenLST::OpenLST(uint16_t hwID, uint8_t callsignLength, char* callsign)
{
    char tempCallsign[callsignLength];
    char completedCommand[sizeof(SET_CALLSIGN_COMMAND) - 1U + callsignLength] = "";
    memcpy((void*)tempCallsign, (void*)callsign, callsignLength);

    /* allocate the memory for the callsign and copy it to the class variable */
    radioCallsign = malloc(callsignLength);
    memcpy((void*)radioCallsign, (void*)callsign, callsignLength);
    radioCallsignLength = callsignLength;

    /* store the hardware ID */
    hardwareID = hwID;

    /* set the callsign */
    strcat(completedCommand, SET_CALLSIGN_COMMAND);
    strcat(completedCommand, tempCallsign);
    Serial1.write(completedCommand, sizeof(completedCommand));

    /* open the serial port */
    Serial1.begin(115200);
}

/**
 * @brief Destructs the OpenLST class.
 */
OpenLST::~OpenLST(void)
{
    Serial1.end();
}

/**
 * @brief Gets the received bytes.
 *
 * @param[out] rxBuffer Buffer to store received bytes in.
 *
 * @return The number of bytes received.
 */
uint8_t OpenLST::getRxBuffer(uint8_t rxBuffer[OPENLST_BUFFER_SIZE_BYTES])
{
    int val = 0;
    uint8_t size = 0U;

    /* keep reading the receive buffer until we have emptied it or run out of space */
    while ((-1 != val) && (size < OPENLST_BUFFER_SIZE_BYTES))
    {
        /* read the next byte in the receive buffer */
        val = Serial1.read();

        /* add the byte the returned buffer */
        rxBuffer[size++] = (uint8_t)val;
    }

    /* return the number of received bytes */
    return (size - 1U);
}

/**
 * @brief Sends a packet over the radio.
 *
 * @param[in] length Length of the packet to send.
 * @param[in] packet Packet to send.
 */
void OpenLST::sendPacket(uint8_t length, uint8_t* packet)
{
    char tempPacket[length];
    char completedCommand[sizeof(SEND_ASCII_COMMAND) - 1U + length] = "";
    memcpy((void*)tempPacket, (void*)packet, length);

    /* send the packet */
    strcat(completedCommand, SEND_ASCII_COMMAND);
    strcat(completedCommand, tempPacket);
    Serial1.write(completedCommand, sizeof(completedCommand));
}
