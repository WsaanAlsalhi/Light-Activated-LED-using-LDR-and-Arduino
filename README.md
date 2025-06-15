# Light-Activated-LED-using-LDR-and-Arduino
This Arduino project uses a Light Dependent Resistor (LDR) to automatically turn on an LED when the environment becomes dark. It's ideal for building automatic night lights or light-sensitive systems.
Light-Activated LED using LDR and Arduino
This Arduino project uses a Light Dependent Resistor (LDR) to automatically turn on an LED when the environment becomes dark. It's ideal for building automatic night lights or light-sensitive systems.

# Features:
 1. Detects ambient light using an LDR.
 2. Turns on an LED in low-light or dark conditions.
 3. Simple and energy-efficient implementation.

# Components Used:
 1. Arduino Uno (or compatible board)
 2. LDR (photoresistor)
 3. 10kΩ resistor (for voltage divider with LDR)
 4. LED
 5. 220Ω resistor (for the LED)
 6. Jumper wires
 7. Breadboard

# Wiring : 
Component	Arduino Pin:
LDR	A0 (analog)
LED (+)	D13
LED (-)	GND (via 220Ω resistor)
LDR Resistor	Connect LDR and 10kΩ in voltage divider between 5V and GND

# How It Works:
 1. The LDR forms a voltage divider with a resistor.
 2. When light intensity drops, the resistance of the LDR increases, lowering the voltage read at pin A0.
 3. If the analog value drops below a threshold (512), the LED turns on.
 4. Otherwise, it stays off.
