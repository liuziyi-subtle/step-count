// #include <stdint.h>

uint16_t test_length = 250;

int16_t accx[250] = {
    80, 76, 70, 61, 52, 45, 39, 37, 39, 42, 45, 46, 44, 42, 42, 46, 57,
       65, 68, 67, 58, 48, 39, 35, 35, 37, 38, 38, 38, 42, 54, 60, 69, 69,
       63, 58, 54, 51, 50, 50, 49, 46, 41, 38, 46, 57, 70, 75, 66, 59, 54,
       50, 44, 43, 44, 45, 45, 46, 50, 59, 82, 79, 72, 65, 55, 49, 50, 54,
       56, 59, 64, 71, 77, 81, 78, 68, 55, 45, 40, 39, 41, 43, 45, 48, 52,
       59, 63, 77, 87, 82, 74, 68, 61, 52, 42, 38, 38, 43, 50, 58, 64, 73,
       81, 80, 72, 64, 55, 43, 33, 28, 31, 39, 46, 50, 52, 54, 62, 77, 82,
       75, 70, 64, 58, 53, 48, 72, 65, 55, 49, 50, 54, 56, 59, 64, 71, 77,
       81, 78, 68, 55, 45, 40, 39, 41, 43, 45, 48, 52, 59, 63, 77, 87, 82,
       74, 68, 61, 52, 42, 38, 38, 43, 50, 58, 64, 73, 81, 80, 72, 64, 55,
       43, 33, 28, 31, 39, 46, 50, 52, 54, 62, 77, 82, 75, 70, 64, 58, 53,
       48, 45, 46, 40, 31, 24, 17, 13, 11, 10, 10, 11, 10,  7,  4,  1,  1,
        1,  1,  0,  0,  0,  3,  1, -5, -9, -8, -6, -6, -5, -4, -3, -3, -3,
       -3, -2,  1,  6, 10, 18, 33, 45, 53, 58, 59, 57, 51, 52, 48, 49, 52,
       65, 79, 76, 70, 65, 58, 50, 41, 35, 35, 40, 44};

int16_t accy[250] = {
   -35, -33, -30, -26, -26, -26, -25, -26, -28, -27, -32, -34, -34,
       -36, -35, -36, -38, -37, -40, -38, -30, -25, -23, -24, -30, -34,
       -34, -34, -34, -35, -39, -40, -46, -46, -42, -38, -34, -32, -31,
       -29, -27, -25, -24, -26, -30, -31, -34, -35, -34, -31, -28, -28,
       -29, -32, -34, -34, -33, -31, -32, -36, -45, -37, -34, -30, -24,
       -23, -26, -26, -24, -23, -25, -28, -28, -28, -27, -25, -18, -15,
       -17, -21, -23, -26, -28, -29, -30, -32, -31, -34, -39, -37, -32,
       -28, -25, -22, -19, -19, -21, -24, -25, -28, -28, -29, -30, -30,
       -29, -27, -24, -23, -23, -25, -27, -31, -33, -35, -35, -35, -34,
       -40, -39, -34, -34, -39, -44, -51, -57, -34, -30, -24, -23, -26,
       -26, -24, -23, -25, -28, -28, -28, -27, -25, -18, -15, -17, -21,
       -23, -26, -28, -29, -30, -32, -31, -34, -39, -37, -32, -28, -25,
       -22, -19, -19, -21, -24, -25, -28, -28, -29, -30, -30, -29, -27,
       -24, -23, -23, -25, -27, -31, -33, -35, -35, -35, -34, -40, -39,
       -34, -34, -39, -44, -51, -57, -66, -69, -59, -50, -42, -33, -28,
       -15,  -7,  -2,   3,   7,   8,  11,  12,  16,  23,  30,  37,  42,
        45,  50,  51,  46,  42,  36,  32,  29,  27,  26,  27,  30,  31,
        32,  32,  27,  20,   7, -14, -36, -55, -54, -58, -64, -75, -78,
       -68, -59, -58, -57, -59, -59, -52, -49, -27, -32, -26, -24, -25,
       -26, -28, -29};

int16_t accz[250] = {
   14, 11,  8,  6,  4,  3,  1,  0,  1,  2,  7, 10, 14, 16, 18, 19, 20,
       23, 25, 27, 25, 22, 19, 16, 16, 18, 21, 20, 21, 20, 20, 20, 22, 19,
       14, 10,  7,  6,  5,  4,  4,  5,  6,  7,  9, 11, 14, 16, 18, 16, 14,
       13, 12, 12, 14, 13, 13, 13, 12, 11, 13,  8,  6,  2, -1, -3, -3, -4,
       -2, -1,  1,  4,  6,  9, 12, 14, 14, 14, 13, 12, 13, 13, 14, 13, 13,
       12, 12, 12, 12,  8,  5,  3,  2,  1,  1,  0, -1, -2, -1,  1,  2,  5,
        8, 14, 18, 19, 16, 14, 13, 12, 12, 12, 13, 14, 14, 14, 14, 16, 18,
       15, 14, 14, 17, 19, 23,  6,  2, -1, -3, -3, -4, -2, -1,  1,  4,  6,
        9, 12, 14, 14, 14, 13, 12, 13, 13, 14, 13, 13, 12, 12, 12, 12,  8,
        5,  3,  2,  1,  1,  0, -1, -2, -1,  1,  2,  5,  8, 14, 18, 19, 16,
       14, 13, 12, 12, 12, 13, 14, 14, 14, 14, 16, 18, 15, 14, 14, 17, 19,
       23, 26, 31, 37, 39, 43, 45, 47, 49, 53, 56, 54, 51, 46, 41, 37, 34,
       33, 32, 35, 39, 44, 49, 55, 55, 56, 53, 48, 43, 38, 35, 34, 36, 40,
       44, 42, 35, 29, 23, 24, 29, 31, 29, 25, 24, 16,  5, -1, -1, -1, -2,
       -3,  0,  0,  1, -1,  1,  0,  0, -1, -2, -2,  0};