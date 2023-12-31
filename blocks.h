//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
{"| メモリ:", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	5,		0},
    {"電池:", "acpi | awk '{print $4}' | sed s/,//",          5,       0},
	{"年", "date '+%Y/月%m/日%d | 時間%H:%M |'",                  5,       0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
