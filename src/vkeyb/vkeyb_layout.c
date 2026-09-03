/* Virtual keyboard layout */

#include "vkeyb_layout.h"
#include <libretro.h>

const struct VKey *ODYSSEY2_DEFAULT_KEY = &o2_kb[0];
const struct VKey *ODYSSEY2_DEFAULT_KEY_2X = &o2_kb_2x[0];
const struct VKey *ODYSSEY2_DEFAULT_KEY_3X = &o2_kb_3x[0];
const struct VKey *ODYSSEY2_DEFAULT_KEY_4X = &o2_kb_4x[0];
const struct VKey *ODYSSEY2_DEFAULT_KEY_QFTR = &o2_kb_qftr[0];
const struct VKey *ODYSSEY2_DEFAULT_KEY_QFTR_2X = &o2_kb_qftr_2x[0];
const struct VKey *ODYSSEY2_DEFAULT_KEY_QFTR_3X = &o2_kb_qftr_3x[0];
const struct VKey *ODYSSEY2_DEFAULT_KEY_QFTR_4X = &o2_kb_qftr_4x[0];

const struct VKey o2_kb[ODYSSEY2_KB_KEYS] =
{
  // 1st row "Numeric" (keys 0 to 9)
  { RETROK_0,   9,  12, 31, 16, &o2_kb[9],  &o2_kb[1],  &o2_kb[39], &o2_kb[10] }, /* 0: 0 */
  { RETROK_1,  42,  12, 31, 16, &o2_kb[0],  &o2_kb[2],  &o2_kb[39], &o2_kb[11] }, /* 1: 1 */
  { RETROK_2,  74,  12, 31, 16, &o2_kb[1],  &o2_kb[3],  &o2_kb[40], &o2_kb[12] }, /* 2: 2 */
  { RETROK_3, 106,  12, 31, 16, &o2_kb[2],  &o2_kb[4],  &o2_kb[48], &o2_kb[13] }, /* 3: 3 */
  { RETROK_4, 139,  12, 31, 16, &o2_kb[3],  &o2_kb[5],  &o2_kb[48], &o2_kb[14] }, /* 4: 4 */
  { RETROK_5, 171,  12, 31, 16, &o2_kb[4],  &o2_kb[6],  &o2_kb[48], &o2_kb[15] }, /* 5: 5 */
  { RETROK_6, 203,  12, 31, 16, &o2_kb[5],  &o2_kb[7],  &o2_kb[48], &o2_kb[16] }, /* 6: 6 */
  { RETROK_7, 235,  12, 31, 16, &o2_kb[6],  &o2_kb[8],  &o2_kb[45], &o2_kb[17] }, /* 7: 7 */
  { RETROK_8, 267,  12, 31, 16, &o2_kb[7],  &o2_kb[9],  &o2_kb[46], &o2_kb[18] }, /* 8: 8 */
  { RETROK_9, 300,  12, 31, 16, &o2_kb[8],  &o2_kb[0],  &o2_kb[47], &o2_kb[19] }, /* 9: 9 */
  // 2nd row "Function/Input/Reset" (keys 10 to 19)
  { RETROK_PLUS,   8,  44, 31, 16, &o2_kb[19], &o2_kb[11], &o2_kb[0],  &o2_kb[20] }, /* 10: + */
  { RETROK_MINUS,  41,  44, 31, 16, &o2_kb[10], &o2_kb[12], &o2_kb[1],  &o2_kb[21] }, /* 11: - */
  { RETROK_ASTERISK,  73,  44, 31, 16, &o2_kb[11], &o2_kb[13], &o2_kb[2],  &o2_kb[22] }, /* 12: * */
  { RETROK_SLASH, 105,  44, 31, 16, &o2_kb[12], &o2_kb[14], &o2_kb[3],  &o2_kb[23] }, /* 13: % */
  { RETROK_EQUALS, 138,  44, 31, 16, &o2_kb[13], &o2_kb[15], &o2_kb[4],  &o2_kb[24] }, /* 14: = */
  { RETROK_LALT, 170,  44, 31, 16, &o2_kb[14], &o2_kb[16], &o2_kb[5],  &o2_kb[25] }, /* 15: YES */
  { RETROK_RALT, 202,  44, 31, 16, &o2_kb[15], &o2_kb[17], &o2_kb[6],  &o2_kb[26] }, /* 16: NO */
  { RETROK_DELETE, 234,  44, 31, 16, &o2_kb[16], &o2_kb[18], &o2_kb[7],  &o2_kb[27] }, /* 17: CLEAR */
  { RETROK_RETURN, 266,  44, 31, 16, &o2_kb[17], &o2_kb[19], &o2_kb[8],  &o2_kb[28] }, /* 18: ENTER */
  { RETROK_F5, 299,  44, 31, 16, &o2_kb[18], &o2_kb[10], &o2_kb[9],  &o2_kb[29] }, /* 19: RESET */
  // 3rd row (keys 20 to 29)
  { RETROK_q,   8,  87, 32, 17, &o2_kb[29], &o2_kb[21], &o2_kb[10], &o2_kb[30] }, /* 20: Q */
  { RETROK_w,  41,  87, 32, 17, &o2_kb[20], &o2_kb[22], &o2_kb[11], &o2_kb[31] }, /* 21: W */
  { RETROK_e,  73,  87, 32, 17, &o2_kb[21], &o2_kb[23], &o2_kb[12], &o2_kb[32] }, /* 22: E */
  { RETROK_r, 105,  87, 32, 17, &o2_kb[22], &o2_kb[24], &o2_kb[13], &o2_kb[33] }, /* 23: R */
  { RETROK_t, 137,  87, 32, 17, &o2_kb[23], &o2_kb[25], &o2_kb[14], &o2_kb[34] }, /* 24: T */
  { RETROK_y, 170,  87, 32, 17, &o2_kb[24], &o2_kb[26], &o2_kb[15], &o2_kb[35] }, /* 25: Y */
  { RETROK_u, 202,  87, 32, 17, &o2_kb[25], &o2_kb[27], &o2_kb[16], &o2_kb[36] }, /* 26: U */
  { RETROK_i, 234,  87, 32, 17, &o2_kb[26], &o2_kb[28], &o2_kb[17], &o2_kb[37] }, /* 27: I */
  { RETROK_o, 266,  87, 32, 17, &o2_kb[27], &o2_kb[29], &o2_kb[18], &o2_kb[38] }, /* 28: O */
  { RETROK_p, 299,  87, 32, 17, &o2_kb[28], &o2_kb[20], &o2_kb[19], &o2_kb[38] }, /* 29: P */
  // 4rd row (keys 30 to 38)
  { RETROK_a,  24, 113, 32, 17, &o2_kb[38], &o2_kb[31], &o2_kb[20], &o2_kb[39] }, /* 30: A */
  { RETROK_s,  56, 113, 32, 17, &o2_kb[30], &o2_kb[32], &o2_kb[21], &o2_kb[40] }, /* 31: S */
  { RETROK_d,  88, 113, 32, 17, &o2_kb[31], &o2_kb[33], &o2_kb[22], &o2_kb[41] }, /* 32: D */
  { RETROK_f, 120, 113, 32, 17, &o2_kb[32], &o2_kb[34], &o2_kb[23], &o2_kb[42] }, /* 33: F */
  { RETROK_g, 152, 113, 32, 17, &o2_kb[33], &o2_kb[35], &o2_kb[24], &o2_kb[43] }, /* 34: G */
  { RETROK_h, 185, 113, 32, 17, &o2_kb[34], &o2_kb[36], &o2_kb[25], &o2_kb[44] }, /* 35: H */
  { RETROK_j, 217, 113, 32, 17, &o2_kb[35], &o2_kb[37], &o2_kb[26], &o2_kb[45] }, /* 36: J */
  { RETROK_k, 249, 113, 32, 17, &o2_kb[36], &o2_kb[38], &o2_kb[27], &o2_kb[46] }, /* 37: K */
  { RETROK_l, 282, 113, 32, 17, &o2_kb[37], &o2_kb[30], &o2_kb[28], &o2_kb[47] }, /* 38: L */
  // 5th row (keys 39 to 47)
  { RETROK_z,  40, 139, 32, 18, &o2_kb[47], &o2_kb[40], &o2_kb[30], &o2_kb[1]  }, /* 39: Z */
  { RETROK_x,  72, 139, 32, 18, &o2_kb[39], &o2_kb[41], &o2_kb[31], &o2_kb[2]  }, /* 40: X */
  { RETROK_c, 104, 139, 32, 18, &o2_kb[40], &o2_kb[42], &o2_kb[32], &o2_kb[48] }, /* 41: C */
  { RETROK_v, 136, 139, 32, 18, &o2_kb[41], &o2_kb[43], &o2_kb[33], &o2_kb[48] }, /* 42: V */
  { RETROK_b, 169, 139, 32, 18, &o2_kb[42], &o2_kb[44], &o2_kb[34], &o2_kb[48] }, /* 43: B */
  { RETROK_n, 202, 139, 32, 18, &o2_kb[43], &o2_kb[45], &o2_kb[35], &o2_kb[48] }, /* 44: N */
  { RETROK_m, 234, 139, 32, 18, &o2_kb[44], &o2_kb[46], &o2_kb[36], &o2_kb[7]  }, /* 45: M */
  { RETROK_PERIOD, 266, 139, 32, 18, &o2_kb[45], &o2_kb[47], &o2_kb[37], &o2_kb[8]  }, /* 46: . */
  { RETROK_QUESTION, 299, 139, 32, 18, &o2_kb[46], &o2_kb[39], &o2_kb[38], &o2_kb[9]  }, /* 47: ? */
  // Last row (Space key)
  { RETROK_SPACE, 121, 168, 95, 17, &o2_kb[48], &o2_kb[48], &o2_kb[42], &o2_kb[4]  }, /* 48: Space */
};

const struct VKey o2_kb_2x[ODYSSEY2_KB_KEYS] =
{
  // 1st row "Numeric" (keys 0 to 9)
  { RETROK_0,   9*2,  12*2, 31*2, 16*2, &o2_kb_2x[9],  &o2_kb_2x[1],  &o2_kb_2x[39], &o2_kb_2x[10] }, /* 0: 0 */
  { RETROK_1,  42*2,  12*2, 31*2, 16*2, &o2_kb_2x[0],  &o2_kb_2x[2],  &o2_kb_2x[39], &o2_kb_2x[11] }, /* 1: 1 */
  { RETROK_2,  74*2,  12*2, 31*2, 16*2, &o2_kb_2x[1],  &o2_kb_2x[3],  &o2_kb_2x[40], &o2_kb_2x[12] }, /* 2: 2 */
  { RETROK_3, 106*2,  12*2, 31*2, 16*2, &o2_kb_2x[2],  &o2_kb_2x[4],  &o2_kb_2x[48], &o2_kb_2x[13] }, /* 3: 3 */
  { RETROK_4, 139*2,  12*2, 31*2, 16*2, &o2_kb_2x[3],  &o2_kb_2x[5],  &o2_kb_2x[48], &o2_kb_2x[14] }, /* 4: 4 */
  { RETROK_5, 171*2,  12*2, 31*2, 16*2, &o2_kb_2x[4],  &o2_kb_2x[6],  &o2_kb_2x[48], &o2_kb_2x[15] }, /* 5: 5 */
  { RETROK_6, 203*2,  12*2, 31*2, 16*2, &o2_kb_2x[5],  &o2_kb_2x[7],  &o2_kb_2x[48], &o2_kb_2x[16] }, /* 6: 6 */
  { RETROK_7, 235*2,  12*2, 31*2, 16*2, &o2_kb_2x[6],  &o2_kb_2x[8],  &o2_kb_2x[45], &o2_kb_2x[17] }, /* 7: 7 */
  { RETROK_8, 267*2,  12*2, 31*2, 16*2, &o2_kb_2x[7],  &o2_kb_2x[9],  &o2_kb_2x[46], &o2_kb_2x[18] }, /* 8: 8 */
  { RETROK_9, 300*2,  12*2, 31*2, 16*2, &o2_kb_2x[8],  &o2_kb_2x[0],  &o2_kb_2x[47], &o2_kb_2x[19] }, /* 9: 9 */
  // 2nd row "Function/Input/Reset" (keys 10 to 19)
  { RETROK_PLUS,   8*2,  44*2, 31*2, 16*2, &o2_kb_2x[19], &o2_kb_2x[11], &o2_kb_2x[0],  &o2_kb_2x[20] }, /* 10: + */
  { RETROK_MINUS,  41*2,  44*2, 31*2, 16*2, &o2_kb_2x[10], &o2_kb_2x[12], &o2_kb_2x[1],  &o2_kb_2x[21] }, /* 11: - */
  { RETROK_ASTERISK,  73*2,  44*2, 31*2, 16*2, &o2_kb_2x[11], &o2_kb_2x[13], &o2_kb_2x[2],  &o2_kb_2x[22] }, /* 12: * */
  { RETROK_SLASH, 105*2,  44*2, 31*2, 16*2, &o2_kb_2x[12], &o2_kb_2x[14], &o2_kb_2x[3],  &o2_kb_2x[23] }, /* 13: % */
  { RETROK_EQUALS, 138*2,  44*2, 31*2, 16*2, &o2_kb_2x[13], &o2_kb_2x[15], &o2_kb_2x[4],  &o2_kb_2x[24] }, /* 14: = */
  { RETROK_LALT, 170*2,  44*2, 31*2, 16*2, &o2_kb_2x[14], &o2_kb_2x[16], &o2_kb_2x[5],  &o2_kb_2x[25] }, /* 15: YES */
  { RETROK_RALT, 202*2,  44*2, 31*2, 16*2, &o2_kb_2x[15], &o2_kb_2x[17], &o2_kb_2x[6],  &o2_kb_2x[26] }, /* 16: NO */
  { RETROK_DELETE, 234*2,  44*2, 31*2, 16*2, &o2_kb_2x[16], &o2_kb_2x[18], &o2_kb_2x[7],  &o2_kb_2x[27] }, /* 17: CLEAR */
  { RETROK_RETURN, 266*2,  44*2, 31*2, 16*2, &o2_kb_2x[17], &o2_kb_2x[19], &o2_kb_2x[8],  &o2_kb_2x[28] }, /* 18: ENTER */
  { RETROK_F5, 299*2,  44*2, 31*2, 16*2, &o2_kb_2x[18], &o2_kb_2x[10], &o2_kb_2x[9],  &o2_kb_2x[29] }, /* 19: RESET */
  // 3rd row (keys 20 to 29)
  { RETROK_q,   8*2,  87*2, 32*2, 17*2, &o2_kb_2x[29], &o2_kb_2x[21], &o2_kb_2x[10], &o2_kb_2x[30] }, /* 20: Q */
  { RETROK_w,  41*2,  87*2, 32*2, 17*2, &o2_kb_2x[20], &o2_kb_2x[22], &o2_kb_2x[11], &o2_kb_2x[31] }, /* 21: W */
  { RETROK_e,  73*2,  87*2, 32*2, 17*2, &o2_kb_2x[21], &o2_kb_2x[23], &o2_kb_2x[12], &o2_kb_2x[32] }, /* 22: E */
  { RETROK_r, 105*2,  87*2, 32*2, 17*2, &o2_kb_2x[22], &o2_kb_2x[24], &o2_kb_2x[13], &o2_kb_2x[33] }, /* 23: R */
  { RETROK_t, 137*2,  87*2, 32*2, 17*2, &o2_kb_2x[23], &o2_kb_2x[25], &o2_kb_2x[14], &o2_kb_2x[34] }, /* 24: T */
  { RETROK_y, 170*2,  87*2, 32*2, 17*2, &o2_kb_2x[24], &o2_kb_2x[26], &o2_kb_2x[15], &o2_kb_2x[35] }, /* 25: Y */
  { RETROK_u, 202*2,  87*2, 32*2, 17*2, &o2_kb_2x[25], &o2_kb_2x[27], &o2_kb_2x[16], &o2_kb_2x[36] }, /* 26: U */
  { RETROK_i, 234*2,  87*2, 32*2, 17*2, &o2_kb_2x[26], &o2_kb_2x[28], &o2_kb_2x[17], &o2_kb_2x[37] }, /* 27: I */
  { RETROK_o, 266*2,  87*2, 32*2, 17*2, &o2_kb_2x[27], &o2_kb_2x[29], &o2_kb_2x[18], &o2_kb_2x[38] }, /* 28: O */
  { RETROK_p, 299*2,  87*2, 32*2, 17*2, &o2_kb_2x[28], &o2_kb_2x[20], &o2_kb_2x[19], &o2_kb_2x[38] }, /* 29: P */
  // 4rd row (keys 30 to 38)
  { RETROK_a,  24*2, 113*2, 32*2, 17*2, &o2_kb_2x[38], &o2_kb_2x[31], &o2_kb_2x[20], &o2_kb_2x[39] }, /* 30: A */
  { RETROK_s,  56*2, 113*2, 32*2, 17*2, &o2_kb_2x[30], &o2_kb_2x[32], &o2_kb_2x[21], &o2_kb_2x[40] }, /* 31: S */
  { RETROK_d,  88*2, 113*2, 32*2, 17*2, &o2_kb_2x[31], &o2_kb_2x[33], &o2_kb_2x[22], &o2_kb_2x[41] }, /* 32: D */
  { RETROK_f, 120*2, 113*2, 32*2, 17*2, &o2_kb_2x[32], &o2_kb_2x[34], &o2_kb_2x[23], &o2_kb_2x[42] }, /* 33: F */
  { RETROK_g, 152*2, 113*2, 32*2, 17*2, &o2_kb_2x[33], &o2_kb_2x[35], &o2_kb_2x[24], &o2_kb_2x[43] }, /* 34: G */
  { RETROK_h, 185*2, 113*2, 32*2, 17*2, &o2_kb_2x[34], &o2_kb_2x[36], &o2_kb_2x[25], &o2_kb_2x[44] }, /* 35: H */
  { RETROK_j, 217*2, 113*2, 32*2, 17*2, &o2_kb_2x[35], &o2_kb_2x[37], &o2_kb_2x[26], &o2_kb_2x[45] }, /* 36: J */
  { RETROK_k, 249*2, 113*2, 32*2, 17*2, &o2_kb_2x[36], &o2_kb_2x[38], &o2_kb_2x[27], &o2_kb_2x[46] }, /* 37: K */
  { RETROK_l, 282*2, 113*2, 32*2, 17*2, &o2_kb_2x[37], &o2_kb_2x[30], &o2_kb_2x[28], &o2_kb_2x[47] }, /* 38: L */
  // 5th row (keys 39 to 47)
  { RETROK_z,  40*2, 139*2, 32*2, 18*2, &o2_kb_2x[47], &o2_kb_2x[40], &o2_kb_2x[30], &o2_kb_2x[1]  }, /* 39: Z */
  { RETROK_x,  72*2, 139*2, 32*2, 18*2, &o2_kb_2x[39], &o2_kb_2x[41], &o2_kb_2x[31], &o2_kb_2x[2]  }, /* 40: X */
  { RETROK_c, 104*2, 139*2, 32*2, 18*2, &o2_kb_2x[40], &o2_kb_2x[42], &o2_kb_2x[32], &o2_kb_2x[48] }, /* 41: C */
  { RETROK_v, 136*2, 139*2, 32*2, 18*2, &o2_kb_2x[41], &o2_kb_2x[43], &o2_kb_2x[33], &o2_kb_2x[48] }, /* 42: V */
  { RETROK_b, 169*2, 139*2, 32*2, 18*2, &o2_kb_2x[42], &o2_kb_2x[44], &o2_kb_2x[34], &o2_kb_2x[48] }, /* 43: B */
  { RETROK_n, 202*2, 139*2, 32*2, 18*2, &o2_kb_2x[43], &o2_kb_2x[45], &o2_kb_2x[35], &o2_kb_2x[48] }, /* 44: N */
  { RETROK_m, 234*2, 139*2, 32*2, 18*2, &o2_kb_2x[44], &o2_kb_2x[46], &o2_kb_2x[36], &o2_kb_2x[7]  }, /* 45: M */
  { RETROK_PERIOD, 266*2, 139*2, 32*2, 18*2, &o2_kb_2x[45], &o2_kb_2x[47], &o2_kb_2x[37], &o2_kb_2x[8]  }, /* 46: . */
  { RETROK_QUESTION, 299*2, 139*2, 32*2, 18*2, &o2_kb_2x[46], &o2_kb_2x[39], &o2_kb_2x[38], &o2_kb_2x[9]  }, /* 47: ? */
  // Last row (Space key)
  { RETROK_SPACE, 121*2, 168*2, 95*2, 17*2, &o2_kb_2x[48], &o2_kb_2x[48], &o2_kb_2x[42], &o2_kb_2x[4]  }, /* 48: Space */
};

const struct VKey o2_kb_3x[ODYSSEY2_KB_KEYS] =
{
  // 1st row "Numeric" (keys 0 to 9)
  { RETROK_0,   9*3,  12*3, 31*3, 16*3, &o2_kb_3x[9],  &o2_kb_3x[1],  &o2_kb_3x[39], &o2_kb_3x[10] }, /* 0: 0 */
  { RETROK_1,  42*3,  12*3, 31*3, 16*3, &o2_kb_3x[0],  &o2_kb_3x[2],  &o2_kb_3x[39], &o2_kb_3x[11] }, /* 1: 1 */
  { RETROK_2,  74*3,  12*3, 31*3, 16*3, &o2_kb_3x[1],  &o2_kb_3x[3],  &o2_kb_3x[40], &o2_kb_3x[12] }, /* 2: 2 */
  { RETROK_3, 106*3,  12*3, 31*3, 16*3, &o2_kb_3x[2],  &o2_kb_3x[4],  &o2_kb_3x[48], &o2_kb_3x[13] }, /* 3: 3 */
  { RETROK_4, 139*3,  12*3, 31*3, 16*3, &o2_kb_3x[3],  &o2_kb_3x[5],  &o2_kb_3x[48], &o2_kb_3x[14] }, /* 4: 4 */
  { RETROK_5, 171*3,  12*3, 31*3, 16*3, &o2_kb_3x[4],  &o2_kb_3x[6],  &o2_kb_3x[48], &o2_kb_3x[15] }, /* 5: 5 */
  { RETROK_6, 203*3,  12*3, 31*3, 16*3, &o2_kb_3x[5],  &o2_kb_3x[7],  &o2_kb_3x[48], &o2_kb_3x[16] }, /* 6: 6 */
  { RETROK_7, 235*3,  12*3, 31*3, 16*3, &o2_kb_3x[6],  &o2_kb_3x[8],  &o2_kb_3x[45], &o2_kb_3x[17] }, /* 7: 7 */
  { RETROK_8, 267*3,  12*3, 31*3, 16*3, &o2_kb_3x[7],  &o2_kb_3x[9],  &o2_kb_3x[46], &o2_kb_3x[18] }, /* 8: 8 */
  { RETROK_9, 300*3,  12*3, 31*3, 16*3, &o2_kb_3x[8],  &o2_kb_3x[0],  &o2_kb_3x[47], &o2_kb_3x[19] }, /* 9: 9 */
  // 2nd row "Function/Input/Reset" (keys 10 to 19)
  { RETROK_PLUS,   8*3,  44*3, 31*3, 16*3, &o2_kb_3x[19], &o2_kb_3x[11], &o2_kb_3x[0],  &o2_kb_3x[20] }, /* 10: + */
  { RETROK_MINUS,  41*3,  44*3, 31*3, 16*3, &o2_kb_3x[10], &o2_kb_3x[12], &o2_kb_3x[1],  &o2_kb_3x[21] }, /* 11: - */
  { RETROK_ASTERISK,  73*3,  44*3, 31*3, 16*3, &o2_kb_3x[11], &o2_kb_3x[13], &o2_kb_3x[2],  &o2_kb_3x[22] }, /* 12: * */
  { RETROK_SLASH, 105*3,  44*3, 31*3, 16*3, &o2_kb_3x[12], &o2_kb_3x[14], &o2_kb_3x[3],  &o2_kb_3x[23] }, /* 13: % */
  { RETROK_EQUALS, 138*3,  44*3, 31*3, 16*3, &o2_kb_3x[13], &o2_kb_3x[15], &o2_kb_3x[4],  &o2_kb_3x[24] }, /* 14: = */
  { RETROK_LALT, 170*3,  44*3, 31*3, 16*3, &o2_kb_3x[14], &o2_kb_3x[16], &o2_kb_3x[5],  &o2_kb_3x[25] }, /* 15: YES */
  { RETROK_RALT, 202*3,  44*3, 31*3, 16*3, &o2_kb_3x[15], &o2_kb_3x[17], &o2_kb_3x[6],  &o2_kb_3x[26] }, /* 16: NO */
  { RETROK_DELETE, 234*3,  44*3, 31*3, 16*3, &o2_kb_3x[16], &o2_kb_3x[18], &o2_kb_3x[7],  &o2_kb_3x[27] }, /* 17: CLEAR */
  { RETROK_RETURN, 266*3,  44*3, 31*3, 16*3, &o2_kb_3x[17], &o2_kb_3x[19], &o2_kb_3x[8],  &o2_kb_3x[28] }, /* 18: ENTER */
  { RETROK_F5, 299*3,  44*3, 31*3, 16*3, &o2_kb_3x[18], &o2_kb_3x[10], &o2_kb_3x[9],  &o2_kb_3x[29] }, /* 19: RESET */
  // 3rd row (keys 20 to 29)
  { RETROK_q,   8*3,  87*3, 32*3, 17*3, &o2_kb_3x[29], &o2_kb_3x[21], &o2_kb_3x[10], &o2_kb_3x[30] }, /* 20: Q */
  { RETROK_w,  41*3,  87*3, 32*3, 17*3, &o2_kb_3x[20], &o2_kb_3x[22], &o2_kb_3x[11], &o2_kb_3x[31] }, /* 21: W */
  { RETROK_e,  73*3,  87*3, 32*3, 17*3, &o2_kb_3x[21], &o2_kb_3x[23], &o2_kb_3x[12], &o2_kb_3x[32] }, /* 22: E */
  { RETROK_r, 105*3,  87*3, 32*3, 17*3, &o2_kb_3x[22], &o2_kb_3x[24], &o2_kb_3x[13], &o2_kb_3x[33] }, /* 23: R */
  { RETROK_t, 137*3,  87*3, 32*3, 17*3, &o2_kb_3x[23], &o2_kb_3x[25], &o2_kb_3x[14], &o2_kb_3x[34] }, /* 24: T */
  { RETROK_y, 170*3,  87*3, 32*3, 17*3, &o2_kb_3x[24], &o2_kb_3x[26], &o2_kb_3x[15], &o2_kb_3x[35] }, /* 25: Y */
  { RETROK_u, 202*3,  87*3, 32*3, 17*3, &o2_kb_3x[25], &o2_kb_3x[27], &o2_kb_3x[16], &o2_kb_3x[36] }, /* 26: U */
  { RETROK_i, 234*3,  87*3, 32*3, 17*3, &o2_kb_3x[26], &o2_kb_3x[28], &o2_kb_3x[17], &o2_kb_3x[37] }, /* 27: I */
  { RETROK_o, 266*3,  87*3, 32*3, 17*3, &o2_kb_3x[27], &o2_kb_3x[29], &o2_kb_3x[18], &o2_kb_3x[38] }, /* 28: O */
  { RETROK_p, 299*3,  87*3, 32*3, 17*3, &o2_kb_3x[28], &o2_kb_3x[20], &o2_kb_3x[19], &o2_kb_3x[38] }, /* 29: P */
  // 4rd row (keys 30 to 38)
  { RETROK_a,  24*3, 113*3, 32*3, 17*3, &o2_kb_3x[38], &o2_kb_3x[31], &o2_kb_3x[20], &o2_kb_3x[39] }, /* 30: A */
  { RETROK_s,  56*3, 113*3, 32*3, 17*3, &o2_kb_3x[30], &o2_kb_3x[32], &o2_kb_3x[21], &o2_kb_3x[40] }, /* 31: S */
  { RETROK_d,  88*3, 113*3, 32*3, 17*3, &o2_kb_3x[31], &o2_kb_3x[33], &o2_kb_3x[22], &o2_kb_3x[41] }, /* 32: D */
  { RETROK_f, 120*3, 113*3, 32*3, 17*3, &o2_kb_3x[32], &o2_kb_3x[34], &o2_kb_3x[23], &o2_kb_3x[42] }, /* 33: F */
  { RETROK_g, 152*3, 113*3, 32*3, 17*3, &o2_kb_3x[33], &o2_kb_3x[35], &o2_kb_3x[24], &o2_kb_3x[43] }, /* 34: G */
  { RETROK_h, 185*3, 113*3, 32*3, 17*3, &o2_kb_3x[34], &o2_kb_3x[36], &o2_kb_3x[25], &o2_kb_3x[44] }, /* 35: H */
  { RETROK_j, 217*3, 113*3, 32*3, 17*3, &o2_kb_3x[35], &o2_kb_3x[37], &o2_kb_3x[26], &o2_kb_3x[45] }, /* 36: J */
  { RETROK_k, 249*3, 113*3, 32*3, 17*3, &o2_kb_3x[36], &o2_kb_3x[38], &o2_kb_3x[27], &o2_kb_3x[46] }, /* 37: K */
  { RETROK_l, 282*3, 113*3, 32*3, 17*3, &o2_kb_3x[37], &o2_kb_3x[30], &o2_kb_3x[28], &o2_kb_3x[47] }, /* 38: L */
  // 5th row (keys 39 to 47)
  { RETROK_z,  40*3, 139*3, 32*3, 18*3, &o2_kb_3x[47], &o2_kb_3x[40], &o2_kb_3x[30], &o2_kb_3x[1]  }, /* 39: Z */
  { RETROK_x,  72*3, 139*3, 32*3, 18*3, &o2_kb_3x[39], &o2_kb_3x[41], &o2_kb_3x[31], &o2_kb_3x[2]  }, /* 40: X */
  { RETROK_c, 104*3, 139*3, 32*3, 18*3, &o2_kb_3x[40], &o2_kb_3x[42], &o2_kb_3x[32], &o2_kb_3x[48] }, /* 41: C */
  { RETROK_v, 136*3, 139*3, 32*3, 18*3, &o2_kb_3x[41], &o2_kb_3x[43], &o2_kb_3x[33], &o2_kb_3x[48] }, /* 42: V */
  { RETROK_b, 169*3, 139*3, 32*3, 18*3, &o2_kb_3x[42], &o2_kb_3x[44], &o2_kb_3x[34], &o2_kb_3x[48] }, /* 43: B */
  { RETROK_n, 202*3, 139*3, 32*3, 18*3, &o2_kb_3x[43], &o2_kb_3x[45], &o2_kb_3x[35], &o2_kb_3x[48] }, /* 44: N */
  { RETROK_m, 234*3, 139*3, 32*3, 18*3, &o2_kb_3x[44], &o2_kb_3x[46], &o2_kb_3x[36], &o2_kb_3x[7]  }, /* 45: M */
  { RETROK_PERIOD, 266*3, 139*3, 32*3, 18*3, &o2_kb_3x[45], &o2_kb_3x[47], &o2_kb_3x[37], &o2_kb_3x[8]  }, /* 46: . */
  { RETROK_QUESTION, 299*3, 139*3, 32*3, 18*3, &o2_kb_3x[46], &o2_kb_3x[39], &o2_kb_3x[38], &o2_kb_3x[9]  }, /* 47: ? */
  // Last row (Space key)
  { RETROK_SPACE, 121*3, 168*3, 95*3, 17*3, &o2_kb_3x[48], &o2_kb_3x[48], &o2_kb_3x[42], &o2_kb_3x[4]  }, /* 48: Space */
};

const struct VKey o2_kb_4x[ODYSSEY2_KB_KEYS] =
{
  // 1st row "Numeric" (keys 0 to 9)
  { RETROK_0,   9*4,  12*4, 31*4, 16*4, &o2_kb_4x[9],  &o2_kb_4x[1],  &o2_kb_4x[39], &o2_kb_4x[10] }, /* 0: 0 */
  { RETROK_1,  42*4,  12*4, 31*4, 16*4, &o2_kb_4x[0],  &o2_kb_4x[2],  &o2_kb_4x[39], &o2_kb_4x[11] }, /* 1: 1 */
  { RETROK_2,  74*4,  12*4, 31*4, 16*4, &o2_kb_4x[1],  &o2_kb_4x[3],  &o2_kb_4x[40], &o2_kb_4x[12] }, /* 2: 2 */
  { RETROK_3, 106*4,  12*4, 31*4, 16*4, &o2_kb_4x[2],  &o2_kb_4x[4],  &o2_kb_4x[48], &o2_kb_4x[13] }, /* 3: 3 */
  { RETROK_4, 139*4,  12*4, 31*4, 16*4, &o2_kb_4x[3],  &o2_kb_4x[5],  &o2_kb_4x[48], &o2_kb_4x[14] }, /* 4: 4 */
  { RETROK_5, 171*4,  12*4, 31*4, 16*4, &o2_kb_4x[4],  &o2_kb_4x[6],  &o2_kb_4x[48], &o2_kb_4x[15] }, /* 5: 5 */
  { RETROK_6, 203*4,  12*4, 31*4, 16*4, &o2_kb_4x[5],  &o2_kb_4x[7],  &o2_kb_4x[48], &o2_kb_4x[16] }, /* 6: 6 */
  { RETROK_7, 235*4,  12*4, 31*4, 16*4, &o2_kb_4x[6],  &o2_kb_4x[8],  &o2_kb_4x[45], &o2_kb_4x[17] }, /* 7: 7 */
  { RETROK_8, 267*4,  12*4, 31*4, 16*4, &o2_kb_4x[7],  &o2_kb_4x[9],  &o2_kb_4x[46], &o2_kb_4x[18] }, /* 8: 8 */
  { RETROK_9, 300*4,  12*4, 31*4, 16*4, &o2_kb_4x[8],  &o2_kb_4x[0],  &o2_kb_4x[47], &o2_kb_4x[19] }, /* 9: 9 */
  // 2nd row "Function/Input/Reset" (keys 10 to 19)
  { RETROK_PLUS,   8*4,  44*4, 31*4, 16*4, &o2_kb_4x[19], &o2_kb_4x[11], &o2_kb_4x[0],  &o2_kb_4x[20] }, /* 10: + */
  { RETROK_MINUS,  41*4,  44*4, 31*4, 16*4, &o2_kb_4x[10], &o2_kb_4x[12], &o2_kb_4x[1],  &o2_kb_4x[21] }, /* 11: - */
  { RETROK_ASTERISK,  73*4,  44*4, 31*4, 16*4, &o2_kb_4x[11], &o2_kb_4x[13], &o2_kb_4x[2],  &o2_kb_4x[22] }, /* 12: * */
  { RETROK_SLASH, 105*4,  44*4, 31*4, 16*4, &o2_kb_4x[12], &o2_kb_4x[14], &o2_kb_4x[3],  &o2_kb_4x[23] }, /* 13: % */
  { RETROK_EQUALS, 138*4,  44*4, 31*4, 16*4, &o2_kb_4x[13], &o2_kb_4x[15], &o2_kb_4x[4],  &o2_kb_4x[24] }, /* 14: = */
  { RETROK_LALT, 170*4,  44*4, 31*4, 16*4, &o2_kb_4x[14], &o2_kb_4x[16], &o2_kb_4x[5],  &o2_kb_4x[25] }, /* 15: YES */
  { RETROK_RALT, 202*4,  44*4, 31*4, 16*4, &o2_kb_4x[15], &o2_kb_4x[17], &o2_kb_4x[6],  &o2_kb_4x[26] }, /* 16: NO */
  { RETROK_DELETE, 234*4,  44*4, 31*4, 16*4, &o2_kb_4x[16], &o2_kb_4x[18], &o2_kb_4x[7],  &o2_kb_4x[27] }, /* 17: CLEAR */
  { RETROK_RETURN, 266*4,  44*4, 31*4, 16*4, &o2_kb_4x[17], &o2_kb_4x[19], &o2_kb_4x[8],  &o2_kb_4x[28] }, /* 18: ENTER */
  { RETROK_F5, 299*4,  44*4, 31*4, 16*4, &o2_kb_4x[18], &o2_kb_4x[10], &o2_kb_4x[9],  &o2_kb_4x[29] }, /* 19: RESET */
  // 3rd row (keys 20 to 29)
  { RETROK_q,   8*4,  87*4, 32*4, 17*4, &o2_kb_4x[29], &o2_kb_4x[21], &o2_kb_4x[10], &o2_kb_4x[30] }, /* 20: Q */
  { RETROK_w,  41*4,  87*4, 32*4, 17*4, &o2_kb_4x[20], &o2_kb_4x[22], &o2_kb_4x[11], &o2_kb_4x[31] }, /* 21: W */
  { RETROK_e,  73*4,  87*4, 32*4, 17*4, &o2_kb_4x[21], &o2_kb_4x[23], &o2_kb_4x[12], &o2_kb_4x[32] }, /* 22: E */
  { RETROK_r, 105*4,  87*4, 32*4, 17*4, &o2_kb_4x[22], &o2_kb_4x[24], &o2_kb_4x[13], &o2_kb_4x[33] }, /* 23: R */
  { RETROK_t, 137*4,  87*4, 32*4, 17*4, &o2_kb_4x[23], &o2_kb_4x[25], &o2_kb_4x[14], &o2_kb_4x[34] }, /* 24: T */
  { RETROK_y, 170*4,  87*4, 32*4, 17*4, &o2_kb_4x[24], &o2_kb_4x[26], &o2_kb_4x[15], &o2_kb_4x[35] }, /* 25: Y */
  { RETROK_u, 202*4,  87*4, 32*4, 17*4, &o2_kb_4x[25], &o2_kb_4x[27], &o2_kb_4x[16], &o2_kb_4x[36] }, /* 26: U */
  { RETROK_i, 234*4,  87*4, 32*4, 17*4, &o2_kb_4x[26], &o2_kb_4x[28], &o2_kb_4x[17], &o2_kb_4x[37] }, /* 27: I */
  { RETROK_o, 266*4,  87*4, 32*4, 17*4, &o2_kb_4x[27], &o2_kb_4x[29], &o2_kb_4x[18], &o2_kb_4x[38] }, /* 28: O */
  { RETROK_p, 299*4,  87*4, 32*4, 17*4, &o2_kb_4x[28], &o2_kb_4x[20], &o2_kb_4x[19], &o2_kb_4x[38] }, /* 29: P */
  // 4rd row (keys 30 to 38)
  { RETROK_a,  24*4, 113*4, 32*4, 17*4, &o2_kb_4x[38], &o2_kb_4x[31], &o2_kb_4x[20], &o2_kb_4x[39] }, /* 30: A */
  { RETROK_s,  56*4, 113*4, 32*4, 17*4, &o2_kb_4x[30], &o2_kb_4x[32], &o2_kb_4x[21], &o2_kb_4x[40] }, /* 31: S */
  { RETROK_d,  88*4, 113*4, 32*4, 17*4, &o2_kb_4x[31], &o2_kb_4x[33], &o2_kb_4x[22], &o2_kb_4x[41] }, /* 32: D */
  { RETROK_f, 120*4, 113*4, 32*4, 17*4, &o2_kb_4x[32], &o2_kb_4x[34], &o2_kb_4x[23], &o2_kb_4x[42] }, /* 33: F */
  { RETROK_g, 152*4, 113*4, 32*4, 17*4, &o2_kb_4x[33], &o2_kb_4x[35], &o2_kb_4x[24], &o2_kb_4x[43] }, /* 34: G */
  { RETROK_h, 185*4, 113*4, 32*4, 17*4, &o2_kb_4x[34], &o2_kb_4x[36], &o2_kb_4x[25], &o2_kb_4x[44] }, /* 35: H */
  { RETROK_j, 217*4, 113*4, 32*4, 17*4, &o2_kb_4x[35], &o2_kb_4x[37], &o2_kb_4x[26], &o2_kb_4x[45] }, /* 36: J */
  { RETROK_k, 249*4, 113*4, 32*4, 17*4, &o2_kb_4x[36], &o2_kb_4x[38], &o2_kb_4x[27], &o2_kb_4x[46] }, /* 37: K */
  { RETROK_l, 282*4, 113*4, 32*4, 17*4, &o2_kb_4x[37], &o2_kb_4x[30], &o2_kb_4x[28], &o2_kb_4x[47] }, /* 38: L */
  // 5th row (keys 39 to 47)
  { RETROK_z,  40*4, 139*4, 32*4, 18*4, &o2_kb_4x[47], &o2_kb_4x[40], &o2_kb_4x[30], &o2_kb_4x[1]  }, /* 39: Z */
  { RETROK_x,  72*4, 139*4, 32*4, 18*4, &o2_kb_4x[39], &o2_kb_4x[41], &o2_kb_4x[31], &o2_kb_4x[2]  }, /* 40: X */
  { RETROK_c, 104*4, 139*4, 32*4, 18*4, &o2_kb_4x[40], &o2_kb_4x[42], &o2_kb_4x[32], &o2_kb_4x[48] }, /* 41: C */
  { RETROK_v, 136*4, 139*4, 32*4, 18*4, &o2_kb_4x[41], &o2_kb_4x[43], &o2_kb_4x[33], &o2_kb_4x[48] }, /* 42: V */
  { RETROK_b, 169*4, 139*4, 32*4, 18*4, &o2_kb_4x[42], &o2_kb_4x[44], &o2_kb_4x[34], &o2_kb_4x[48] }, /* 43: B */
  { RETROK_n, 202*4, 139*4, 32*4, 18*4, &o2_kb_4x[43], &o2_kb_4x[45], &o2_kb_4x[35], &o2_kb_4x[48] }, /* 44: N */
  { RETROK_m, 234*4, 139*4, 32*4, 18*4, &o2_kb_4x[44], &o2_kb_4x[46], &o2_kb_4x[36], &o2_kb_4x[7]  }, /* 45: M */
  { RETROK_PERIOD, 266*4, 139*4, 32*4, 18*4, &o2_kb_4x[45], &o2_kb_4x[47], &o2_kb_4x[37], &o2_kb_4x[8]  }, /* 46: . */
  { RETROK_QUESTION, 299*4, 139*4, 32*4, 18*4, &o2_kb_4x[46], &o2_kb_4x[39], &o2_kb_4x[38], &o2_kb_4x[9]  }, /* 47: ? */
  // Last row (Space key)
  { RETROK_SPACE, 121*4, 168*4, 95*4, 17*4, &o2_kb_4x[48], &o2_kb_4x[48], &o2_kb_4x[42], &o2_kb_4x[4]  }, /* 48: Space */
};

const struct VKey o2_kb_qftr[ODYSSEY2_KB_KEYS] =
{
  // 1st row "Numeric" (keys 0 to 9)
  { RETROK_0,   8,  4, 32, 31, &o2_kb_qftr[1],  &o2_kb_qftr[1],  &o2_kb_qftr[9], &o2_kb_qftr[2] }, /* 0: START */
  // 2nd row "Function/Input/Reset" (keys 10 to 19)
  { RETROK_F5, 298,  38, 32, 31, &o2_kb_qftr[0], &o2_kb_qftr[0], &o2_kb_qftr[0],  &o2_kb_qftr[4] }, /* 1: RESET */
  // 3rd row (keys 20 to 29)
  { RETROK_w,  37,  81, 32, 31, &o2_kb_qftr[4], &o2_kb_qftr[3], &o2_kb_qftr[0], &o2_kb_qftr[5] }, /* 2: NO RING */
  { RETROK_t, 134,  81, 32, 31, &o2_kb_qftr[2], &o2_kb_qftr[4], &o2_kb_qftr[1], &o2_kb_qftr[6] }, /* 3: DRAGONS */
  { RETROK_i, 232,  81, 32, 31, &o2_kb_qftr[3], &o2_kb_qftr[2], &o2_kb_qftr[1], &o2_kb_qftr[8] }, /* 4: NIGHTMARES */
  // 4rd row (keys 30 to 38)
  // 5th row (keys 39 to 47)
  { RETROK_z,  37, 132, 32, 31, &o2_kb_qftr[8], &o2_kb_qftr[6], &o2_kb_qftr[2], &o2_kb_qftr[9]  }, /* 5: DUNGEONS */
  { RETROK_c, 101, 132, 32, 31, &o2_kb_qftr[5], &o2_kb_qftr[7], &o2_kb_qftr[3], &o2_kb_qftr[9] }, /* 6: CAVERNS */
  { RETROK_b, 165, 132, 32, 31, &o2_kb_qftr[6], &o2_kb_qftr[8], &o2_kb_qftr[3], &o2_kb_qftr[9] }, /* 7: INFERNOES */
  { RETROK_PERIOD, 263, 132, 32, 31, &o2_kb_qftr[7], &o2_kb_qftr[5], &o2_kb_qftr[4], &o2_kb_qftr[9]  }, /* 8: HALLS */
  // Last row (Space key)
  { RETROK_SPACE, 143, 161, 32, 31, &o2_kb_qftr[5], &o2_kb_qftr[8], &o2_kb_qftr[7], &o2_kb_qftr[0]  }, /* 9: RINGMASTER */
};

const struct VKey o2_kb_qftr_2x[ODYSSEY2_KB_KEYS] =
{
  // 1st row "Numeric" (keys 0 to 9)
  { RETROK_0,   8*2,  4*2, 32*2, 31*2, &o2_kb_qftr_2x[1],  &o2_kb_qftr_2x[1],  &o2_kb_qftr_2x[9], &o2_kb_qftr_2x[2] }, /* 0: START */
  // 2nd row "Function/Input/Reset" (keys 10 to 19)
  { RETROK_F5, 298*2,  38*2, 32*2, 31*2, &o2_kb_qftr_2x[0], &o2_kb_qftr_2x[0], &o2_kb_qftr_2x[0],  &o2_kb_qftr_2x[4] }, /* 1: RESET */
  // 3rd row (keys 20 to 29)
  { RETROK_w,  37*2,  81*2, 32*2, 31*2, &o2_kb_qftr_2x[4], &o2_kb_qftr_2x[3], &o2_kb_qftr_2x[0], &o2_kb_qftr_2x[5] }, /* 2: NO RING */
  { RETROK_t, 134*2,  81*2, 32*2, 31*2, &o2_kb_qftr_2x[2], &o2_kb_qftr_2x[4], &o2_kb_qftr_2x[1], &o2_kb_qftr_2x[5] }, /* 3: DRAGONS */
  { RETROK_i, 232*2,  81*2, 32*2, 31*2, &o2_kb_qftr_2x[3], &o2_kb_qftr_2x[2], &o2_kb_qftr_2x[1], &o2_kb_qftr_2x[8] }, /* 4: NIGHTMARES */
  // 4rd row (keys 30 to 38)
  // 5th row (keys 39 to 47)
  { RETROK_z,  37*2, 132*2, 32*2, 31*2, &o2_kb_qftr_2x[8], &o2_kb_qftr_2x[6], &o2_kb_qftr_2x[2], &o2_kb_qftr_2x[9]  }, /* 5: DUNGEONS */
  { RETROK_c, 104*2, 132*2, 32*2, 31*2, &o2_kb_qftr_2x[5], &o2_kb_qftr_2x[7], &o2_kb_qftr_2x[3], &o2_kb_qftr_2x[9] }, /* 6: CAVERNS */
  { RETROK_b, 166*2, 132*2, 32*2, 31*2, &o2_kb_qftr_2x[6], &o2_kb_qftr_2x[8], &o2_kb_qftr_2x[3], &o2_kb_qftr_2x[9] }, /* 7: INFERNOES */
  { RETROK_PERIOD, 263*2, 132*2, 32*2, 31*2, &o2_kb_qftr_2x[7], &o2_kb_qftr_2x[5], &o2_kb_qftr_2x[4], &o2_kb_qftr_2x[9]  }, /* 8: HALLS */
  // Last row (Space key)
  { RETROK_SPACE, 143*2, 161*2, 32*2, 31*2, &o2_kb_qftr_2x[5], &o2_kb_qftr_2x[8], &o2_kb_qftr_2x[7], &o2_kb_qftr_2x[0]  }, /* 9: RINGMASTER */
};

const struct VKey o2_kb_qftr_3x[ODYSSEY2_KB_KEYS] =
{
  // 1st row "Numeric" (keys 0 to 9)
  { RETROK_0,   8*3,  4*3, 32*3, 31*3, &o2_kb_qftr_3x[1],  &o2_kb_qftr_3x[1],  &o2_kb_qftr_3x[9], &o2_kb_qftr_3x[2] }, /* 0: START */
  // 2nd row "Function/Input/Reset" (keys 10 to 19)
  { RETROK_F5, 298*3,  38*3, 32*3, 31*3, &o2_kb_qftr_3x[0], &o2_kb_qftr_3x[0], &o2_kb_qftr_3x[0],  &o2_kb_qftr_3x[4] }, /* 1: RESET */
  // 3rd row (keys 20 to 29)
  { RETROK_w,  37*3,  81*3, 32*3, 31*3, &o2_kb_qftr_3x[4], &o2_kb_qftr_3x[3], &o2_kb_qftr_3x[0], &o2_kb_qftr_3x[5] }, /* 2: NO RING */
  { RETROK_t, 134*3,  81*3, 32*3, 31*3, &o2_kb_qftr_3x[2], &o2_kb_qftr_3x[4], &o2_kb_qftr_3x[1], &o2_kb_qftr_3x[5] }, /* 3: DRAGONS */
  { RETROK_i, 232*3,  81*3, 32*3, 31*3, &o2_kb_qftr_3x[3], &o2_kb_qftr_3x[2], &o2_kb_qftr_3x[1], &o2_kb_qftr_3x[8] }, /* 4: NIGHTMARES */
  // 4rd row (keys 30 to 38)
  // 5th row (keys 39 to 47)
  { RETROK_z,  37*3, 132*3, 32*3, 31*3, &o2_kb_qftr_3x[8], &o2_kb_qftr_3x[6], &o2_kb_qftr_3x[2], &o2_kb_qftr_3x[9]  }, /* 5: DUNGEONS */
  { RETROK_c, 104*3, 132*3, 32*3, 31*3, &o2_kb_qftr_3x[5], &o2_kb_qftr_3x[7], &o2_kb_qftr_3x[3], &o2_kb_qftr_3x[9] }, /* 6: CAVERNS */
  { RETROK_b, 166*3, 132*3, 32*3, 31*3, &o2_kb_qftr_3x[6], &o2_kb_qftr_3x[8], &o2_kb_qftr_3x[3], &o2_kb_qftr_3x[9] }, /* 7: INFERNOES */
  { RETROK_PERIOD, 263*3, 132*3, 32*3, 31*3, &o2_kb_qftr_3x[7], &o2_kb_qftr_3x[5], &o2_kb_qftr_3x[4], &o2_kb_qftr_3x[9]  }, /* 8: HALLS */
  // Last row (Space key)
  { RETROK_SPACE, 143*3, 161*3, 32*3, 31*3, &o2_kb_qftr_3x[5], &o2_kb_qftr_3x[8], &o2_kb_qftr_3x[7], &o2_kb_qftr_3x[0]  }, /* 9: RINGMASTER */
};

const struct VKey o2_kb_qftr_4x[ODYSSEY2_KB_KEYS] =
{
  // 1st row "Numeric" (keys 0 to 9)
  { RETROK_0,   8*4,  4*4, 32*4, 31*4, &o2_kb_qftr_4x[1],  &o2_kb_qftr_4x[1],  &o2_kb_qftr_4x[9], &o2_kb_qftr_4x[2] }, /* 0: START */
  // 2nd row "Function/Input/Reset" (keys 10 to 19)
  { RETROK_F5, 298*4,  38*4, 32*4, 31*4, &o2_kb_qftr_4x[0], &o2_kb_qftr_4x[0], &o2_kb_qftr_4x[0],  &o2_kb_qftr_4x[4] }, /* 1: RESET */
  // 3rd row (keys 20 to 29)
  { RETROK_w,  37*4,  81*4, 32*4, 31*4, &o2_kb_qftr_4x[4], &o2_kb_qftr_4x[3], &o2_kb_qftr_4x[0], &o2_kb_qftr_4x[5] }, /* 2: NO RING */
  { RETROK_t, 134*4,  81*4, 32*4, 31*4, &o2_kb_qftr_4x[2], &o2_kb_qftr_4x[4], &o2_kb_qftr_4x[1], &o2_kb_qftr_4x[5] }, /* 3: DRAGONS */
  { RETROK_i, 232*4,  81*4, 32*4, 31*4, &o2_kb_qftr_4x[3], &o2_kb_qftr_4x[2], &o2_kb_qftr_4x[1], &o2_kb_qftr_4x[8] }, /* 4: NIGHTMARES */
  // 4rd row (keys 30 to 38)
  // 5th row (keys 39 to 47)
  { RETROK_z,  37*4, 132*4, 32*4, 31*4, &o2_kb_qftr_4x[8], &o2_kb_qftr_4x[6], &o2_kb_qftr_4x[2], &o2_kb_qftr_4x[9]  }, /* 5: DUNGEONS */
  { RETROK_c, 104*4, 132*4, 32*4, 31*4, &o2_kb_qftr_4x[5], &o2_kb_qftr_4x[7], &o2_kb_qftr_4x[3], &o2_kb_qftr_4x[9] }, /* 6: CAVERNS */
  { RETROK_b, 166*4, 132*4, 32*4, 31*4, &o2_kb_qftr_4x[6], &o2_kb_qftr_4x[8], &o2_kb_qftr_4x[3], &o2_kb_qftr_4x[9] }, /* 7: INFERNOES */
  { RETROK_PERIOD, 263*4, 132*4, 32*4, 31*4, &o2_kb_qftr_4x[7], &o2_kb_qftr_4x[5], &o2_kb_qftr_4x[4], &o2_kb_qftr_4x[9]  }, /* 8: HALLS */
  // Last row (Space key)
  { RETROK_SPACE, 143*4, 161*4, 32*4, 31*4, &o2_kb_qftr_4x[5], &o2_kb_qftr_4x[8], &o2_kb_qftr_4x[7], &o2_kb_qftr_4x[0]  }, /* 9: RINGMASTER */
};