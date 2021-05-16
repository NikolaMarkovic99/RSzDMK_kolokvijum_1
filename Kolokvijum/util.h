/**
 * @file util.h
 * @brief Biblioteka koja deklarise funkcije koje sortiraju i proveravaju geometrijski niz
 * @author Nikola Markovic
 * @date 16-05-2021
 * @version 1.0
 */

#include <avr/io.h>
#include <avr/interrupt.h>
#include <stdint.h>

#ifndef UTIL_H_
#define UTIL_H_

///Makro za rastuci redosled
#define UP 1
///Makro za opadajuci redosled
#define DOWN 0

///Makro za geometrijski niz
#define TRUE 1
///Makro za niz koji nije geometrijski


/**
 * Sort - Funkcija koja sortira niz
 * @param array - ulaz tipa int8_t - niz koji treba provjerava
 * @param array_length - duzina niza koji se provjerava
 * @param mode - UP za rastuci DOWN za opadajuci redosled
 * @return Nema povratnu vrednost
 */
void Sort(int16_t *array, int16_t array_length, int8_t mode);


/**
 * Check - Funkcija koja provjerava da li je niz aritmeticki
 * @param array - ulaz tipa int8_t - niz koji se provjerava
 * @return 1 ako jeste, 0 ako nije
 */
int8_t Check(int16_t *array);

#endif /* UTIL_H_ */
