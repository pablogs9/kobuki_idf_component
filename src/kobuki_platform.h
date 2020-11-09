#include "freertos/FreeRTOS.h"

#define KOBUKI_UART_PORT CONFIG_KOBUKI_UART_PORT
#define KOBUKI_UART_TXD  CONFIG_KOBUKI_UART_TXD
#define KOBUKI_UART_RXD  CONFIG_KOBUKI_UART_RXD

#define KOBUKI_UART_BUFFER_SIZE CONFIG_KOBUKI_UART_BUFFER_SIZE
#define KOBUKI_UART_READ_WAIT_MS CONFIG_KOBUKI_UART_READ_WAIT_MS
#define KOBUKI_RATE_MS CONFIG_KOBUKI_RATE_MS
#define KOBUKI_PROCESSING_BUFFER CONFIG_KOBUKI_PROCESSING_BUFFER