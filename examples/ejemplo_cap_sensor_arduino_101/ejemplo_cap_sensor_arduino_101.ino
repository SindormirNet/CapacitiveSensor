#include <CapacitiveSensor.h>

CapacitiveSensor cs_2_3 = CapacitiveSensor(2,3); // 10M resistor between pins 2 & 3, pin 3 is sensor pin, add a wire and or foil if desired

void setup() {
   cs_2_3.set_CS_AutocaL_Millis(0xFFFFFFFF);     // turn off autocalibrate on channel 1 - just as an example
   Serial.begin(9600);
   Serial.println("Arrancando");
}

void loop() {
    unsigned long start = millis();
    long total =  cs_2_3.capacitiveSensor(30);

    Serial.print(millis() - start);        // check on performance in milliseconds
    Serial.print("\t");                    // tab character for debug windown spacing

    Serial.println(total);                 // print sensor output 

    delay(10);                             // arbitrary delay to limit data to serial port 
}
