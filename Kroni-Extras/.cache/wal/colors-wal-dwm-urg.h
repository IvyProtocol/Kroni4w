static const char norm_fg[] = "#c4c1c4";
static const char norm_bg[] = "#150915";
static const char norm_border[] = "#6c586c";

static const char sel_fg[] = "#c4c1c4";
static const char sel_bg[] = "#4B315F";
static const char sel_border[] = "#c4c1c4";

static const char urg_fg[] = "#c4c1c4";
static const char urg_bg[] = "#382667";
static const char urg_border[] = "#382667";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
