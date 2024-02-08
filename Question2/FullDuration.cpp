class FullDuration {
private:
    int days;
    int hours;
    int minutes;
    int seconds;

public:
    // Constructeur par défaut, pour tout initialiser à 0
    FullDuration() : days(0), hours(0), minutes(0), seconds(0) {}
    // Constructeur avec paramètres, pour initialiser chaque valeur
    FullDuration(int d, int h, int m, int s) : days(d), hours(h), minutes(m), seconds(s) {}
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
};
