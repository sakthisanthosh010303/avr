/*
 * Author: Sakthi Santhosh
 * Created on: 26/07/2022
 *
 * Button
 */
#ifndef F_CPU
#define F_CPU 8000000UL // Required by <util/delay.h>.
#endif

#include <avr/io.h>
#include <util/delay.h>

int main() {
  DDRB |= (1 << PB5);

  while (1) {
    if (PINB & (1 << PB7) == B10000000) {
      PORTB |= (1 << PB5);
      _delay_ms(1000);
      PORTB &= ~(1 << PB5);
    }
  }
  return 0;
}
