/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/mainmenu_screen/mainMenuViewBase.hpp>
#include "BitmapDatabase.hpp"

mainMenuViewBase::mainMenuViewBase() :
    updateItemCallback(this, &mainMenuViewBase::updateItemCallbackHandler)
{
    tiledImage1.setBitmap(Bitmap(BITMAP_BLUE_TEXTURES_IRONGRIP_ID));
    tiledImage1.setPosition(0, 0, 480, 272);
    tiledImage1.setOffset(0, 0);

    background.setXY(40, 15);
    background.setBitmap(Bitmap(BITMAP_SCROLLBG_ID));

    MainMenuScroll.setPosition(40, 15, 400, 75);
    MainMenuScroll.setHorizontal(true);
    MainMenuScroll.setCircular(true);
    MainMenuScroll.setEasingEquation(EasingEquations::cubicEaseOut);
    MainMenuScroll.setSwipeAcceleration(10);
    MainMenuScroll.setDragAcceleration(10);
    MainMenuScroll.setNumberOfItems(10);
    MainMenuScroll.setPadding(0, 0);
    MainMenuScroll.setSnapping(false);
    MainMenuScroll.setDrawableSize(100, 0);
    MainMenuScroll.setDrawables(MainMenuScrollListItems, updateItemCallback);

    add(tiledImage1);
    add(background);
    add(MainMenuScroll);
}

void mainMenuViewBase::setupScreen()
{
    MainMenuScroll.initialize();
    for (int i = 0; i < MainMenuScrollListItems.getNumberOfDrawables(); i++)
    {
        MainMenuScrollListItems[i].initialize();
    }
}

void mainMenuViewBase::updateItemCallbackHandler(DrawableListItemsInterface* items, int16_t containerIndex, int16_t itemIndex)
{
    if (items == &MainMenuScrollListItems)
    {
        Drawable* d = items->getDrawable(containerIndex);
        menuImageContainerSelection* cc = (menuImageContainerSelection*)d;
        MainMenuScrollUpdateItem(*cc, itemIndex);
    }
}
