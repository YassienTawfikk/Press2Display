#ifndef SEVENSEGMENT_PRIVATE_H
#define SEVENSEGMENT_PRIVATE_H

#include "Std_Types.h"
#include "Gpio.h"

// Structure defining GPIO connections for display segments
typedef struct {
    uint8 gpio_port;  // GPIO port identifier
    uint8 gpio_pin;   // Specific pin on the port
} SegmentConnection;

// Hardware connections for 7-segment display
    static const SegmentConnection segment_connections[7] = {
        {GPIO_A, 2},   // A segment control
        {GPIO_A, 11},  // B segment control
        {GPIO_B, 4},   // C segment control
        {GPIO_C, 6},   // D segment control
        {GPIO_C, 2},   // E segment control
        {GPIO_A, 12},  // F segment control
        {GPIO_A, 4}    // G segment control
};

// Digit to segment pattern mapping (common-anode)
static const uint8 digitToSegment[10][7] = {
    {1,1,1,1,1,1,0}, // 0
    {0,1,1,0,0,0,0}, // 1
    {1,1,0,1,1,0,1}, // 2
    {1,1,1,1,0,0,1}, // 3
    {0,1,1,0,0,1,1}, // 4
    {1,0,1,1,0,1,1}, // 5
    {1,0,1,1,1,1,1}, // 6
    {1,1,1,0,0,0,0}, // 7
    {1,1,1,1,1,1,1}, // 8
    {1,1,1,1,0,1,1}  // 9
};

#endif /* SEVENSEGMENT_PRIVATE_H */