class SecDuration {
private:
    int seconds;

public:
    // Constructeur par défaut, pour initialiser seconds à 0
    SecDuration() : seconds(0) {}
    // Constructeur avec paramètre, pour initialiser seconds
    SecDuration(int s) : seconds(s) {}
    // Getters et Setters pour seconds
    int getSeconds() const {
        return seconds;
    }
    void setSeconds(int s) {
        seconds = s;
    }
};
