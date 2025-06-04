//
// Created by Malak on 4/19/2025.
//
#include "Gpio.h"
#include "Gpio_Private.h"

void Gpio_Init(uint8 portName, uint8 pinNumber, uint8 pinMode, uint8 defaultState)
{
    switch (portName)
    {
        case GPIO_A:
            GPIOA_MODER &= ~(0X03 << (pinNumber * 2));
            GPIOA_MODER |= (pinMode << (pinNumber * 2));

            if (pinMode == GPIO_INPUT)
            {
                GPIOA_PUPDR &= ~(0X03 << (pinNumber * 2));
                GPIOA_PUPDR |= (defaultState << (pinNumber * 2));
            }
            else
            {
                GPIOA_OTYPER &= ~(0X01 << pinNumber);
                GPIOA_OTYPER |= (defaultState << pinNumber);
            }
            break;
        case GPIO_B:
            GPIOB_MODER &= ~(0X03 << (pinNumber * 2));
            GPIOB_MODER |= (pinMode << (pinNumber * 2));

            if (pinMode == GPIO_INPUT)
            {
                GPIOB_PUPDR &= ~(0X03 << (pinNumber * 2));
                GPIOB_PUPDR |= (defaultState << (pinNumber * 2));
            }
            else
            {
                GPIOB_OTYPER &= ~(0X01 << pinNumber);
                GPIOB_OTYPER |= (defaultState << pinNumber);
            }
            break;
        case GPIO_C:
            GPIOC_MODER &= ~(0X03 << (pinNumber * 2));
            GPIOC_MODER |= (pinMode << (pinNumber * 2));

            if (pinMode == GPIO_INPUT)
            {
                GPIOC_PUPDR &= ~(0X03 << (pinNumber * 2));
                GPIOC_PUPDR |= (defaultState << (pinNumber * 2));
            }
            else
            {
                GPIOC_OTYPER &= ~(0X01 << pinNumber);
                GPIOC_OTYPER |= (defaultState << pinNumber);
            }
            break;
        case GPIO_D:
            GPIOD_MODER &= ~(0X03 << (pinNumber * 2));
            GPIOD_MODER |= (pinMode << (pinNumber * 2));

            if (pinMode == GPIO_INPUT)
            {
                GPIOD_PUPDR &= ~(0X03 << (pinNumber * 2));
                GPIOD_PUPDR |= (defaultState << (pinNumber * 2));
            }
            else
            {
                GPIOD_OTYPER &= ~(0X01 << pinNumber);
                GPIOD_OTYPER |= (defaultState << pinNumber);
            }
            break;
        case GPIO_E:
            GPIOE_MODER &= ~(0X03 << (pinNumber * 2));
            GPIOE_MODER |= (pinMode << (pinNumber * 2));

            if (pinMode == GPIO_INPUT)
            {
                GPIOE_PUPDR &= ~(0X03 << (pinNumber * 2));
                GPIOE_PUPDR |= (defaultState << (pinNumber * 2));
            }
            else
            {
                GPIOE_OTYPER &= ~(0X01 << pinNumber);
                GPIOE_OTYPER |= (defaultState << pinNumber);
            }
            break;
        default:
            break;
    }
}
uint8 Gpio_WritePin(uint8 portName, uint8 pinNumber, uint8 data)
{
    switch (portName)
    {
        case GPIO_A:
            if (((GPIOA_MODER >> (pinNumber * 2)) & 0x03) != GPIO_OUTPUT)
                return NOK;
            if (data) {
                GPIOA_ODR |= (0x01 << pinNumber);
            }
            else {
                GPIOA_ODR &= ~(0X01 << pinNumber);
            }
            break;
        case GPIO_B:
            if (((GPIOB_MODER >> (pinNumber * 2)) & 0x03) != GPIO_OUTPUT)
                return NOK;
            if (data) {
                GPIOB_ODR |= (0x01 << pinNumber);
            }
            else {
                GPIOB_ODR &= ~(0X01 << pinNumber);
            }
            break;
        case GPIO_C:
            if (((GPIOC_MODER >> (pinNumber * 2)) & 0x03) != GPIO_OUTPUT)
                return NOK;
            if (data) {
                GPIOC_ODR |= (0x01 << pinNumber);
            }
            else {
                GPIOC_ODR &= ~(0X01 << pinNumber);
            }
            break;
        case GPIO_D:
            if (((GPIOD_MODER >> (pinNumber * 2)) & 0x03) != GPIO_OUTPUT)
                return NOK;
            if (data) {
                GPIOD_ODR |= (0x01 << pinNumber);
            }
            else {
                GPIOD_ODR &= ~(0X01 << pinNumber);
            }
            break;
        case GPIO_E:
            if (((GPIOE_MODER >> (pinNumber * 2)) & 0x03) != GPIO_OUTPUT)
                return NOK;
            if (data) {
                GPIOE_ODR |= (0x01 << pinNumber);
            }
            else {
                GPIOE_ODR &= ~(0X01 << pinNumber);
            }
            break;
        default:
            break;
    }
return OK;
}
uint8 Gpio_ReadPin(uint8 portName, uint8 pinNumber)
{
    uint8 pinValue;
    switch (portName)
    {
        case GPIO_A:
            pinValue = (GPIOA_IDR & (0x01 << pinNumber)) ? HIGH : LOW;
        break;
        case GPIO_B:
            pinValue = (GPIOB_IDR & (0x01 << pinNumber)) ? HIGH : LOW;
        break;
        case GPIO_C:
            pinValue = (GPIOC_IDR & (0x01 << pinNumber)) ? HIGH : LOW;
        break;
        case GPIO_D:
            pinValue = (GPIOD_IDR & (0x01 << pinNumber)) ? HIGH : LOW;
        break;
        case GPIO_E:
            pinValue = (GPIOE_IDR & (0x01 << pinNumber)) ? HIGH : LOW;
        break;
        default:
            pinValue = LOW;
        break;
    }
    return pinValue;
}