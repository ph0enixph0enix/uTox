
static uint8_t
bm_minimize_bits[] = {
    0b00000000, 0b00000000,
    0b00000000, 0b00000000,
    0b00000000, 0b00000000,
    0b00000000, 0b00000000,
    0b00000000, 0b00000000,
    0b00000000, 0b00000000,
    0b00000000, 0b00000000,
    0b00000000, 0b00000000,
    0b00001111, 0b11110000,
    0b00001111, 0b11110000,
    },

bm_maximize_bits[] = {
    0b00011111, 0b11111000,
    0b00011111, 0b11111000,
    0b00011111, 0b11111000,
    0b00010000, 0b00001000,
    0b00010000, 0b00001000,
    0b00010000, 0b00001000,
    0b00010000, 0b00001000,
    0b00010000, 0b00001000,
    0b00010000, 0b00001000,
    0b00011111, 0b11111000,
    },

bm_restore_bits[] = {
    0b00000111, 0b11111000,
    0b00000111, 0b11111000,
    0b00000100, 0b00001000,
    0b00011111, 0b11101000,
    0b00011111, 0b11101000,
    0b00010000, 0b00101000,
    0b00010000, 0b00111000,
    0b00010000, 0b00100000,
    0b00010000, 0b00100000,
    0b00011111, 0b11100000,
    },

bm_exit_bits[] = {
    0b00001000, 0b00010000,
    0b00011100, 0b00111000,
    0b00001110, 0b01110000,
    0b00000111, 0b11100000,
    0b00000011, 0b11000000,
    0b00000011, 0b11000000,
    0b00000111, 0b11100000,
    0b00001110, 0b01110000,
    0b00011100, 0b00111000,
    0b00001000, 0b00010000,
    },

bm_plus_bits[] = {
    0b11111100, 0b00111111,
    0b11111100, 0b00111111,
    0b11111100, 0b00111111,
    0b11111100, 0b00111111,
    0b11111100, 0b00111111,
    0b11111100, 0b00111111,
    0, 0,
    0, 0,
    0, 0,
    0, 0,
    0b11111100, 0b00111111,
    0b11111100, 0b00111111,
    0b11111100, 0b00111111,
    0b11111100, 0b00111111,
    0b11111100, 0b00111111,
    0b11111100, 0b00111111,
    },

bm_plus2_bits[] = {
    0b11110001, 0b11111111,
    0b11110001, 0b11111111,
    0b11110001, 0b11111111,
    0b11110001, 0b11111111,
    0b00000000, 0b00011111,
    0b00000000, 0b00011111,
    0b00000000, 0b00011111,
    0b11110001, 0b11111111,
    0b11110001, 0b11111111,
    0b11110001, 0b11111111,
    0b11110001, 0b11111111,
    };
