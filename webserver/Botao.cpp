    #include "Botao.h"

    Botao::Botao(int pin){
        _pin = pin;
        pinMode(_pin, OUTPUT);    
    }
    Botao::test_Botao(){
        if (LEDonnff == true){
            LEDswitch = "ON";
            JSONtxt = "{\"LEDonoff\":\""+LEDswitch+"\"}";
            webSocket.broadcastTXT(JSONtxt);
            delay(20);
        }else{
            digitalWrite(_pin, LOW);
  }   
  delay(20);
  Serial.println(millis()/1000);
  Serial.print((millis()/1000)/60);
  Serial.println(" Minutos");
  String LEDswitch = "OFF";
  if(LEDonnff == true) LEDswitch = "ON";
  JSONtxt = "{\"LEDonoff\":\""+LEDswitch+"\"}";
  webSocket.broadcastTXT(JSONtxt);
  delay(20);
    }