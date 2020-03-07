#include <chrono>

namespace DrakeOnline {

    class Timer {
        public:
            Timer();
            void Start(void);
            void Stop(void);
            void Reset(void);
            long GetTime(void);

        private:
            std::chrono::steady_clock::time_point startTime;
            std::chrono::steady_clock::time_point endTime;
            long long timeSpent;
    };
}
