#include <avr/io.h>
#define LED_PORT PORTB
#define LED_BIT 5
#define LED_DDR DDRB
Void set_led(volatile uint8_t *port, uint8_t bit);
Void clear_led(volatile uint8_t *port, uint8_t bit);
Void toggle_led(volatile uint8_t *port, uint8_t bit);
Int main() {
 Volatile uint8_t *port = &LED_PORT;
 Volatile uint8_t *ddr = &LED_DDR;
 Uint8_t bit = LED_BIT;
 // Set the LED pin as output
 *ddr |= (1 << bit);
 While (1) {
 Set_led(port, bit);
 For (volatile uint32_t I = 0; I < 1000000; i++);
 Clear_led(port, bit);
 For (volatile uint32_t I = 0; I < 1000000; i++);
 }
 Return 0;
}
Void set_led(volatile uint8_t *port, uint8_t bit) {
 *port |= (1 << bit);
}
Void clear_led(volatile uint8_t *port, uint8_t bit) {
 *port &= ~(1 << bit);
}
Void toggle_led(volatile uint8_t *port, uint8_t bit) {
 *port ^= (1 << bit);
}