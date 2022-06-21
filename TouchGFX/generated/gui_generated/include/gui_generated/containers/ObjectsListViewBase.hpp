/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef OBJECTSLISTVIEWBASE_HPP
#define OBJECTSLISTVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <touchgfx/containers/Container.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/containers/scrollers/ScrollList.hpp>
#include <gui/containers/ObjectInList.hpp>

class ObjectsListViewBase : public touchgfx::Container
{
public:
    ObjectsListViewBase();
    virtual ~ObjectsListViewBase() {}
    virtual void initialize();

    virtual void objectsListUpdateItem(ObjectInList& item, int16_t itemIndex)
    {
        // Override and implement this function in ObjectsListView
    }

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::TextArea loadingTitle;
    touchgfx::ScrollList objectsList;
    touchgfx::DrawableListItems<ObjectInList, 7> objectsListListItems;

private:
    touchgfx::Callback<ObjectsListViewBase, touchgfx::DrawableListItemsInterface*, int16_t, int16_t> updateItemCallback;
    void updateItemCallbackHandler(touchgfx::DrawableListItemsInterface* items, int16_t containerIndex, int16_t itemIndex);

};

#endif // OBJECTSLISTVIEWBASE_HPP
