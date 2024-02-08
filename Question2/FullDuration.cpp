class FullDuration {
private:
    int days;
    int hours;
    int minutes;
    int seconds;

public:
    FullDuration() : days(0), hours(0), minutes(0), seconds(0) {}
    FullDuration(int d, int h, int m, int s) : days(d), hours(h), minutes(m), seconds(s) {}

    // Constructeur
    FullDuration(int totalSeconds) {
        days = totalSeconds / (24 * 3600);
        totalSeconds %= (24 * 3600);
        hours = totalSeconds / 3600;
        totalSeconds %= 3600;
        minutes = totalSeconds / 60;
        seconds = totalSeconds % 60;
    }

    // Getters et Setters
    int getDays() const {
        return days;
    }
    void setDays(int d) {
        days = d;
    }
    int getHours() const {
        return hours;
    }
    void setHours(int h) {
        hours = h;
    }
    int getMinutes() const {
        return minutes;
    }
    void setMinutes(int m) {
        minutes = m;
    }
    int getSeconds() const {
        return seconds;
    }
    void setSeconds(int s) {
        seconds = s;
    }

    void incrementSeconds(int sec = 1) {
        seconds += sec;
        while (seconds >= 60) {
            seconds -= 60;
            incrementMinutes(1);
        }
    }
    void incrementMinutes(int min = 1) {
        minutes += min;
        while (minutes >= 60) {
            minutes -= 60;
            incrementHours(1);
        }
    }
    void incrementHours(int hour = 1) {
        hours += hour;
        while (hours >= 24) {
            hours -= 24;
            incrementDays(1);
        }
    }
    void incrementDays(int day = 1) {
        days += day;
    }

    SecDuration toSecDuration() const;
};
