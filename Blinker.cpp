#include <Arduino.h>
#include "Blinker.h"

// Klasse-implementatie
Blinker::Blinker(unsigned int ledPin, unsigned long blinkInterval,const long startDelay){
  _ledPin = ledPin;
  _blinkInterval = blinkInterval;
  _volgendeBlinkOm = 0;
  _startDelay = startDelay;
  
 _nu = millis();
}

Blinker::~Blinker(){}

int Blinker:: begin(){
pinMode(_ledPin, OUTPUT);
  _volgendeBlinkOm = _nu + _blinkInterval;
  
  return 0;
}
int Blinker::handle(){
  int retVal = false;
  unsigned long nu = millis();

  if (nu >= _volgendeBlinkOm) {
    _volgendeBlinkOm = nu + _blinkInterval;
    digitalWrite(_ledPin, !digitalRead(_ledPin));
  }
  return retVal;
}
