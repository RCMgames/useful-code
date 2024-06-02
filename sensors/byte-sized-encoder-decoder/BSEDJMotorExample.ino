#include <Arduino.h>
#include <JMotor.h>
#include <byte-sized-encoder-decoder.h>

#include <Wire.h>

ByteSizedEncoderDecoder bsed = ByteSizedEncoderDecoder(&Wire1, 14);
JEncoderBSED encoder5 = JEncoderBSED(bsed, 5, false, 1.0, 1000, 500);
JEncoderBSED encoder8 = JEncoderBSED(bsed, 8, false, 1.0, 1000, 500);
void setup()
{
    Serial.begin(115200);
    Wire1.begin(SDA1, SCL1, 400000);
    bsed.begin(); // JEncoderBSED don't have a begin() but the ByteSizeEncoderDecoder does
    bsed.setWhichEncoders(0b00001001); // encoder 5 and 8 are used
}

void loop()
{
    bsed.run(); // JEncoderBSED don't need to be run() but the ByteSizeEncoderDecoder does
    Serial.print(encoder8.getPos());
    Serial.print(" ");
    Serial.print(encoder8.getVel());
    Serial.print(" ");
    Serial.println(encoder8.isVelNew());
}
