// These functions allow to include a file those name is given in parameters

#include "./../conf/selectFonts.h"

#ifndef DEFAULT_FONT_DEFINED
    #include QUOTE(INCLUDE_FONT(DEFAULT_FONT_NAME))
#endif
