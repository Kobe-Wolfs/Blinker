#ifndef BLINKER_H
    #define BLINKER_H
    
    // Klassedefinitie
    class Blinker {
    private:
        unsigned long _volgendeBlinkOm;
        unsigned long _nu;
        unsigned long _startDelay;
        unsigned long _blinkInterval;
        unsigned int _ledPin;

    public:
        // constructor
        Blinker(unsigned int ledPin, unsigned long blinkInterval, const long startDelay = 0);
        // destructor
        ~Blinker();

        int begin();
        int handle();

    };
#endif
