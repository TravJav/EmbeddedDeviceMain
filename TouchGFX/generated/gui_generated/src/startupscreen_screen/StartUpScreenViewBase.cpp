/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/startupscreen_screen/StartUpScreenViewBase.hpp>
#include "BitmapDatabase.hpp"

StartUpScreenViewBase::StartUpScreenViewBase() :
    waitForMainScreenCounter(0),
    interaction1EndedCallback(this, &StartUpScreenViewBase::interaction1EndedCallbackHandler)
{
    image.setXY(-78, -9);
    image.setBitmap(Bitmap(BITMAP_SMALL_SPLASH_ID));

    add(image);
}

void StartUpScreenViewBase::setupScreen()
{

}

//Handles delays
void StartUpScreenViewBase::handleTickEvent()
{
    View::handleTickEvent();
    if(waitForMainScreenCounter > 0)
    {
        waitForMainScreenCounter--;
        if(waitForMainScreenCounter == 0)
        {
            //Interaction1
            //When waitForMainScreen completed fade image
            //Fade image to alpha:0 with CubicIn easing in 1000 ms (60 Ticks)
            image.clearFadeAnimationEndedAction();
            image.startFadeAnimation(0, 60, EasingEquations::cubicEaseIn);
            image.setFadeAnimationEndedAction(interaction1EndedCallback);
        }
    }
}

//Called when the screen is done with transition/load
void StartUpScreenViewBase::afterTransition()
{
    //waitForMainScreen
    //When screen is entered delay
    //Delay for 2000 ms (120 Ticks)
    waitForMainScreenCounter = WAITFORMAINSCREEN_DURATION;
}

void StartUpScreenViewBase::interaction1EndedCallbackHandler(const touchgfx::FadeAnimator<touchgfx::Image>& comp)
{
    //Interaction2
    //When Interaction1 completed change screen to mainMenu
    //Go to mainMenu with screen transition towards East
    application().gotomainMenuScreenCoverTransitionEast();
}
