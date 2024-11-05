#include <globals.h>

#include <LED/led.h>
#include <Buttons/buttons.h>
#include <print_scan.h>

void branch_main() {

	_gpio_configure_mode(GPIOE, 2, GPIO_MODE_OUTPUT, GPIO_PUSH_PULL, GPIO_MED_SPEED, GPIO_NO_PULL);

    while (1) {
        //toggle logic but for gpio pin GPIOE-2  (Heartbeat LED)

		uint64_t time = 5000;
		int pin = 2;

		// set pin
		_gpio_high(GPIOE, pin);

		// delay
		delay_ms(time);

		// reset pin a
		_gpio_high(GPIOE, pin);

		// delay
		delay_ms(time);
    }
}

// void branch_main() {
// 	// space for initializations


// 	// Blinky Code: Works!!!
// 	while (1) {

// 		// definitions
// 		uint64_t time = 5000;
// 		int pin = 1;

// 		// set pin
// 		_gpio_high(GPIOA, pin);

// 		// delay
// 		delay_ms(time);

// 		// reset pin a
// 		_gpio_high(GPIOA, pin);

// 		// delay
// 		delay_ms(time);

// 		// hi

// 	}

// 	// NOTE
// 	// Always keep the system in the infinite while loop. Never break out of it
// 	// There is no place for the computer to go once you break out of this loop
// }

