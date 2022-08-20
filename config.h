//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{" ",           "sb-memory",							10,		6},
	{"",            "sb-volume",							 0,		3},
	{"",            "sb-battery",							 5,		7},
	{"",		"sb-internet",							 5,		2},
	{"",            "sb-time",							60,		4},
	{"", 		"sb-date",						     86400,		5},
	{"", 		"sb-xkb-layout",						 0,		1},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
