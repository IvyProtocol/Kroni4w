/* Taken from https://github.com/djpohly/dwl/issues/466 */
#define COLOR(hex)    { ((hex >> 24) & 0xFF) / 255.0f, \
                        ((hex >> 16) & 0xFF) / 255.0f, \
                        ((hex >> 8) & 0xFF) / 255.0f, \
                        (hex & 0xFF) / 255.0f }

static const float rootcolor[]             = COLOR(0x0e1321ff);
static uint32_t colors[][3]                = {
	/*               fg          bg          border    */
	[SchemeNorm] = { 0xc2c4c7ff, 0x0e1321ff, 0x5d6272ff },
	[SchemeSel]  = { 0xc2c4c7ff, 0x61606Cff, 0x4B4B54ff },
	[SchemeUrg]  = { 0xc2c4c7ff, 0x4B4B54ff, 0x61606Cff },
};
