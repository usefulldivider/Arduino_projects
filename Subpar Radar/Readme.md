# Subpar Radar using Ultrasonic sensor

This project utilizes an Arduino Uno along with a few electronic components to create a simple radar.

## Required Components

- Arduino Uno
- Ultrasonic sensor ->[Datasheet](https://docs.google.com/document/d/1Y-yZnNhMYy7rwhAgyL_pfa39RsB-x2qR4vP8saG73rE/edit)
- Cables
- Servo (micro is what I am using)
- Breadboard

## Circuit Diagram

![Circuit Diagram](https://github.com/usefulldivider/Arduino_projects/assets/143326541/b3ab973a-05ae-43e4-aea1-30e821397be8)

## Schematic Diagram

![Schematic Diagram](https://github.com/usefulldivider/Arduino_projects/assets/143326541/0fb6ee17-916a-421c-8b99-31f30798bf41)

## Description

This project measures distance using an ultrasonic sensor in 180 (kinda->6 to 165) degrees and plots the distance on the serial plotter to simulate a radar.

## Installation

1. Connect the components according to the circuit diagram.
2. Upload the provided Arduino code to your Arduino Uno.
3. Tape the ultrasonic sensor on top of the micro servo (you can use one of the servo headers as a nice base) and tape the servo down to a table firmly.
4. The output will be shown on the *Serial plotter* which you will find in the top right corner of the IDE or under `Tools` -> `Serial plotter`.

## Working

The setup for reference: ![Setup Reference](https://github.com/usefulldivider/Arduino_projects/assets/143326541/f13873f5-4b70-469d-a355-f1fa469b5284)

The graph: ![Graph](https://github.com/usefulldivider/Arduino_projects/assets/143326541/69debf52-a08a-47c7-8176-bbed5e80670b)

The **_Blue line_** is the angle line which will keep going the same way kinda sinusoidal.
The **_Orange line_** is the distance line. Each of those disturbances represents something in front of the sensor. Notice the distance on the graph. The deodorant is farther away than the pen.

## Inspiration

[YouTube Video](https://www.youtube.com/watch?v=xngpwyQKnRw) (didn't follow this process because i am not familiar with PROCESSING )

## Contributing

Contributions are welcome! If you have any ideas for improvement or would like to add features, feel free to open an issue or submit a pull request.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
