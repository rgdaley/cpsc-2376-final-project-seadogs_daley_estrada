#ifndef TIMER_H
#define TIMER_H

#include"SDL.h"
#include"SDL_image.h"
#include"SDL_ttf.h"
//Comment for push


class Timer
{
    private:
    //The clock time when the timer started
    int startTicks;

    //The ticks stored when the timer was paused
    int pausedTicks;

    //The timer status
    bool paused;
    bool started;

    public:
		const static int framesPerSecond;
		const static float frameDelay;
    //Initializes variables
    Timer();

    //The various clock actions
    void start();
    void stop();
    void pause();
    void unpause();

    //Gets the timer's time
    int get_ticks();

    //Checks the status of the timer
    bool is_started();
    bool is_paused();
};


#endif