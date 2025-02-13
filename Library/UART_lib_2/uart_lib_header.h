#ifndef __UART_LIB_HEADER_H_
#define __UART_LIB_HEADER_H_

#include "driver/uart.h"

// Define a callback function type for handling received UART data
typedef void (*uart_callback_handle_t)(uint8_t *, uint16_t len);

// Initializes the UART configuration and starts the UART read task
void uart_init(void);

// // Transmits data via UART
// void uart_transmit(const char* data);

// // Registers a callback function to handle incoming UART data
// void uart_callback_register(void *cb);
void register_cb(void *cb);

#endif // __UART_LIB_HEADER_H_
