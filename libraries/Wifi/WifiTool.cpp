#include "Arduino.h"
#include "DigiKeyboard.h"
#include <WifiTool.h>


WifiTool::WifiTool(){
}

void WifiTool::ctrKey(String key){
    byte keyVal;
    if (key == "r"){
        keyVal = 21;
    }
    DigiKeyboard.sendKeyStroke(keyVal, MOD_GUI_LEFT);
    //DigiKeyboard.delay(200);

}

void WifiTool::runCommand(String command){
    DigiKeyboard.sendKeyStroke(0);
    DigiKeyboard.println(command);
    DigiKeyboard.delay(125);
}

