#include "ESPWifi.hpp"

#define SET_WIFI_NETWORK "AT+CWJAP=\"BELL\",\"xxxxxxx\"\r\n"
#define LIST_NETWORKS_IN_RANGE "AT+CWLAP\n\r"
#define FORGET_WIFI_NETWORK "AT+CWQAP\n\r"
#define POST_REQUEST ""
#define GET_REQUEST ""
#define PUT_REQUEST ""
#define DELETE_REQUEST ""


char ESPController:: connect_wifi(){
	uint8_t *espBufferResponse = NULL;
	if (HAL_UART_Transmit(&huart1, (uint8_t*)SET_WIFI_NETWORK, strlen(SET_WIFI_NETWORK), 8000) == HAL_OK) {
         // will connect to a given AP
		HAL_UART_Receive_DMA(&huart1, espBufferResponse, 300);

	} else {
		// will create an error function here to handle the error
		HAL_UART_Receive_DMA(&huart1, espBufferResponse, 300);

	}

return *espBufferResponse;
}

char ESPController::list_wifi_networks_in_range(){
	uint8_t *espBufferResponse = NULL;
	if (HAL_UART_Transmit(&huart1, (uint8_t*)LIST_NETWORKS_IN_RANGE, strlen(LIST_NETWORKS_IN_RANGE), 8000) == HAL_OK) {
         // will contain the list of wifi APs
		HAL_UART_Receive_DMA(&huart1, espBufferResponse, 300);

	} else {
		// will create an error function here to handle the error
		HAL_UART_Receive_DMA(&huart1, espBufferResponse, 300);
	}

return *espBufferResponse;
}


