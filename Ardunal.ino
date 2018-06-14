#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <Keypad.h>
#include <Adafruit_Sensor.h>
#include <DHT.h>
#include <DHT_U.h>

#define DHTTYPE DHT22 

const int sensorPin = A0; int sensorValue = 0; float sensorVoltage = 0; float windSpeed = 0; float voltageMax = 2.0;

//Cabecera pluviometro
byte estado1pluvi=1; byte estado2pluvi=0; int contadorpluvi=0; int pinpluvi=1; int contTime=0; String cadenasend;
char bufsend[28]; float h; float t; const int DHTPin = 43;

DHT dht(DHTPin, DHTTYPE);
LiquidCrystal_I2C lcd(0x3F, 16, 2);

const char Matrix[4][4]={{'1','2','3','A'},{'4','5','6','B'},{'7','8','9','C'},{'*','0','<','>'}};
const byte pinFila[4]={4,5,6,7}; //Pines del arduino para filas
const byte pinColu[4]={11,10,9,8}; //Pines del arduino para columnas
Keypad Teclado = Keypad(makeKeymap(Matrix),pinFila,pinColu,4,4); //Preprogramación del teclado

//const int sensorPin = A0; // Experimental

void setup() {lcd.begin(); lcd.noBacklight();}

bool Screen = false; 
int SenseTime=0;
int SaveTime=0;


void loop() {
  
char KeyPress = Teclado.getKey(); 
    if (KeyPress == '*'){ Screen = true; lcd.backlight(); lcd.clear();} // MENU
    
int ActInt = 0;
int r1=99; int vv=99; int pa=99; int pp=99;

////////////////////////////////////////////////////
//*         Codigo de César aquí                 *//
////////////////////////////////////////////////////

while (Screen){
  

  //*             0. BIENVENIDA                  *//
  
  while (ActInt == 0 && Screen == true) { 
  iBienvenida(); char KeyP = Teclado.getKey();
  if (KeyP){Screen = ApagarPantalla(KeyP); ActInt=ChangeInterface(ActInt,KeyP);}}

  //*             1. VER DATOS                   *//
  
  while (ActInt == 10 && Screen == true){  
  iMenuVerDatos(); char KeyP = Teclado.getKey();
  if (KeyP){Screen = ApagarPantalla(KeyP); ActInt=ChangeInterface(ActInt,KeyP);}}

  while (ActInt == 11 && Screen == true){  // TEMPERATURA
  int Temperatura=medirTemperatura();
  iTemperatura(Temperatura); char KeyP = Teclado.getKey();
  if (KeyP){Screen = ApagarPantalla(KeyP); ActInt=ChangeInterface(ActInt,KeyP);}}

  while (ActInt == 12 && Screen == true){  // HUMEDAD
  int Humedad=medirHumedad();
  iHumedad(Humedad); char KeyP = Teclado.getKey();
  if (KeyP){Screen = ApagarPantalla(KeyP); ActInt=ChangeInterface(ActInt,KeyP);}}

  while (ActInt == 13 && Screen == true){  // RAD. SOLAR
  iRadSolar(r1); char KeyP = Teclado.getKey();
  if (KeyP){Screen = ApagarPantalla(KeyP); ActInt=ChangeInterface(ActInt,KeyP);}}

  while (ActInt == 14 && Screen == true){  // V. VIENTO
  float viento=medirvelv();
  iVViento(viento); char KeyP = Teclado.getKey();
  if (KeyP){Screen = ApagarPantalla(KeyP); ActInt=ChangeInterface(ActInt,KeyP);}}

  while (ActInt == 15 && Screen == true){  // PRESIÓN ATMOS
  iPresionAtmos(pa); char KeyP = Teclado.getKey();
  if (KeyP){Screen = ApagarPantalla(KeyP); ActInt=ChangeInterface(ActInt,KeyP);}}

  while (ActInt == 16 && Screen == true){  // PRECIPITACIÓN
  iPrecipitacion(pp);  char KeyP = Teclado.getKey();
  if (KeyP){Screen = ApagarPantalla(KeyP); ActInt=ChangeInterface(ActInt,KeyP);}}
  
  //*             2. GUARDAR DATOS                   *//
  
  while (ActInt == 20 && Screen == true){ 
  iMenuDescarga(); char KeyP = Teclado.getKey();
  if (KeyP){Screen = ApagarPantalla(KeyP); ActInt=ChangeInterface(ActInt,KeyP);}}

  while (ActInt == 21 && Screen == true){  // CONECTAR USB
  SDExist(Screen); char KeyP = Teclado.getKey();
  if (KeyP){Screen = ApagarPantalla(KeyP); ActInt=ChangeInterface(ActInt,KeyP);}} // Experimental


  //*             3. FIJAR PARÁMETROS            *//
  
  while (ActInt == 30 && Screen == true) { 
  iMenuFijarParam(); char KeyP = Teclado.getKey();
  if (KeyP){Screen = ApagarPantalla(KeyP); ActInt=ChangeInterface(ActInt,KeyP);}}

  while (ActInt == 31 && Screen == true){
  FPDecision(); char KeyP = Teclado.getKey();
  if (KeyP){Screen = ApagarPantalla(KeyP); ActInt=ChangeInterface(ActInt,KeyP);}}
  
  while (ActInt == 32 && Screen == true){
  FPVerParam(SenseTime, SaveTime); char KeyP = Teclado.getKey();
  if (KeyP){Screen = ApagarPantalla(KeyP); ActInt=ChangeInterface(ActInt,KeyP);}}  
 
  while (ActInt == 33 && Screen == true) { 
  int SeTime = ObtenerDatos(ActInt, SenseTime, SaveTime);
  SenseTime = SeTime;
  ActInt = 35;}

  while (ActInt == 35 && Screen == true) { 
  int SaTime = ObtenerDatos(ActInt, SenseTime, SaveTime);
  SaveTime = SaTime;
  ActInt = 37;}

  while (ActInt == 37 && Screen == true){
  FPDatosG(); char KeyP = Teclado.getKey();
  if (KeyP){Screen = ApagarPantalla(KeyP); ActInt=ChangeInterface(ActInt,KeyP);}} 

  
  //*             4. FABRICANTE                  *//
  
  while (ActInt == 40 && Screen == true) { 
  iMenuFabricante(); char KeyP = Teclado.getKey();
  if (KeyP){Screen = ApagarPantalla(KeyP); ActInt=ChangeInterface(ActInt,KeyP);}}
  }
  }
