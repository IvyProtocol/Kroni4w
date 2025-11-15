/* Taken from https://github.com/djpohly/dwl/issues/466 */
#define COLOR(hex)    { ((hex >> 24) & 0xFF) / 255.0f, \
                        ((hex >> 16) & 0xFF) / 255.0f, \
                        ((hex >> 8) & 0xFF) / 255.0f, \
                        (hex & 0xFF) / 255.0f }

static const float rootcolor[]             = COLOR(0x150915ff);
static uint32_t colors[][3]                = {
	/*               fg          bg          border    */
	[SchemeNorm] = { 0xc4c1c4ff, 0x150915ff, 0x6c586cff },
	[SchemeSel]  = { 0xc4c1c4ff, 0x4B315Fff, 0x382667ff },
	[SchemeUrg]  = { 0xc4c1c4ff, 0x382667ff, 0x4B315Fff },
};
