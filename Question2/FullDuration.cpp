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

    SecDuration toSecDuration() const {
        int totalSeconds = seconds + minutes * 60 + hours * 3600 + days * 24 * 3600;
        return SecDuration(totalSeconds);
    }
};
