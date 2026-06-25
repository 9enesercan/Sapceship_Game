# Spaceship Game with Arduino

<p >
  <table align="center">
    <tr>
      <td align="center">
        <img src="https://github.com/user-attachments/assets/70e02b37-2135-4189-9e12-4d7b03a4bac5" width="350" alt="Circuit Diagram">
      </td>
      <td align="center">
        <img src="https://github.com/user-attachments/assets/5300a85c-8371-49b3-a796-31ae27d66149" width="350" alt="Game Screen">
      </td>
    </tr>
  </table>
</p>

## About the Project

This project is a simple **Spaceship Game** built with **Arduino Uno**, push buttons, a 16x2 LCD display, buzzers, and 7-segment displays. The player controls a spaceship, avoids obstacles, and tries to achieve the highest possible score.

The project was simulated on Wokwi:
https://wokwi.com/projects/361939192052345857

<p align="center">
  <img src="https://github.com/user-attachments/assets/0f128a63-f5d9-43c1-8137-0fb93dc5beb1" width="500" alt="Project Preview">
</p>


---

## Features

- LCD-based game interface
- Player-controlled spaceship movement
- Obstacle generation and collision detection
- Real-time score tracking
- Sound effects using buzzers
- Increasing difficulty over time

---

## Components Used

- Arduino Uno
- LCD1602 Display
- Push Buttons
- Buzzers
- 7-Segment Display(s)
- **74HC595 Shift Register**
- Breadboard
- Jumper Wires

---

## Score Display System (74HC595)

The project uses **74HC595 shift registers** to drive the 7-segment displays while minimizing the number of Arduino I/O pins required.

When the player's score changes, the Arduino breaks the score into individual digits and sends the corresponding segment data serially to the **74HC595** shift registers. These registers then convert the serial data into parallel output, which directly controls the 7-segment displays.

This approach allows multiple digits to be controlled using only a few Arduino pins.

<p align="center">
  <img src="https://github.com/user-attachments/assets/e53ab52f-5575-4cfa-8829-8db564327141" width="500" alt="Project Preview">
</p>

### Advantages:
- Reduces required Arduino pin usage
- Supports multi-digit score display
- Simplifies wiring complexity
- Enables efficient serial-to-parallel data transfer

---


## Simulation

You can run and modify the project here:

https://wokwi.com/projects/361939192052345857
---

## License

This project is for educational purposes.
