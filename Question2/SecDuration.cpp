#include "FullDuration.cpp"

class SecDuration {
private:
    int seconds;

public:
    SecDuration() : seconds(0) {}
    SecDuration(int s) : seconds(s) {}
    
    // Constructeur
    SecDuration(int d, int h, int m, int s) {
        seconds = s + m * 60 + h * 3600 + d * 24 * 3600;
    }
    int getSeconds() const {
        return seconds;
    }
    void setSeconds(int s) {
        seconds = s;
    }
    void increment(int sec = 1) {
        seconds += sec;
    }
    void incrementMinutes(int min = 1) {
        increment(min * 60);
    }
    void incrementHours(int hour = 1) {
        increment(hour * 3600);
    }
    void incrementDays(int day = 1) {
        increment(day * 86400);
    }
    FullDuration toFullDuration() const {
        int totalSeconds = seconds;
        int d = totalSeconds / (24 * 3600);
        totalSeconds %= (24 * 3600);
        int h = totalSeconds / 3600;
        totalSeconds %= 3600;
        int m = totalSeconds / 60;
        int s = totalSeconds % 60;
        return FullDuration(d, h, m, s);
    }
};

SecDuration FullDuration::toSecDuration() const {
    int totalSeconds = seconds + minutes * 60 + hours * 3600 + days * 24 * 3600;
    return SecDuration(totalSeconds);
}
