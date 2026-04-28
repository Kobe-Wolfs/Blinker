#include <Arduino.h>
#include "Blinker.h"

// Klasse-implementatie
Blinker::Blinker(unsigned int ledPin, unsigned long blinkInterval){
  _ledPin = ledPin;
  _blinkInterval = blinkInterval;
  _volgendeBlinkOm = 0;
  
  _nu = millis();
}

Blinker::~Blinker(){}

int Blinker:: begin(){
pinMode(_ledPin, OUTPUT);

  return 0;
}
int Blinker::handle(){
  int retVal = false;
    _nu = millis();

  if (_nu >= _volgendeBlinkOm) {
    _volgendeBlinkOm = _nu + _blinkInterval;
    digitalWrite(_ledPin, !digitalRead(_ledPin));
  }
  return retVal;
}