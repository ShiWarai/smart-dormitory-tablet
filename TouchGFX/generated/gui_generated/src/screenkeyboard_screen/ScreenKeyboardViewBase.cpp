/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screenkeyboard_screen/ScreenKeyboardViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

ScreenKeyboardViewBase::ScreenKeyboardViewBase() :
    flexButtonCallback(this, &ScreenKeyboardViewBase::flexButtonCallbackHandler)
{

    __background.setPosition(0, 0, 480, 272);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));

    background.setXY(0, 0);
    background.setBitmap(touchgfx::Bitmap(BITMAP_BLUE_BACKGROUNDS_MAIN_BG_480X272PX_ID));

    exitButton.setBoxWithBorderPosition(0, 0, 50, 50);
    exitButton.setBorderSize(0);
    exitButton.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(212, 36, 36), touchgfx::Color::getColorFromRGB(153, 9, 14), touchgfx::Color::getColorFromRGB(107, 0, 0), touchgfx::Color::getColorFromRGB(145, 0, 0));
    exitButton.setIconBitmaps(Bitmap(BITMAP_BLUE_ICONS_EJECT_32_ID), Bitmap(BITMAP_BLUE_ICONS_EJECT_32_ID));
    exitButton.setIconXY(12, 10);
    exitButton.setPosition(430, 222, 50, 50);
    exitButton.setAction(flexButtonCallback);

    enterTitle.setPosition(0, 6, 480, 27);
    enterTitle.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    enterTitle.setLinespacing(0);
    enterTitle.setWildcard(touchgfx::TypedText(T_INPUTNAME).getText());
    enterTitle.setTypedText(touchgfx::TypedText(T___SINGLEUSE_UIRN));

    enterButton.setBoxWithBorderPosition(0, 0, 50, 50);
    enterButton.setBorderSize(0);
    enterButton.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(96, 183, 230), touchgfx::Color::getColorFromRGB(140, 185, 245), touchgfx::Color::getColorFromRGB(107, 0, 0), touchgfx::Color::getColorFromRGB(145, 0, 0));
    enterButton.setIconBitmaps(Bitmap(BITMAP_BLUE_ICONS_DONE_32_ID), Bitmap(BITMAP_BLUE_ICONS_DONE_32_ID));
    enterButton.setIconXY(10, 10);
    enterButton.setPosition(0, 222, 50, 50);
    enterButton.setAction(flexButtonCallback);

    add(__background);
    add(background);
    add(exitButton);
    add(enterTitle);
    add(enterButton);
}

void ScreenKeyboardViewBase::setupScreen()
{

}

void ScreenKeyboardViewBase::flexButtonCallbackHandler(const touchgfx::AbstractButtonContainer& src)
{
    if (&src == &exitButton)
    {
        //goBack1
        //When exitButton clicked call virtual function
        //Call goBack
        goBack();
    }
    else if (&src == &enterButton)
    {
        //updateInput
        //When enterButton clicked call virtual function
        //Call updateInputBuffer
        updateInputBuffer();

        //goBack2
        //When updateInput completed call virtual function
        //Call goBack
        goBack();
    }
}
