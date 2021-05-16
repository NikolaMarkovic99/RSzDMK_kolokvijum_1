/**
 * @file main.c
 * @brief Glavni fajl
 * @author Nikola Markovic
 * @date 16-05-2021
 * @version 1.0
 */

#include <stdint.h>
#include <stdlib.h>
#include <util/delay.h>
#include <avr/pgmspace.h>
#include "usart.h"
#include "../pin/pin.h"
#include "../timer0/timer0.h"
#include "util.h"

int main()
{
	usartInit(9600);

	char ispis[60];
	int8_t prvi_clan;

	while(1)
	{
		usartPutString("Unesite prvi clan:");
		while(usartAvailable() == 0);

		usartGetString(prvi_clan);
	}

	return 0;
}
