/***************************************************************
**                                                            **
**          Repte 4. Control Structures Exercici 1            **
**          Repte 4. Control Structures Exercici 1            **
**                                                            **
** Marc Olmo Rodriguez                       DATA: 06/01/2017 **
****************************************************************/

int tempAigua = 101;

void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps

  if ( tempAigua > 100)
  {
    Serial.print("Aigua supera els 100C, esta bullint!");
  } 
}

void loop()   // we need this to be here even though its empty
{
}
