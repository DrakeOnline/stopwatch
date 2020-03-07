#include "Timer.h"

namespace DrakeOnline {

    Timer::Timer() {
        startTime   = std::chrono::steady_clock::time_point();
        endTime     = std::chrono::steady_clock::time_point();
        timeSpent   = 0.0;
    }

    void Timer::Start(void) {
        startTime = std::chrono::steady_clock::now();
    }

    void Timer::Stop(void) {
        endTime = std::chrono::steady_clock::now();
    }

    void Timer::Reset(void) {
        startTime   = std::chrono::steady_clock::time_point();
        endTime     = std::chrono::steady_clock::time_point();
    }

    long Timer::GetTime(void) {
        // The duration of the timer
        std::chrono::steady_clock::duration time_span = endTime - startTime;

        // Cast duration object to a long
        std::chrono::duration<long, std::nano> nano = std::chrono::duration_cast<std::chrono::nanoseconds> (time_span);
        timeSpent = nano.count();

        return timeSpent;
    }
}
