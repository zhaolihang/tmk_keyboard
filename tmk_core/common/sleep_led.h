#ifndef SLEEP_LED_H
#define SLEEP_LED_H

#ifdef __cplusplus
extern "C" {
#endif

void sleep_led_init(void);
void sleep_led_enable(void);
void sleep_led_disable(void);
void sleep_led_on(void);
void sleep_led_off(void);

#ifdef __cplusplus
}
#endif


#endif
