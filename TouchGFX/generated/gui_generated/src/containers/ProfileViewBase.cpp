/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/containers/ProfileViewBase.hpp>
#include <BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>
#include <touchgfx/Color.hpp>

ProfileViewBase::ProfileViewBase() :
    buttonCallback(this, &ProfileViewBase::buttonCallbackHandler)
{
    setWidth(480);
    setHeight(272);
    exitButton.setXY(310, 212);
    exitButton.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_SMALL_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_SMALL_PRESSED_ID));
    exitButton.setAction(buttonCallback);

    exitTitle.setPosition(310, 227, 170, 30);
    exitTitle.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    exitTitle.setLinespacing(0);
    exitTitle.setTypedText(touchgfx::TypedText(T___SINGLEUSE_6U0X));

    titleText.setPosition(0, 0, 480, 30);
    titleText.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    titleText.setLinespacing(0);
    Unicode::snprintf(titleTextBuffer, TITLETEXT_SIZE, "%s", touchgfx::TypedText(T_STUDENTID).getText());
    titleText.setWildcard(titleTextBuffer);
    titleText.setTypedText(touchgfx::TypedText(T___SINGLEUSE_DQ0S));

    profileData.setPosition(0, 30, 480, 182);
    profileData.setScrollbarsColor(touchgfx::Color::getColorFromRGB(0, 0, 0));

    add(exitButton);
    add(exitTitle);
    add(titleText);
    add(profileData);
}

void ProfileViewBase::initialize()
{

}

void ProfileViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &exitButton)
    {
        //exit
        //When exitButton clicked change screen to WaitingScreen
        //Go to WaitingScreen with no screen transition
        application().gotoWaitingScreenScreenNoTransition();
    }
}

