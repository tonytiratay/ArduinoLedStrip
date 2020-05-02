# include <ButtonCtrl.h>

ButtonCtrl mainButton(8);
int _modes = 1;
int _mode = 0;

void handlePress()
{
  Serial.println("Pressed");
}

void handleLongPress()
{
  Serial.println("Long Pressed !");
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  mainButton.onPress(handlePress);
  mainButton.onLongPress(handleLongPress);
}

void loop() {
  mainButton.loop();
}
