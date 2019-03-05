/*
 * uwp_uart.c
 *
 *  Created on: 2019��2��27��
 *      Author: xiangkai.gao
 */

#include "uwp_uart.h"
#include "FreeRTOSConfig.h"

extern serial_t stdio_uart;

void vStdioUARTOutput(char *DataToOutput){
    short sDataLength = 0;
    while( (DataToOutput[sDataLength] != '\0') && (sDataLength <= configLOGGING_MAX_MESSAGE_LENGTH) )
        serial_putc(&stdio_uart, DataToOutput[sDataLength++]);
}
