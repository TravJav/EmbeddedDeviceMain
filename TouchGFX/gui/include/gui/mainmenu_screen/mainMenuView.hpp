#ifndef MAINMENU_VIEW_HPP
#define MAINMENU_VIEW_HPP

#include <gui_generated/mainmenu_screen/mainMenuViewBase.hpp>
#include <gui/mainmenu_screen/mainMenuPresenter.hpp>

class mainMenuView : public mainMenuViewBase
{
public:
    mainMenuView();
    virtual ~mainMenuView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // MAINMENU_VIEW_HPP
