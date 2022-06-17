/* DO NOT EDIT THIS FILE */
/* This file is autogenerated by the text-database code generator */

#ifndef TOUCHGFX_APPLICATIONFONTPROVIDER_HPP
#define TOUCHGFX_APPLICATIONFONTPROVIDER_HPP

#include <touchgfx/FontManager.hpp>

namespace touchgfx
{
class FlashDataReader;
}

struct Typography
{
    static const touchgfx::FontId DEFAULT = 0;
    static const touchgfx::FontId LARGE = 1;
    static const touchgfx::FontId SMALL = 2;
    static const touchgfx::FontId TYPOGRAPHY_00 = 3;
    static const touchgfx::FontId RUSSIAN = 4;
    static const touchgfx::FontId ENGLISH = 5;
    static const touchgfx::FontId NUMBER = 6;
    static const touchgfx::FontId FIO = 7;
    static const touchgfx::FontId DATE = 8;
    static const touchgfx::FontId ROOM = 9;
    static const touchgfx::FontId PINCODE = 10;
    static const touchgfx::FontId DISPLAY = 11;
    static const touchgfx::FontId KEYBOARD = 12;
    static const touchgfx::FontId MODE = 13;
};

struct TypographyFontIndex
{
    static const touchgfx::FontId DEFAULT = 0;       // verdana_25_4bpp
    static const touchgfx::FontId LARGE = 1;         // verdana_40_4bpp
    static const touchgfx::FontId SMALL = 2;         // verdana_10_4bpp
    static const touchgfx::FontId TYPOGRAPHY_00 = 3; // trebucbi_48_4bpp
    static const touchgfx::FontId RUSSIAN = 4;       // verdana_20_4bpp
    static const touchgfx::FontId ENGLISH = 4;       // verdana_20_4bpp
    static const touchgfx::FontId NUMBER = 4;        // verdana_20_4bpp
    static const touchgfx::FontId FIO = 4;           // verdana_20_4bpp
    static const touchgfx::FontId DATE = 4;          // verdana_20_4bpp
    static const touchgfx::FontId ROOM = 4;          // verdana_20_4bpp
    static const touchgfx::FontId PINCODE = 4;       // verdana_20_4bpp
    static const touchgfx::FontId DISPLAY = 5;       // arial_28_4bpp
    static const touchgfx::FontId KEYBOARD = 6;      // arial_20_4bpp
    static const touchgfx::FontId MODE = 7;          // arial_24_4bpp
    static const uint16_t NUMBER_OF_FONTS = 8;
};

class ApplicationFontProvider : public touchgfx::FontProvider
{
public:
    virtual touchgfx::Font* getFont(touchgfx::FontId typography);

    static void setFlashReader(touchgfx::FlashDataReader* /* flashReader */)
    {
    }
    static touchgfx::FlashDataReader* getFlashReader()
    {
        return 0;
    }
};

#endif // TOUCHGFX_APPLICATIONFONTPROVIDER_HPP
