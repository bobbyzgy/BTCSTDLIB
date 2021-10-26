#ifndef __BCOLOR_H__
#define __BCOLOR_H__

typedef enum ConsoleFG
{
	FG_BLACK   = 30,
	FG_RED     = 31,
	FG_GREEN   = 32,
	FG_YELLOW  = 33,
	FG_BLUE    = 34,
	FG_PURPLE  = 35,
	FG_CYAN    = 36,
	FG_WHITE   = 37,
    FG_DEFAULT = 999
} ConsoleFG;

typedef enum ConsoleBG
{
	BG_BLACK   = 40,
	BG_RED     = 41,
	BG_GREEN   = 42,
	BG_YELLOW  = 43,
	BG_BLUE    = 44,
	BG_PURPLE  = 45,
	BG_CYAN    = 46,
	BG_WHITE   = 47,
    BG_DEFAULT = 999
} ConsoleBG;

typedef enum ConsoleSTYLE
{
	ST_NORMAL  = 0,
	ST_BOLD    = 1,
	ST_LIGHT   = 2,
	ST_ITALIC  = 3,
	ST_UDLINE  = 4,
	ST_BLINK   = 5,
    ST_DEFAULT = 999
} ConsoleSTYLE;


#endif
