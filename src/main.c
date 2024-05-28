// SPDX-License-Identifier: MIT
// Copyright 2024 Algovoid

#include "wokwi-api.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    pin_t pin_A;
    pin_t pin_B;
    pin_t pin_Y;

} chip_state_t;

static void set_output(chip_state_t *chip) {
  pin_write(chip->pin_Y, ( pin_read(chip->pin_A) | pin_read(chip->pin_B) )  );
}

static void chip_pin_change(void *user_data, pin_t pin, uint32_t value) {
  chip_state_t *chip = (chip_state_t*)user_data;

  set_output(chip);
}

void chip_init() {
  printf("Initialize sn74ahct1g32 chip!\n");
  chip_state_t *chip = malloc(sizeof(chip_state_t));

  chip->pin_A = pin_init("A", INPUT);
  chip->pin_B = pin_init("B", INPUT);
  chip->pin_Y = pin_init("Y", OUTPUT);

  pin_write(chip->pin_A, LOW);
  pin_write(chip->pin_B, LOW);

  const pin_watch_config_t config = {
    .edge = BOTH,
    .pin_change = chip_pin_change,
    .user_data = chip,
  };

  pin_watch(chip->pin_A, &config);
  pin_watch(chip->pin_B, &config);

  set_output(chip);
}
