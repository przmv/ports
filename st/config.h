/* See LICENSE file for copyright and license details. */

/* appearance */
static char font[] = "Terminus:file=ter-x12n.pcf.gz";
static unsigned int borderpx = 2;
static char shell[] = "/bin/sh";

/* double-click timeout (in milliseconds) between clicks for selection */
static unsigned int doubleclicktimeout = 300;
static unsigned int tripleclicktimeout = 600;

/* TERM value */
static char termname[] = "st-256color";

static unsigned int tabspaces = 8;


/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {
	/* 8 normal colors */
	"#121212",
	"#d78787",
	"#afd787",
	"#f7f7af",
	"#87afd7",
	"#d7afd7",
	"#afd7d7",
	"#e6e6e6",

	/* 8 bright colors */
	"#0a0a0a",
	"#df8787",
	"#afdf87",
	"#ffffaf",
	"#87afdf",
	"#dfafdf",
	"#afdfdf",
	"#eeeeee",

	[255] = 0,

	/* more colors can be added after 255 to use with DefaultXX */
	"#d0d0d0",
	"#1c1c1c",
	"#ffaf00",
};


/*
 * Default colors (colorname index)
 * foreground, background, cursor, unfocused cursor
 */
static unsigned int defaultfg = 256;
static unsigned int defaultbg = 257;
static unsigned int defaultcs = 258;
static unsigned int defaultucs = 0;

/*
 * Special keys (change & recompile st.info accordingly)
 * Keep in mind that kpress() in st.c hardcodes some keys.
 *
 * Mask value:
 * * Use XK_ANY_MOD to match the key no matter modifiers state
 * * Use XK_NO_MOD to match the key alone (no modifiers)
 */

/* key, mask, output */
static Key key[] = {
	{ XK_BackSpace, XK_NO_MOD, "\177" },
	{ XK_Insert,    XK_NO_MOD, "\033[2~" },
	{ XK_Delete,    XK_NO_MOD, "\033[3~" },
	{ XK_Home,      XK_NO_MOD, "\033[1~" },
	{ XK_End,       XK_NO_MOD, "\033[4~" },
	{ XK_Prior,     XK_NO_MOD, "\033[5~" },
	{ XK_Next,      XK_NO_MOD, "\033[6~" },
	{ XK_F1,        XK_NO_MOD, "\033OP"   },
	{ XK_F2,        XK_NO_MOD, "\033OQ"   },
	{ XK_F3,        XK_NO_MOD, "\033OR"   },
	{ XK_F4,        XK_NO_MOD, "\033OS"   },
	{ XK_F5,        XK_NO_MOD, "\033[15~" },
	{ XK_F6,        XK_NO_MOD, "\033[17~" },
	{ XK_F7,        XK_NO_MOD, "\033[18~" },
	{ XK_F8,        XK_NO_MOD, "\033[19~" },
	{ XK_F9,        XK_NO_MOD, "\033[20~" },
	{ XK_F10,       XK_NO_MOD, "\033[21~" },
	{ XK_F11,       XK_NO_MOD, "\033[23~" },
	{ XK_F12,       XK_NO_MOD, "\033[24~" },
};

/* Internal shortcuts. */
#define MODKEY Mod1Mask

static Shortcut shortcuts[] = {
	/* modifier		key		function	argument */
	{ MODKEY|ShiftMask,	XK_Prior,	xzoom,		{.i = +1} },
	{ MODKEY|ShiftMask,	XK_Next,	xzoom,		{.i = -1} },
};

