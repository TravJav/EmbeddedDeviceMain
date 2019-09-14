/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef MENUIMAGECONTAINERSELECTION_BASE_HPP
#define MENUIMAGECONTAINERSELECTION_BASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <touchgfx/containers/Container.hpp>
#include <touchgfx/widgets/Image.hpp>

class menuImageContainerSelectionBase : public touchgfx::Container
{
public:
    menuImageContainerSelectionBase();
    virtual ~menuImageContainerSelectionBase() {}

    virtual void initialize();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Image image;

private:

};

#endif // MENUIMAGECONTAINERSELECTION_BASE_HPP
