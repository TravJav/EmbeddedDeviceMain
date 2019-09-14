#ifndef STARTUPSCREEN_VIEW_HPP
#define STARTUPSCREEN_VIEW_HPP

#include <gui_generated/startupscreen_screen/StartUpScreenViewBase.hpp>
#include <gui/startupscreen_screen/StartUpScreenPresenter.hpp>

class StartUpScreenView : public StartUpScreenViewBase
{
public:
    StartUpScreenView();
    virtual ~StartUpScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // STARTUPSCREEN_VIEW_HPP
