#include "pico/stdlib.h"
include<stdio.h>

int main(){

    const unit led_pin = 25;

    gpio_init(led_pin);

    gpio_set_dir(led_pin,GPIO_OUT);


    while(true){

        gpio_put(led_pin,true);

        sleep_ms(1000);
        
        gpio_put(led_pin,false;

        sleep_ms(1000);


    }


}