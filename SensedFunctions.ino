float medirvelv(){ 
  sensorValue = analogRead(sensorPin);
  sensorVoltage = sensorValue * 0.004882814;

  if (sensorVoltage <= 0.4){  windSpeed = 0; }
  else { windSpeed = (sensorVoltage - 0.4)*32/(voltageMax - 0.4); };
  return windSpeed;
  }

float medirNA(int pinpluvi,float mll){
  float value = digitalRead(pinpluvi);  //lectura digital de pin
  if (estado1pluvi==1){
    if (value==HIGH){ estado2pluvi=1; estado1pluvi=0; }}
 if (estado2pluvi==1){
     if(value==LOW){ contadorpluvi=contadorpluvi+1; estado1pluvi=1; estado2pluvi=0; }}
     
float niveldeagua=contadorpluvi*mll;
  return(niveldeagua); }

float medirTemperatura() {
  float t = dht.readTemperature();
  if (isnan(t)){ return 200; }
  return t; }

float medirHumedad() {
  float h = dht.readHumidity();
  if (isnan(h)){ return 150; }
  return h; }

float medirRadiacion(){ 
  float sensorValue = analogRead(A7);
  float sensorVoltagemilis = sensorValue * 0.004882814*1000;
  float Radi=sensorVoltagemilis/1.67;
  return Radi;
  }
