import serial
import matplotlib.pyplot as plt
from collections import deque

PORT = 'COM3'
BAUDRATE = 115200

ser = serial.Serial(PORT, BAUDRATE)

soc_values = deque(maxlen=100)

plt.ion()

fig, ax = plt.subplots()

while True:
    
    line = ser.readline().decode().strip()
    
    print(line)

    if "SOC" in line:

        try:
            soc = float(line.split(":")[1].replace("%",""))

            soc_values.append(soc)

            ax.clear()
            ax.plot(soc_values)

            ax.set_title("Battery State of Charge")
            ax.set_xlabel("Samples")
            ax.set_ylabel("SOC (%)")

            ax.grid(True)

            plt.pause(0.1)

        except:
            pass
