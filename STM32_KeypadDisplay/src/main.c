#include "Rcc.h"
#include "GPIO.h"
#include "Keypad.h"
#include "SevenSegment.h"

uint8 value;

int main() {
    /* Initializing drivers */
    Rcc_Init();
    Keypad_Init();
    SevenSegment_Init();

    while(1) {
        //  Function called periodically from the infinite loop in main function
        Keypad_Manage();
    }
    return 0;
}

// Function that acts as Callback function called when a key is pressed
void KeypadCallout_KeyPressNotification(void) {
    value = Keypad_GetKey();
    SevenSegment_Display(value);
}




