/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef PROFILEVIEWBASE_HPP
#define PROFILEVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <touchgfx/containers/Container.hpp>
#include <touchgfx/widgets/Button.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>
#include <touchgfx/containers/ScrollableContainer.hpp>

class ProfileViewBase : public touchgfx::Container
{
public:
    ProfileViewBase();
    virtual ~ProfileViewBase() {}
    virtual void initialize();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Button exitButton;
    touchgfx::TextArea exitTitle;
    touchgfx::TextAreaWithOneWildcard titleText;
    touchgfx::ScrollableContainer profileData;

    /*
     * Wildcard Buffers
     */
    static const uint16_t TITLETEXT_SIZE = 10;
    touchgfx::Unicode::UnicodeChar titleTextBuffer[TITLETEXT_SIZE];

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<ProfileViewBase, const touchgfx::AbstractButton&> buttonCallback;

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);

};

#endif // PROFILEVIEWBASE_HPP
