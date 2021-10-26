#include "Biostream.h"

Biostream Biostream::operator<<(int value)
{
    printf("%s%d%s", this->prefix, value, this->suffix);
    return *this;
}

Biostream Biostream::operator<<(const char* str)
{
    printf("%s%s%s", this->prefix, str, this->suffix);
    return *this;
}

Biostream Biostream::operator<<(char* str)
{
    printf("%s%s%s", this->prefix, str, this->suffix);
    return *this;
}

Biostream Biostream::operator<<(std::string str)
{
    printf("%s%s%s", this->prefix, str.c_str(), this->suffix);
    return *this;
}

Biostream Biostream::operator<<(CMDSTR cmd)
{
    if(cmd == info_val){
        this->fg_cfg = FG_GREEN;
        this->bg_cfg = BG_BLACK;
        this->st_cfg = ST_NORMAL;
    } else if(cmd == warn_val){
        this->fg_cfg = FG_YELLOW;
        this->bg_cfg = BG_BLACK;
        this->st_cfg = ST_BOLD;
    } else if(cmd == error_val){
        this->fg_cfg = FG_RED;
        this->bg_cfg = BG_BLACK;
        this->st_cfg = ST_BOLD;
    } else if(cmd == endl_val){
        this->fg_cfg = FG_DEFAULT;
        this->bg_cfg = BG_DEFAULT;
        this->st_cfg = ST_DEFAULT;
    } else{
        printf("CMD not found\n");
    }
    this->update_prefix();
    return *this;
}

void Biostream::update_prefix(void)
{   
    static std::string str = "\x1b[";
    if(this->st_cfg == ST_DEFAULT){
        str += std::to_string(0);
    } else {
        str += std::to_string(this->st_cfg);
    }
    if(this->fg_cfg != FG_DEFAULT){
        str += ";" + std::to_string(this->fg_cfg);
    }
    if(this->bg_cfg != BG_DEFAULT){
        str += ";" + std::to_string(this->bg_cfg);
    }
    str += "m\n";
    this->prefix = (char *)str.c_str();    
}
