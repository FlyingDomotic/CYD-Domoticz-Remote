/* Declare small, medium, large and default fonts

    Here are defined SMALL_FONT_NAME, MEDIUM_FONT_NAME, LARGE_FONT_NAME and DEFAULT_FONT_NAME.
    Names on these defines should exist as font under .h extension
    If DEFAULT_FONT_NAME is already defined as small, medium or large font,
        DEFAULT_FONT_DEFINED should be defined to avoid multiple definition of the same font.
    Standard font names ends with size, while custom ones ends with _custom.
    You may change custom fonts content editing makeCustomFonts.sh and executing it to generate new custom files.
    To switch to custom fonts (either modified or not), please define CUSTOM_FONT in platformio.ini.
    
*/

#if DEVICE_SIZE == 1
    #ifdef CUSTOM_FONT
        #define LARGE_FONT_NAME Montserrat_bold_14_custom
        #define MEDIUM_FONT_NAME Montserrat_12_custom
        #define SMALL_FONT_NAME Montserrat_10_custom
    #else
        #define LARGE_FONT_NAME Montserrat_bold_14
        #define MEDIUM_FONT_NAME Montserrat_12
        #define SMALL_FONT_NAME Montserrat_10
    #endif
    #define DEFAULT_FONT_NAME Montserrat_14
#else
    #ifdef CUSTOM_FONT
        #define LARGE_FONT_NAME Montserrat_bold_18_custom
        #define MEDIUM_FONT_NAME Montserrat_16_custom
        #define SMALL_FONT_NAME Montserrat_14_custom
        #define DEFAULT_FONT_NAME Montserrat_14_custom
        #define DEFAULT_FONT_DEFINED // Default font already defined (as SMALL_FONT)
    #else
        #define LARGE_FONT_NAME Montserrat_bold_18
        #define MEDIUM_FONT_NAME Montserrat_16
        #define SMALL_FONT_NAME Montserrat_14
        #define DEFAULT_FONT_NAME Montserrat_14
        #define DEFAULT_FONT_DEFINED // Default font already defined (as SMALL_FONT)
    #endif
#endif

// Macros used to include font files from defined name
#define INCLUDE_FONT(name) name.h
#define XQUOTE(X) #X
#define QUOTE(X) XQUOTE(X)
