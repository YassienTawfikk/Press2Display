## Press2Display

### Overview

**Press2Display** is a modular embedded system that interfaces a **4x3 matrix keypad** with a **2-digit 7-segment display** using the **STM32F401VE** microcontroller. It demonstrates key principles of driver abstraction, multiplexing, and efficient GPIO remapping in embedded C. Developed as part of an educational lab assignment, this project simulates the full interaction cycle between input capture and visual output.

> Designed for educational and practical embedded systems training, this project highlights modular hardware interfacing and low-level software design under timing and hardware constraints.

![Proteus Simulation](https://github.com/user-attachments/assets/194055fe-b6da-4612-b0b3-9ff41593cdd5)

*Proteus schematic showing STM32F401VE connected to keypad and 2-digit 7-segment display.*

---

### Key Features

- Flexible GPIO remapping using `PinConfig` abstraction
- Real-time 2-digit multiplexed display
- Lookup table-based digit rendering (no switch-case logic)
- Matrix keypad scanning and debounce handling
- Structured modular drivers for clean integration
- Fully compatible with Proteus and real STM32 hardware

---

### Demo Preview

https://github.com/user-attachments/assets/601500b2-6f1f-447f-81b9-8e272e501466

---

### ⚙️ System Behavior

**Keypad Scanning:**
- Scans one row at a time while reading all columns
- Maps (row × column) to a numeric key using lookup table
- Triggers a callback only on a **valid state change** (press → release)

**Display Output:**
- Uses a 7-segment **lookup table** to represent digits (0–9)
- Refreshes each digit rapidly to simulate simultaneous display
- Ensures flicker-free output via software multiplexing

**Performance Considerations:**
- Maintains real-time response even under continuous input
- Hardware-independent pin mapping enhances code reusability

---

### Architecture & Drivers

- `Gpio/` – General-purpose I/O abstraction layer
- `Keypad/` – Matrix keypad handling, scanning, and decoding
- `SevenSegment/` – 7-segment digit rendering using lookup tables
- `Rcc/` – System clock and peripheral control
- `src/` – Core logic and event loop integration
- `include/` – Global headers and configuration

---

### Project Structure

```plaintext
Simulation/
├── STM32_KeypadDisplay_04.pdsprj     # Proteus simulation

STM32_KeypadDisplay/
├── cmake/                            # CMake toolchain files
├── Gpio/                             # GPIO driver
├── include/                          # Global headers
├── Keypad/                           # Keypad driver
├── Lib/
├── Rcc/                              # Clock configuration
├── SevenSegment/                     # Display driver
├── src/                              # main.c and app logic
├── STM32-base/
├── STM32-base-STM32Cube/
├── CMakeLists.txt
├── .gitignore
├── README.md

.gitignore
README.md
```

---

### 🧪 How to Run

1. Clone the repo and open in STM32CubeIDE or CLion.
2. Set the path for the ARM Toolchain in your `CMakeLists.txt`:

```cmake
set(ARM_TOOLCHAIN_DIR "<your-arm-toolchain-path>")
```

3. Compile and flash to STM32F401VE or run Proteus simulation from `Simulation/STM32_KeypadDisplay_04.pdsprj`

---

### Tools & Environment

- **Microcontroller:** STM32F401VE
- **Programming Language:** C (bare-metal)
- **Build System:** CMake
- **IDE:** STM32CubeIDE or CLion
- **Simulation:** Proteus
- **Target:** Educational Lab Project / Custom Embedded I/O System

---

### Contributions

<div>
  <table align="center">
    <tr>
      <td align="center">
        <a href="https://github.com/YassienTawfikk" target="_blank">
          <img src="https://avatars.githubusercontent.com/u/126521373?v=4" width="150px;" alt="Yassien Tawfik"/><br/>
          <sub><b>Yassien Tawfik</b></sub>
        </a>
      </td>
      <td align="center">
        <a href="https://github.com/malak-emad" target="_blank">
          <img src="https://avatars.githubusercontent.com/u/126415070?v=4" width="150px;" alt="Malak Emad"/><br/>
          <sub><b>Malak Emad</b></sub>
        </a>
      </td>
    </tr>
  </table>
</div>

---
