# LED-Matrix
The project aims to showcase the vast utility of an LED screen by writing different codes for the Arduino. 
The codes are developed for a 10x8 LED matrix with shift registers(74HC595) for columns and 4017 decade counter for the rows. This has been done to save pins on the Arduino.

### Message Display Board controlled by GSM

For this part we use a GSM SIM300 module to receive a message in the form of normal text from the user and display it on the LED matrix.
The received message scrolls on the LED matrix till a new SMS is received. The code for this part is in the folder *FINAL_PROJECT*.

### Classic Nokia Snakes Game

The snake game is played with the help of a controller made using four push buttons which direct the snake in search of food
enabling it to grow. Wires from the controller are directly inserted into the Arduino. The code for this part is in the folder *alternate_snake*.

### Conways Game of Life

This part simulates the cell automation theory by taking the inputs randomly and then displaying various patterns formed by following the rules of the classic theory by Conway.
The code for this part is in the folder *conways*.
