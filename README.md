# Smart Shopping Trolley

This project is a smart shopping trolley system that helps users to track the cost of items added to their trolley using RFID tags. The system uses an Arduino microcontroller, an LCD display, a buzzer, and RFID tags to display the total bill amount and indicate successful item addition.

## Table of Contents

- [Installation](#installation)
- [Usage](#usage)
- [Features](#features)
- [Components](#components)
- [Circuit Diagram](#circuit-diagram)
- [Contributing](#contributing)
- [License](#license)
- [Contact](#contact)

## Installation

1. **Clone the repository:**

    ```bash
    git clone https://github.com/yourusername/yourproject.git
    ```

2. **Navigate to the project directory:**

    ```bash
    cd yourproject
    ```

3. **Open the project in the Arduino IDE:**
    - Ensure you have the Arduino IDE installed on your computer.
    - Open the `SmartShoppingTrolley.ino` file in the Arduino IDE.

4. **Connect your Arduino:**
    - Connect your Arduino board to your computer using a USB cable.

5. **Upload the code to your Arduino:**
    - Select the correct board and port from the `Tools` menu.
    - Click the upload button to upload the code to the Arduino board.

## Usage

1. **Power the Arduino:**
    - Connect your Arduino to a power source.

2. **Place RFID tags near the RFID reader:**
    - The system will read the RFID tags and add the corresponding item cost to the total bill.
    - The LCD will display the item added and the updated bill amount.
    - The buzzer will beep to indicate successful item addition.

3. **Reset the bill:**
    - Place the designated RFID tag (tag3) to reset the bill to 0 after payment.

## Features

- **Real-time Bill Tracking:**
  - Automatically updates and displays the total bill amount as items are added.
- **RFID Tag Reading:**
  - Uses RFID tags to identify items and their prices.
- **User Feedback:**
  - Provides audio feedback using a buzzer for successful operations.
- **LCD Display:**
  - Displays messages and bill amounts to the user.

## Components

- Arduino board
- LCD display (16x2)
- Buzzer
- RFID reader
- RFID tags
- Push button
- Connecting wires

## Circuit Diagram

(Insert a circuit diagram image here, or describe the connections in detail)

- **LCD Display:**
  - RS pin to digital pin 7
  - EN pin to digital pin 6
  - D4 pin to digital pin 5
  - D5 pin to digital pin 4
  - D6 pin to digital pin 3
  - D7 pin to digital pin 2
- **Buzzer:**
  - Positive terminal to digital pin 11
  - Negative terminal to GND
- **Push Button:**
  - One terminal to digital pin 9
  - Other terminal to GND


## Contact

Avinash Chaurasia - [avinashhere017@gmail.com](mailto : Avinash)


