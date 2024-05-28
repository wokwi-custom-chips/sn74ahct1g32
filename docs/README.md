# Wokwi sn74ahct1g32 Chip

This is a custom chip for [Wokwi](https://wokwi.com/). It implements the sn74ahct1g32 IC.

## Description

The sn74ahct1g32 contain single 2-input Positive-OR gates. Each gate performs the Boolean function
of Y = (A + B)  in positive logic.

## Truth Table
<<<<<<< HEAD
|                                     INPUTS                                    | OUTPUT  |
| ----------------------------------------------------------------------------- |---------|
| INPUT A | INPUT B | INPUT C | INPUT D | INPUT E | INPUT F | INPUT G | INPUT H |         |
|---------|---------|---------|---------|---------|---------|---------|---------|---------|
|    L    |    X    |    X    |    X    |    X    |    X    |    X    |    X    |    H    |
|    X    |    L    |    X    |    X    |    X    |    X    |    X    |    X    |    H    |
|    X    |    X    |    L    |    X    |    X    |    X    |    X    |    X    |    H    |
|    X    |    X    |    X    |    L    |    X    |    X    |    X    |    X    |    H    |
|    X    |    X    |    X    |    X    |    L    |    X    |    X    |    X    |    H    |
|    X    |    X    |    X    |    X    |    X    |    L    |    X    |    X    |    H    |
|    X    |    X    |    X    |    X    |    X    |    X    |    L    |    X    |    H    |
|    X    |    X    |    X    |    X    |    X    |    X    |    X    |    L    |    H    |
|    H    |    H    |    H    |    H    |    H    |    H    |    H    |    H    |    L    |
=======
>>>>>>> parent of a3517e7 (Update README.md)

| INPUT A | INPUT B |  OUTPUT |
| ------- | ------- | ------- |
|    X    |    H    |    H    |
|    H    |    X    |    H    |
|    L    |    L    |    L    |

## Pin names

| Name | Description       |
| ---- | ----------------- |
|  A   | Input signal  A   |
|  B   | Input signal  B   |
|  Y   | Output signal     |
| GND  | Ground            |
| VCC  | Supply voltage    |


## Usage

To use this chip in your project, include it as a dependency in your `diagram.json` file:

```json
  "dependencies": {
    "chip-sn74ahct1g32": "github:wokwi-custom-chips/sn74ahct1g32@0.1.0"
  }
```

Then, add the chip to your circuit by adding a `chip-sn74ahct1g32` item to the `parts` section of diagram.json:

```json
  "parts": {
    ...,
    { "type": "chip-sn74ahct1g32", "id": "chip1" }
  },
```

For a complete example, see [The sn74ahct1g32 chip test project](https://wokwi.com/projects/398967433536335873).
