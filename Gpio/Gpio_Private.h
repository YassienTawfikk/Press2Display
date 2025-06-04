//
// Created by Malak on 4/19/2025.
//

#ifndef GPIO_PRIVATE_H
#define GPIO_PRIVATE_H

#include "Utils.h"

/*
 * Addresses definitions:
 * GPIOx_MODER : GPIO port mode register
 * GPIOx_OTYPER : GPIO port output type register
 * GPIOx_OSPEEDR : GPIO port output speed register
 * GPIOx_PUPDR : GPIO port pull-up/pull-down register
 * GPIOx_IDR : GPIO port input data register
 * GPIOx_ODR : GPIO port output data register
 * GPIOx_BSRR : GPIO port bit set/reset register
 * GPIOx_LCKR : GPIO port configuration lock register
 * GPIOx_AFRL : GPIO alternate function low register
 * GPIOx_AFRH : GPIO alternate function high register
 */

/* GPIOA addresses */
#define GPIOA_BASE_ADDR    0x40020000
#define GPIOA_MODER        REG32(GPIOA_BASE_ADDR + 0x00)
#define GPIOA_OTYPER       REG32(GPIOA_BASE_ADDR + 0x04)
#define GPIOA_OSPEEDR      REG32(GPIOA_BASE_ADDR + 0x08)
#define GPIOA_PUPDR        REG32(GPIOA_BASE_ADDR + 0x0C)
#define GPIOA_IDR          REG32(GPIOA_BASE_ADDR + 0x10)
#define GPIOA_ODR          REG32(GPIOA_BASE_ADDR + 0x14)
#define GPIOA_BSRR         REG32(GPIOA_BASE_ADDR + 0x18)
#define GPIOA_LCKR         REG32(GPIOA_BASE_ADDR + 0x1C)
#define GPIOA_AFRL         REG32(GPIOA_BASE_ADDR + 0x20)
#define GPIOA_AFRH         REG32(GPIOA_BASE_ADDR + 0x24)


/* GPIOB addresses */
#define GPIOB_BASE_ADDR    0x40020400
#define GPIOB_MODER        REG32(GPIOB_BASE_ADDR + 0x00)
#define GPIOB_OTYPER       REG32(GPIOB_BASE_ADDR + 0x04)
#define GPIOB_OSPEEDR      REG32(GPIOB_BASE_ADDR + 0x08)
#define GPIOB_PUPDR        REG32(GPIOB_BASE_ADDR + 0x0C)
#define GPIOB_IDR          REG32(GPIOB_BASE_ADDR + 0x10)
#define GPIOB_ODR          REG32(GPIOB_BASE_ADDR + 0x14)
#define GPIOB_BSRR         REG32(GPIOB_BASE_ADDR + 0x18)
#define GPIOB_LCKR         REG32(GPIOB_BASE_ADDR + 0x1C)
#define GPIOB_AFRL         REG32(GPIOB_BASE_ADDR + 0x20)
#define GPIOB_AFRH         REG32(GPIOB_BASE_ADDR + 0x24)

/* GPIOC addresses */
#define GPIOC_BASE_ADDR    0x40020800
#define GPIOC_MODER        REG32(GPIOC_BASE_ADDR + 0x00)
#define GPIOC_OTYPER       REG32(GPIOC_BASE_ADDR + 0x04)
#define GPIOC_OSPEEDR      REG32(GPIOC_BASE_ADDR + 0x08)
#define GPIOC_PUPDR        REG32(GPIOC_BASE_ADDR + 0x0C)
#define GPIOC_IDR          REG32(GPIOC_BASE_ADDR + 0x10)
#define GPIOC_ODR          REG32(GPIOC_BASE_ADDR + 0x14)
#define GPIOC_BSRR         REG32(GPIOC_BASE_ADDR + 0x18)
#define GPIOC_LCKR         REG32(GPIOC_BASE_ADDR + 0x1C)
#define GPIOC_AFRL         REG32(GPIOC_BASE_ADDR + 0x20)
#define GPIOC_AFRH         REG32(GPIOC_BASE_ADDR + 0x24)

/* GPIOD addresses */
#define GPIOD_BASE_ADDR    0x40020C00
#define GPIOD_MODER        REG32(GPIOD_BASE_ADDR + 0x00)
#define GPIOD_OTYPER       REG32(GPIOD_BASE_ADDR + 0x04)
#define GPIOD_OSPEEDR      REG32(GPIOD_BASE_ADDR + 0x08)
#define GPIOD_PUPDR        REG32(GPIOD_BASE_ADDR + 0x0C)
#define GPIOD_IDR          REG32(GPIOD_BASE_ADDR + 0x10)
#define GPIOD_ODR          REG32(GPIOD_BASE_ADDR + 0x14)
#define GPIOD_BSRR         REG32(GPIOD_BASE_ADDR + 0x18)
#define GPIOD_LCKR         REG32(GPIOD_BASE_ADDR + 0x1C)
#define GPIOD_AFRL         REG32(GPIOD_BASE_ADDR + 0x20)
#define GPIOD_AFRH         REG32(GPIOD_BASE_ADDR + 0x24)

/* GPIOE addresses */
#define GPIOE_BASE_ADDR    0x40021000
#define GPIOE_MODER        REG32(GPIOE_BASE_ADDR + 0x00)
#define GPIOE_OTYPER       REG32(GPIOE_BASE_ADDR + 0x04)
#define GPIOE_OSPEEDR      REG32(GPIOE_BASE_ADDR + 0x08)
#define GPIOE_PUPDR        REG32(GPIOE_BASE_ADDR + 0x0C)
#define GPIOE_IDR          REG32(GPIOE_BASE_ADDR + 0x10)
#define GPIOE_ODR          REG32(GPIOE_BASE_ADDR + 0x14)
#define GPIOE_BSRR         REG32(GPIOE_BASE_ADDR + 0x18)
#define GPIOE_LCKR         REG32(GPIOE_BASE_ADDR + 0x1C)
#define GPIOE_AFRL         REG32(GPIOE_BASE_ADDR + 0x20)
#define GPIOE_AFRH         REG32(GPIOE_BASE_ADDR + 0x24)

/* GPIOH addresses */
#define GPIOH_BASE_ADDR    0x40021C00
#define GPIOH_MODER        REG32(GPIOH_BASE_ADDR + 0x00)
#define GPIOH_OTYPER       REG32(GPIOH_BASE_ADDR + 0x04)
#define GPIOH_OSPEEDR      REG32(GPIOH_BASE_ADDR + 0x08)
#define GPIOH_PUPDR        REG32(GPIOH_BASE_ADDR + 0x0C)
#define GPIOH_IDR          REG32(GPIOH_BASE_ADDR + 0x10)
#define GPIOH_ODR          REG32(GPIOH_BASE_ADDR + 0x14)
#define GPIOH_BSRR         REG32(GPIOH_BASE_ADDR + 0x18)
#define GPIOH_LCKR         REG32(GPIOH_BASE_ADDR + 0x1C)
#define GPIOH_AFRL         REG32(GPIOH_BASE_ADDR + 0x20)
#define GPIOH_AFRH         REG32(GPIOH_BASE_ADDR + 0x24)

#endif //GPIO_PRIVATE_H
