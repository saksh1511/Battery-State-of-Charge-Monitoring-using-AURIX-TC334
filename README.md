# Battery State of Charge Monitoring using AURIX TC334

## Overview

Real-time Battery State of Charge estimation using:

- Infineon AURIX TC334
- EVADC
- UART Communication
- Coulomb Counting Algorithm
- Python Visualization

## Features

- Real-time current acquisition
- SOC estimation
- UART transmission
- Live graphical monitoring
- Debugging support

## Hardware

- AURIX TC334 Board
- Battery Pack
- Current Sensor
- UART Interface

## Software

- AURIX Development Studio
- Python
- Matplotlib
- PySerial

## Formula

SOC(t) = SOC(t−1) − (I × Δt / Capacity) × 100
