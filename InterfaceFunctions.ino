
void iBienvenida(){
  lcd.setCursor(2,0); lcd.print("BIENVENIDO A"); 
  lcd.setCursor(3,1); lcd.print("ARDUNAL 2.0");
  }

void iMenuVerDatos(){
  lcd.createChar(0, prevArrow); lcd.createChar(1, nextArrow);
  lcd.home(); lcd.write(0);
  lcd.setCursor(6,0); lcd.print("MENU");
  lcd.setCursor(15,0);  lcd.write(1);
  lcd.setCursor(2,1); lcd.print("1. VER DATOS");
  }
  
void iTemperatura(int temperatura){
  lcd.createChar(0, prevArrow); lcd.createChar(1, nextArrow); lcd.createChar(2, iconTempe);
  lcd.home(); lcd.write(0); // FLECHAS
  lcd.setCursor(15,0); lcd.write(1);
  lcd.setCursor(2,0); lcd.write(2); // TOP
  lcd.setCursor(4,0); lcd.print("TEMPERATU.");
  lcd.setCursor(5,1); lcd.print(temperatura); //BOTOM
  lcd.setCursor(9,1); lcd.print((char)223);
  lcd.setCursor(10,1); lcd.print("C");
  }

void iHumedad(int humedad){
  lcd.createChar(0, prevArrow); lcd.createChar(1, nextArrow); lcd.createChar(3, iconHumed);
  lcd.home(); lcd.write(0); // FLECHAS
  lcd.setCursor(15,0); lcd.write(1);
  lcd.setCursor(3,0); lcd.write(3); // TOP
  lcd.setCursor(5,0); lcd.print("HUMEDAD");
  lcd.setCursor(5,1); lcd.print(humedad); // BOTOM
  lcd.setCursor(10,1); lcd.print("%");
  }

void iRadSolar(float radiacionsolar){
  lcd.createChar(0, prevArrow); lcd.createChar(1, nextArrow); lcd.createChar(4, iconSolar);
  lcd.home(); lcd.write(0); // FLECHAS
  lcd.setCursor(15,0);  lcd.write(1);
  lcd.setCursor(2,0); lcd.write(4); // TOP
  lcd.setCursor(4,0); lcd.print("RAD. SOLAR");
  lcd.setCursor(2,1); lcd.print(radiacionsolar); //BOTOM
  lcd.setCursor(9,1); lcd.print("Kw/m2");
  }

void iVViento(float velocidadviento){
  lcd.createChar(0, prevArrow); lcd.createChar(1, nextArrow); lcd.createChar(5, iconVVien);
  lcd.home(); lcd.write(0); // FLECHAS
  lcd.setCursor(15,0); lcd.write(1);
  lcd.setCursor(2,0); lcd.write(5); // TOP
  lcd.setCursor(4,0); lcd.print("V. VIENTO");
  lcd.setCursor(4,1); lcd.print(velocidadviento); //BOTOM
  lcd.setCursor(9,1); lcd.print("K/h");
  }

void iPresionAtmos(int presionatmos){
  lcd.createChar(0, prevArrow); lcd.createChar(1, nextArrow); lcd.createChar(6, iconAtmos);
  lcd.home(); lcd.write(0); // FLECHAS
  lcd.setCursor(15,0); lcd.write(1);
  lcd.setCursor(2,0); lcd.write(6); // TOP
  lcd.setCursor(4,0); lcd.print("PRESION A.");
  lcd.setCursor(3,1); lcd.print(presionatmos); //BOTOM
  lcd.setCursor(9,1); lcd.print("h/Pa");
  }

void iPrecipitacion(int precipitacion){
  lcd.createChar(0, prevArrow); lcd.createChar(1, nextArrow); lcd.createChar(7, iconPreci);
  lcd.home(); lcd.write(0); // FLECHAS
  lcd.setCursor(15,0);  lcd.write(1);
  lcd.setCursor(2,0); lcd.write(7); // TOP
  lcd.setCursor(4,0); lcd.print("PRECIPITA.");
  lcd.setCursor(5,1); lcd.print(precipitacion); //BOTOM
  lcd.setCursor(8,1); lcd.print("l/m2");
  }

void iMenuDescarga(){
  lcd.createChar(0, prevArrow); lcd.createChar(1, nextArrow);
  lcd.home(); lcd.write(0);
  lcd.setCursor(6,0); lcd.print("MENU");
  lcd.setCursor(15,0); lcd.write(1);
  lcd.setCursor(2,1); lcd.print("2. ESTADO SD");
  }
  
void iDConectUSB(){
  lcd.home(); lcd.createChar(7, iconUSB1); lcd.createChar(8, iconUSB2); lcd.createChar(9, iconUSB3);
  lcd.createChar(10,iconUSB4); 
  lcd.setCursor(2,0); lcd.print("CONECTAR USB"); 
  lcd.setCursor(6,1); lcd.write(7); 
  lcd.setCursor(7,1); lcd.write(8); 
  lcd.setCursor(8,1); lcd.write(9);
  lcd.setCursor(9,1); lcd.write(10);
  }

void iDDispoConect(){
  lcd.createChar(11,iconConfi); lcd.home();
  lcd.setCursor(1,0); lcd.write(11);
  lcd.setCursor(3,0); lcd.print("DISPOSITIVO");
  lcd.setCursor(3,1); lcd.print("ENCONTRADO");
  }

void iDGuardar(){
  lcd.createChar(12, iconQuest);
  lcd.setCursor(1,0); lcd.write(12);
  lcd.setCursor(2,0); lcd.print("DESEA GUARDAR");
  lcd.setCursor(3,1); lcd.print("LOS DATOS?");
  }

void iDGuardando(){
  lcd.setCursor(3,0); lcd.print("GUARDANDO");
  lcd.setCursor(6,1); lcd.print("...");
  }

void iDDCompleta(){
  lcd.createChar(13,iconConfi); 
  lcd.setCursor(4,0); lcd.print("DESCARGA"); 
  lcd.setCursor(3,1); lcd.print("COMPLETADA"); 
  lcd.setCursor(14,1); lcd.write(13);
  }

void iMenuFijarParam(){
  lcd.createChar(0, prevArrow); lcd.createChar(1, nextArrow);
  lcd.home(); lcd.write(0);
  lcd.setCursor(6,0); lcd.print("MENU");
  lcd.setCursor(15,0); lcd.write(1);
  lcd.setCursor(1,1); lcd.print("3. FIJAR PARAM");
  }

void FPDecision(){
  lcd.setCursor(0,0); lcd.print("VER PARAM. [<]");
  lcd.setCursor(0,1); lcd.print("FIJAR PAR. [>]");
  } 

void FPVerParam(int SenseTime,int SaveTime){
  lcd.setCursor(0,0); lcd.print("T. SENS"); lcd.setCursor(8,0); lcd.print(SenseTime); lcd.setCursor(13,0); lcd.print("min");
  lcd.setCursor(0,1); lcd.print("T. GUAR"); lcd.setCursor(8,1); lcd.print(SaveTime);  lcd.setCursor(13,1); lcd.print("min");
  }

void FPSenseTime(char SenseTime[16]){
  lcd.setCursor(1,0); lcd.print("TIEMPO SENSADO"); 
  lcd.setCursor(0,1); lcd.print(SenseTime); lcd.setCursor(13,1); lcd.print("min");}

void FPSaveTime(char SaveTime[16]){
  lcd.setCursor(1,0); lcd.print("TIEMPO GUARDADO"); 
  lcd.setCursor(0,1); lcd.print(SaveTime); lcd.setCursor(13,1); lcd.print("min");}

void FPGuardarSense(){
  lcd.createChar(12, iconQuest);
  lcd.setCursor(1,0); lcd.write(12);
  lcd.setCursor(2,0); lcd.print("DESEA GUARDAR");
  lcd.setCursor(1,1); lcd.print("T. DE SENSADO?");}

void FPGuardarSave(){
  lcd.createChar(12, iconQuest);
  lcd.setCursor(1,0); lcd.write(12);
  lcd.setCursor(2,0); lcd.print("DESEA GUARDAR");
  lcd.setCursor(0,1); lcd.print("T. DE GUARDADO?");}

int ObtenerDatos(int ActInt, int SenseTime, int SaveTime){

  
  if( ActInt==33 ){
  bool OK = false; 
  char NumP[] = {' ', ' ', ' ', ' ', ' ', ' ', ' ',' ',' ', ' ', ' ', ' ', ' ', ' ', ' ',' ',}; 
  int C = 0;
   
  while (OK == false){
    FPSenseTime(NumP);
    char Num = Teclado.waitForKey();
    if (Num == '0'||Num == '1'||Num == '2'||Num == '3'||Num == '4'||Num == '5'||Num == '6'||Num == '7'||Num == '8'||Num == '9')
    { NumP[C] = Num; FPSenseTime(NumP);
    for (int i=0; i < 1; i++){ i++; C++;}}
    
    else if (Num == 'A') { NumP[C-1]=' '; C=C-1;}
    
    else if(Num == 'C'){
    int NumInt = atoi(NumP); lcd.clear(); 
     FPGuardarSense();
    
      while (OK == false){
        char NumAux = Teclado.waitForKey();
        FPGuardarSense();
        if (NumAux == 'A'){
            OK = true;
            
            return(SenseTime); 
            lcd.clear(); }
        if (NumAux == 'C'){
            OK=true;
            
            return(NumInt); 
            lcd.clear(); }}}}}
    
  if( ActInt==35 ){ 
  bool OK = false;
  char NumP[] = {' ', ' ', ' ', ' ', ' ', ' ', ' ',' ',' ', ' ', ' ', ' ', ' ', ' ', ' ',' ',}; 
  int C = 0;
  
  while (OK == false){
    FPSaveTime(NumP);
    char Num = Teclado.waitForKey();
    if (Num == '0'||Num == '1'||Num == '2'||Num == '3'||Num == '4'||Num == '5'||Num == '6'||Num == '7'||Num == '8'||Num == '9')
    { NumP[C] = Num; FPSaveTime(NumP);
    for (int i=0; i < 1; i++){ i++; C++;}}
    else if (Num == 'A') { NumP[C-1]=' '; C=C-1;}
    
    else if(Num == 'C'){
    int NumInt = atoi(NumP); lcd.clear(); 
    bool OK2 = false; FPGuardarSave();
    
      while (OK2 == false && OK == false){
        char NumAux = Teclado.waitForKey();
        FPGuardarSave();
        if (NumAux == 'A'){
            OK = true;
            OK2 = true; 
            lcd.clear();
            return(SaveTime); 
             }
        if (NumAux == 'C'){
            OK=true;
            OK2=true;
            lcd.clear();
            return(NumInt); 
             }}}}}}
  
void FPDatosG(){
  lcd.createChar(13,iconConfi); 
  lcd.setCursor(5,0); lcd.print("DATOS"); 
  lcd.setCursor(3,1); lcd.print("GUARDADOS"); 
  lcd.setCursor(14,1); lcd.write(13);
  }

void iMenuFabricante(){
  lcd.createChar(0, prevArrow); lcd.createChar(1, nextArrow);
  lcd.home(); lcd.write(0);
  lcd.setCursor(6,0); lcd.print("MENU");
  lcd.setCursor(15,0); lcd.write(1);
  lcd.setCursor(1,1); lcd.print("4. FABRICANTE");
  }
  
bool ApagarPantalla(char KeyP){
  if (KeyP == '*'){ lcd.clear(); lcd.noBacklight(); return(false); } else {return(true);}
}

int ChangeInterface(int IntAct, char Tecla){

  //*             0. BIENVENIDA                  *//
  if (IntAct == 0){ 
    if (Tecla == 'B'){ IntAct=10;        lcd.clear(); return(IntAct);}}       // MENU
    
  //*             1. VER DATOS                   *//
  
  if (IntAct == 10){  
    if (Tecla == '>'){ IntAct=IntAct+10; lcd.clear(); return(IntAct);}        // ->
    if (Tecla == '<'){ IntAct=40;        lcd.clear(); return(IntAct);}        // <-
    if (Tecla == 'C'){ IntAct=11;        lcd.clear(); return(IntAct);}        // OK
    }
  if (IntAct == 11){  
    if (Tecla == '>'){ IntAct=IntAct+1;  lcd.clear(); return(IntAct);}        // ->
    if (Tecla == '<'){ IntAct=16;        lcd.clear(); return(IntAct);}        // <-
    if (Tecla == 'A'){ IntAct=10;        lcd.clear(); return(IntAct);}        // VOLVER
    }
  if (IntAct == 12){  
    if (Tecla == '>'){ IntAct=IntAct+1;  lcd.clear(); return(IntAct);}        // ->
    if (Tecla == '<'){ IntAct=IntAct-1;  lcd.clear(); return(IntAct);}        // <-
    if (Tecla == 'A'){ IntAct=10;        lcd.clear(); return(IntAct);}        // VOLVER
    }
  if (IntAct == 13){  
    if (Tecla == '>'){ IntAct=IntAct+1;  lcd.clear(); return(IntAct);}        // ->
    if (Tecla == '<'){ IntAct=IntAct-1;  lcd.clear(); return(IntAct);}        // <-
    if (Tecla == 'A'){ IntAct=10;        lcd.clear(); return(IntAct);}        // VOLVER
    }
  if (IntAct == 14){  
    if (Tecla == '>'){ IntAct=IntAct+1;  lcd.clear(); return(IntAct);}        // ->
    if (Tecla == '<'){ IntAct=IntAct-1;  lcd.clear(); return(IntAct);}        // <-
    if (Tecla == 'A'){ IntAct=10;        lcd.clear(); return(IntAct);}        // VOLVER
    }
  if (IntAct == 15){  
    if (Tecla == '>'){ IntAct=IntAct+1;  lcd.clear(); return(IntAct);}        // ->
    if (Tecla == '<'){ IntAct=IntAct-1;  lcd.clear(); return(IntAct);}        // <-
    if (Tecla == 'A'){ IntAct=10;        lcd.clear(); return(IntAct);}        // VOLVER
    }
  if (IntAct == 16){  
    if (Tecla == '>'){ IntAct=11;        lcd.clear(); return(IntAct);}        // ->
    if (Tecla == '<'){ IntAct=IntAct-1;  lcd.clear(); return(IntAct);}        // <-
    if (Tecla == 'A'){ IntAct=10;        lcd.clear(); return(IntAct);}        // VOLVER
    }
    
  //*             2. ESTADO SD                   *//
  
  if (IntAct == 20){  
    if (Tecla == '>'){ IntAct=IntAct+10; lcd.clear(); return(IntAct);}        // ->
    if (Tecla == '<'){ IntAct=IntAct-10; lcd.clear(); return(IntAct);}        // <-
    if (Tecla == 'C'){ IntAct=21;        lcd.clear(); return(IntAct);}        // OK
    }
  if (IntAct == 21){  
    if (Tecla == 'A'){ IntAct=20;        lcd.clear(); return(IntAct);}        // VOLVER
    }

  //*             3. FIJAR PARÁMETROS            *//
  
  if (IntAct == 30){ 
    if (Tecla == '>'){ IntAct=IntAct+10; lcd.clear(); return(IntAct);}
    if (Tecla == '<'){ IntAct=IntAct-10; lcd.clear(); return(IntAct);}
    if (Tecla == 'C'){ IntAct=31;        lcd.clear(); return(IntAct);}
    }
  if (IntAct == 31){
    if (Tecla == 'A'){ IntAct=30;        lcd.clear(); return(IntAct);}
    if (Tecla == '>'){ IntAct=33;        lcd.clear(); return(IntAct);}
    if (Tecla == '<'){ IntAct=32;        lcd.clear(); return(IntAct);}
    }  
        
  if (IntAct == 32){
    if (Tecla == 'C'){ IntAct=30;        lcd.clear(); return(IntAct);}
    if (Tecla == 'A'){ IntAct=30;        lcd.clear(); return(IntAct);}
    } 
  if (IntAct == 33){
    if (Tecla == 'A'){ IntAct=30;        lcd.clear(); return(IntAct);}
    if (Tecla == 'C'){ IntAct=IntAct+1;  lcd.clear(); return(IntAct);}
    }
    
  if (IntAct == 34){  
    if (Tecla == 'A'){ IntAct=30;        lcd.clear(); return(IntAct);}        // VOLVER
    if (Tecla == 'C'){ IntAct=IntAct+1;  lcd.clear(); return(IntAct);}        // OK
    }
    
  if (IntAct == 35){
    if (Tecla == 'A'){ IntAct=30;        lcd.clear(); return(IntAct);}
    if (Tecla == 'C'){ IntAct=IntAct+1;  lcd.clear(); return(IntAct);}
    }
    
  if (IntAct == 36){  
    if (Tecla == 'A'){ IntAct=30;        lcd.clear(); return(IntAct);}        // VOLVER
    if (Tecla == 'C'){ IntAct=IntAct+1;  lcd.clear(); return(IntAct);}        // OK
    }
    
  if (IntAct == 37){  
    if (Tecla == 'A'){ IntAct=30;        lcd.clear(); return(IntAct);}        // VOLVER
    if (Tecla == 'C'){ IntAct=30;        lcd.clear(); return(IntAct);}        // OK
    }

  //*             4. FABRICANTE                  *//
  
  if (IntAct == 40){ 
    if (Tecla == '>'){ IntAct=10;        lcd.clear(); return(IntAct);}
    if (Tecla == 'A'){ IntAct=40;        lcd.clear(); return(IntAct);}        // VOLVER
    if (Tecla == '<'){ IntAct=IntAct-10; lcd.clear(); return(IntAct);}
    if (Tecla == 'C'){ IntAct=41;        lcd.clear(); return(IntAct);}
    }

  if (IntAct == 41){
    if (Tecla == 'A'){ IntAct=40;        lcd.clear(); return(IntAct);}        // VOLVER
    if (Tecla == 'C'){ IntAct=40;        lcd.clear(); return(IntAct);}        // OK
    if (Tecla == '>'){ IntAct=41;        lcd.clear(); return(IntAct);}
    if (Tecla == '<'){ IntAct=41;        lcd.clear(); return(IntAct);}            
    }  

  }

void SDExist(bool SDStatus){

  lcd.setCursor(0,0); lcd.print("   TARJETA SD   ");
  lcd.createChar(0,iconConfi);
  if (SDStatus){
     lcd.setCursor(0,1); lcd.print("  GUARDANDO   ");
     lcd.setCursor(13,1); lcd.write(0);
     lcd.setCursor(15,1); lcd.print(" ");
    }
  else 
  lcd.setCursor(0,1); lcd.print("NO ENCONTRADA X");
    
}

void Fabricantes(){
  lcd.setCursor(0,0); lcd.print("-  UNAL Palmira");
  lcd.setCursor(0,1); lcd.print("-  PUJ Cali    ");
  }


