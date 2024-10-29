#include <globals.h>

#include <LED/led.h>
#include <Buttons/buttons.h>
#include <print_scan.h>

void branch_main() {
	// space for initializations


	// infinite loop
	while (1) {

		// definitions
		uint64_t time = 5000;
		int pin = 1;

		// set pin
		_gpio_high(GPIOA, pin);

		// delay
		delay_ms(time);

		// reset pin a
		_gpio_high(GPIOA, pin);

		// delay
		delay_ms(time);

		// hi

	}

	// NOTE
	// Always keep the system in the infinite while loop. Never break out of it
	// There is no place for the computer to go once you break out of this loop
}
