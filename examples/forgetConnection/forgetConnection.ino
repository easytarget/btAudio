#include <btAudio.h>

// Sets the name of the audio device
btAudio audio = btAudio("ESP_Speaker");

void setup() {
 // Forget the remembered connection
 audio.forget();
}

void loop() {
 // loop indefinately
 delay(10000); 
}
