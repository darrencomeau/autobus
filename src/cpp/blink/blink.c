/*
    Make LED blink
*/

#include "pico/stdlib.h"

int main() {

    const uint LED = PICO_DEFAULT_LED_PIN;

    gpio_init(LED);
    gpio_set_dir(LED, GPIO_OUT);

    while (true)
    {
        gpio_put(LED, true);
        sleep_ms(25);
        gpio_put(LED, false);
        sleep_ms(1750);
    }

}