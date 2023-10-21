/*
Los pines utilizados son:

SDA PB_9
SCL PB_8

la clase 
I2C i2cPcf8574( I2C1_SDA, I2C1_SCL ); 
la funcion void displayInit( displayConnection_t connection )

la funcion displayPinWrite( uint8_t pinName, int value )
en la funcion static void displayDataBusWrite( uint8_t dataBus )

No se utilizan LOCK ni UNLOCK

*/

//=====[Libraries]=============================================================

#include "smart_home_system.h"

//=====[Main function, the program entry point after power on or reset]========

int main()
{
    smartHomeSystemInit();
    while (true) {
        smartHomeSystemUpdate();
    }
}