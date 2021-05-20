/* this code is exactly as the youtube video */
#define OUR_LED 12

void setup(){
    pinMode(OUR_LED,OUTPUT);
}

void loop(){
    digitalWrite(OUR_LED, HIGH);//turn on
    delay(1000);
    DigitalWrite(OUR_LED, LOW); //turn off
    delay(1000);
}

