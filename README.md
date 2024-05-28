
#            SN74AHCT1G32

## SINGLE 2-INPUT POSITIVE-OR GATE Chip

Example of a basic custom chip for [Wokwi](https://wokwi.com/).

The actual source code for the chip lives in [src/main.c](src/main.c), and the pins are described in [chip.json](chip.json).

## Chip functionalities explained in DOCS 

[Go-to-docs](docs/README.md)

## Building

The easiest way to build the project is to open it inside a Visual Studio Code dev container, and then run the `make` command.

## Testing

You can test this project using the [Wokwi extension for VS Code](https://marketplace.visualstudio.com/items?itemName=wokwi.wokwi-vscode). Open the project with Visual Studio Code, press "F1" and select "Wokwi: Start Simulator".

If you want to make changes to the test project firmware, edit [test/logic/sketch.ino](test/logic/sketch.ino), and then run `make test` to rebuild the .hex file. You'll need the [arduino-cli](https://arduino.github.io/arduino-cli/latest/installation/), which is already installed in the dev container.

## License

This project is licensed under the MIT license. See the [LICENSE](LICENSE) file for more details.
