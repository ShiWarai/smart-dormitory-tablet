/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef SCREENKEYBOARDVIEWBASE_HPP
#define SCREENKEYBOARDVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/screenkeyboard_screen/ScreenKeyboardPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/containers/buttons/Buttons.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>

class ScreenKeyboardViewBase : public touchgfx::View<ScreenKeyboardPresenter>
{
public:
    ScreenKeyboardViewBase();
    virtual ~ScreenKeyboardViewBase() {}
    virtual void setupScreen();

    /*
     * Virtual Action Handlers
     */
    virtual void updateInputBuffer()
    {
        // Override and implement this function in ScreenKeyboard
    }

    virtual void goBack()
    {
        // Override and implement this function in ScreenKeyboard
    }

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::Image background;
    touchgfx::IconButtonStyle< touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  >  exitButton;
    touchgfx::TextAreaWithOneWildcard enterTitle;
    touchgfx::IconButtonStyle< touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  >  enterButton;

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<ScreenKeyboardViewBase, const touchgfx::AbstractButtonContainer&> flexButtonCallback;

    /*
     * Callback Handler Declarations
     */
    void flexButtonCallbackHandler(const touchgfx::AbstractButtonContainer& src);

};

#endif // SCREENKEYBOARDVIEWBASE_HPP
