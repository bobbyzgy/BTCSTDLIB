#ifndef __BIOSTREAM_H__
#define __BIOSTREAM_H__

#include <iostream>
#include <string>
#include "Bcolor.h"
#include <cstdio>

class Biostream
{
    
private:
    typedef enum {info_val, warn_val, error_val, endl_val} CMDSTR;
    ConsoleFG    fg_cfg = FG_DEFAULT;
    ConsoleBG    bg_cfg = BG_DEFAULT;
    ConsoleSTYLE st_cfg = ST_DEFAULT;

    char *prefix;
    const char *suffix = "\x1b[0;0m\n";
    void update_prefix(void);
public:
    CMDSTR info = info_val;
    CMDSTR warn = warn_val;
    CMDSTR error = error_val;
    CMDSTR endl = endl_val;
    Biostream operator<<(int value);
    Biostream operator<<(char* str);
    Biostream operator<<(const char* str);
    Biostream operator<<(std::string str);
    Biostream operator<<(CMDSTR cmd);

    // Biostream info(void);
    // Biostream warn(void);
    // Biostream error(void);

};



#endif