#include "gpio_.h"

void _gpio_low(GPIO_TypeDef *port, int pin) {
	
}

void _gpio_high(GPIO_TypeDef *port, int pin) {

}

void _gpio_set(GPIO_TypeDef *port, int pin, GPIO_VALUE value) {
  
}

void _gpio_configureMode(GPIO_TypeDef *port, int pin, GPIO_MODE mode, GPIO_OPEN_DRAIN_MODE open_drain, GPIO_SPEED speed, GPIO_PULL pull) {
    /*
	 * This will require setting a few registers
	 * See if you can identify which registers, and why.
	 * The process is the same though, bitwise operations on the registers
	 */


}
