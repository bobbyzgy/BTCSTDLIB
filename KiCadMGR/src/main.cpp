#include "main.h"

int main(int argc, char *argv[])
{
    // std::string os_info = getenv("OS");
    // for(auto &c: os_info){
    //     c = tolower(c);
    // }
    system("");
    // std::cout << os_info << std::endl;
    int tmp = 1;
    printf("\x1b[1;31;40m AAAAA \x1b[0;0m\x1b[32;40m BBBBB \x1b[0;0m\n");
    printf("\x1b[1;31;40m AAAAA \x1b[36;40m BBBBB \x1b[0;0m\n");
    std::string a = "abc";
    // MyPrintf("This is Customized Printf %d => %s", tmp, a.c_str());
    Biostream Bout;
    Bout << Bout.info << tmp << " " << Bout.endl;
    Bout << Bout.warn << a << Bout.endl;
    return 0;
}


// void MyPrintf(const char *cmd, ...)  
// {  
//     va_list args;
//     va_start(args, cmd);
//     vprintf(cmd, args);
//     va_end(args);
// }
