/***************************************************************************************************
**                                                                                                **
**                      TITOL: DISPLAY DE 7 SEGMENTS.                                             **                          
**                           COMPTATGE DE 0 A 9                                                   **
**                                                                                                **
** MANEL VALIENTE ORRIT                                                                DATA:09/02/20                                                                                                                                                                                 
***************************************************************************************************/
//*****************************INCLUIR**************************************************************


//*****************************VARIABLES************************************************************
   int a = 5;
   int b = 6;
   int c = 7;
   int d = 8;
   int e = 9;
   int f = 10;
   int g = 11; 
//*****************************SETUP****************************************************************
void setup()            
{
  pinMode(a, OUTPUT); // Configuració dels PIN com a sortida.
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
}
//*****************************LOOP*****************************************************************
  void loop(){ 
    
    //M 
  
  digitalWrite(a,HIGH);
  digitalWrite(b,LOW);
  digitalWrite(c,HIGH);
  digitalWrite(d,LOW);
  digitalWrite(e,HIGH);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);

  delay(500);

  //A

  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,LOW);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  delay(500);

  //N

  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,HIGH);
  digitalWrite(d,LOW);
  digitalWrite(e,HIGH);
  digitalWrite(f,LOW);
  digitalWrite(g,HIGH);
  delay(500);

  //E

  digitalWrite(a,HIGH);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  delay(500);

  //L

  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,LOW);
  delay(500);

  

  }

//****************************FUNCIONS*************************************************************
