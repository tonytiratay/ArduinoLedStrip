# include <ButtonCtrl.h>
# include <LedCtrl.h>

ButtonCtrl mainButton(8);
LedCtrl greenLed(7);
LedCtrl redLed(6);
LedCtrl blueLed(2);

int _modes = 9;
int _mode = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  mainButton.onPress(changeMode);
  mainButton.onLongPress(handleToggle);
}

void loop() {
  mainButton.loop();
  greenLed.loop();
  blueLed.loop();
  redLed.loop();
  checkLight();  
}


void handleToggle(){
  blueLed.toggle();
}

void changeMode(){
  if(_mode == _modes){
    _mode = 0;
  } else {
    _mode++;
  }
}

void checkLight(){
  switch(_mode){
    case 0:
      greenLed.light(false);
      redLed.light(false);
      break;
    case 1:
      greenLed.light(true);
      redLed.light(false);
      break;
    case 2:
      greenLed.light(false);
      redLed.light(true);
      break;
    case 3:
      greenLed.light(true);
      redLed.light(true);
      break;
    case 4:
      greenLed.blink(1000);
      redLed.light(false);
      break;
    case 5:
    greenLed.light(false);
      redLed.blink(1000);
      break;
    case 6:
      greenLed.blink(500);
      redLed.blink(500);
      break;
    case 7:
      greenLed.blink(500);
      redLed.blink(1000);
      break;
    case 8:
      greenLed.blink(1000);
      redLed.blink(500);
      break;
    case 9:
      greenLed.blink(100);
      redLed.blink(100);
      break;
  }

  
}
