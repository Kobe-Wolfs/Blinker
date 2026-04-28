#include <Arduino.h>
#include "Blinker.h"

// Klasse-implementatie
Blinker::Blinker(unsigned int ledPin, unsigned long blinkInterval){
  _ledPin = ledPin;
  _blinkInterval = blinkInterval;
  _volgendeBlinkOm = 0;
  _startDelay = startDelay;
  
 _nu = millis();
}

Blinker::~Blinker(){}

int Blinker:: begin(){
pinMode(_ledPin, OUTPUT);
  _NextEventAt = nu + _VolgendeBlinkOm
  
  return 0;
}
int Blinker::handle(){
  int retVal = false;
  unsigend long nu = millis();

  if (nu >= _volgendeBlinkOm) {
    _volgendeBlinkOm = nu + _blinkInterval;
    digitalWrite(_ledPin, !digitalRead(_ledPin));
  }
  return retVal;
}
