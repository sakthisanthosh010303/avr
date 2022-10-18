/*
 * Author: Sakthi Santhosh
 * Created on: 25/07/2022
 *
 * LED Blink
 */
#ifndef F_CPU
#define F_CPU 8000000UL // Required by <util/delay.h>.
#endif

#include <avr/io.h>
#include <util/delay.h>

int main() {
  DDRB |= (1 << PB5); // Set pin PB5 as output.

  while (1) {
    PORTB ^= (1 << PB5); // Toggle pin PB5.
    _delay_ms(1000);
  }
  return 0;
}
