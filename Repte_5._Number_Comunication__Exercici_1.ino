/***************************************************************
**                                                            **
**          Repte 5. Number Comunication Exercici 1           **
**          Repte 5. Number Comunication Exercici 1           **
**                                                            **
** Marc Olmo Rodriguez                       DATA: 06/01/2017 **
****************************************************************/
//********** Variables ********************************************************
float r1, r2;             // variables for the R's
float rSerie, rParalel;   // variables for the results
//********** Setup ************************************************************
void setup() { 
  Serial.begin(9600);        // initialize serial
  Serial.println("Entra el valor de r1 i r2 (separats per una coma)");
}
//********** Loop *************************************************************
void loop() {
  while (Serial.available() > 0) {  // if there's any serial available, read it
    r1 = Serial.parseInt();// look for valid int the incoming serial stream
    Serial.print("r1= ");
    Serial.print(r1);
    Serial.print(" Ohms    ");
   //CODI ALUMNE (mostra el valor de r1)
    r2 = Serial.parseInt();
    Serial.print("r2= ");
    Serial.print(r2);
    Serial.println(" Ohms    ");
    //CODI ALUMNE (mostra el valor de r2)
    if (Serial.read() == '\n') 
    { //look for newline. Is the end of your sentence
    //CODI ALUMNE (calcula r1 i r2 en serie i paral·lel, mostra resultats i fa de nou la pregunta inicial)
    rSerie=(r1+r2);
    Serial.print("rSerie= ");
    Serial.print(rSerie);
    Serial.print(" Ohms    ");
    rParalel=((r1+r2)/4);
    Serial.print("rParalel= ");
    Serial.print(rParalel);
    Serial.println(" Ohms    ");
    Serial.println("Entra el valor de r1 i r2");
    }
  }
}

