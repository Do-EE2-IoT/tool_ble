
set(pre_req driver)

idf_component_register(
    SRCS "uart_lib.c"
    INCLUDE_DIRS "."
    REQUIRES ${pre_req})
