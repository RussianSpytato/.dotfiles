//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/					/*Update Interval*/	/*Update Signal*/
	{"[ ", "brightnessctl | awk '/Current/ {print $4}' | tr -d '()'",	0,			2},

	{"", "battery",								1,			0},

	{"", "vol",								0,			10},

	{"", "date '+%D %H:%M'",						60,			0},


};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
