// Modify this file to change what commands output to your statusbar, and
// recompile using the make command.
static const Block blocks[] = {
    /*Icon*/ /*Command*/ /*Update Interval*/ /*Update Signal*/
    /* {"⌨", "sb-kbselect", 0, 30}, */
    {"", "cat /tmp/recordingicon 2>/dev/null", 0, 9},
    //	{"",	"sb-tasks",	10,	26},
    {"", "sb-music", 0, 11},
    //	{"",	"sb-pacpackages",	0,	8},
    //	{"",	"sb-torrent",	20,	7},
    {"^c#83a598^",	"sb-cpupercentage",	2,	7},
    {"^c#fe8019^", "sb-memory", 2, 14},
    {"^c#fb4934^", "sb-cpu", 10, 18}, // temperature
    /* {"",	"sb-forecast",	1800,	5}, */
    //	{"",	"sb-mailbox",	180,	12},
    /* {"^c#458588^", "sb-nettraf", 1, 16}, */
    {"^c#d3869b^", "sb-volume", 0, 10},
    {"^c#8ec07c^", "sb-battery", 5, 3},
    {"^c#b8bb26^", "sb-internet", 5, 4},
    {"^c#fabd2f^", "sb-clock", 1, 1},
    //	{"",	"sb-help-icon",	0,	15},
};

// Sets delimiter between status commands. NULL character ('\0') means no
// delimiter. static char *delim = "⌡◉❲";
/* static char *delim = ""; */
static char *delim = "^d^";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd
// ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid
// dwmblocks & }

