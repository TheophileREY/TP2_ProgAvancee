#include "FullDuration.cpp"

class SecDuration {
private:
    int seconds;

public:
    SecDuration() : seconds(0) {}
    SecDuration(int s) : seconds(s) {}
    int getSeconds() const {
        return seconds;
    }
    void setSeconds(int s) {
        seconds = s;
    }
    FullDuration toFullDuration() const;
};

FullDuration SecDuration::toFullDuration() const {
    int totalSeconds = seconds;
    int d = totalSeconds / (24 * 3600);
    totalSeconds %= (24 * 3600);
    int h = totalSeconds / 3600;
    totalSeconds %= 3600;
    int m = totalSeconds / 60;
    int s = totalSeconds % 60;
    return FullDuration(d, h, m, s);
}
