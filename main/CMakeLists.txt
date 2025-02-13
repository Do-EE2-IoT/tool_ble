idf_component_register(SRCS "example_ble_sec_gattc_demo.c" 
                    INCLUDE_DIRS "." 
                    REQUIRES UART_lib_2 nvs_flash bt utils)
