//checkpoint 1

#include <stdio.h>
#include <freertos/FreeRTOS.h>
#include <freertos/task.h>
#include <driver/gpio.h>

#define LED_PIN 35 //TO_BE_FILLED_IN

void app_main() {
  // Configure the LED pin
  gpio_config_t io_conf = {
    .pin_bit_mask = (1ULL << LED_PIN),
    .mode = GPIO_MODE_OUTPUT /*TO_BE_FILLED_IN*/, 
  };

  gpio_config(&io_conf);

  while (1) {
    gpio_set_level(LED_PIN, 1 /*TO_BE_FILLED_IN*/);
    vTaskDelay(100 /*TO_BE_FILLED_IN*/);
    gpio_set_level(LED_PIN, 0 /*TO_BE_FILLED_IN*/);
    vTaskDelay(100 /*TO_BE_FILLED_IN*/);
  }
}

