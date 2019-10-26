/******************************************************************************
 *
 * @brief     This file is for the esp wroom-02d wifi module
 ****************
 *
 * @section Copyright
 *
 * Copyright (C) 2019 Travis Haycock A/S travishaycock92@gmail.com
 *
 * All rights reserved.

 *****************************************************************************/
#ifndef ESPWIFI_HPP
#define ESPWIFI_HPP

#include <string.h>
#include <string.h>
#include "stm32f7xx_hal.h"

class ESPController
{
public:
int wifiStatus;
char ssid;
char password;
char wifi_networks;
char ip_address;
char mac_address;
UART_HandleTypeDef huart1;
char connectionType;

public:
char connect_wifi();
int disconnect_wifi();
char list_wifi_networks_in_range();
char send_post_request(char url, char params);
char send_get_request(char url, char params);
char send_put_request(char url, char params);
char send_delete_request(char url, char params);
};

#endif // ESPWIFI_HPP
