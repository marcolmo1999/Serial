/***************************************************************
**                                                            **
**          Repte 4. Control Structures Exercici 3            **
**          Repte 4. Control Structures Exercici 3            **
**                                                            **
** Marc Olmo Rodriguez                       DATA: 06/01/2017 **
****************************************************************/
int tempAigua = 70;

void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps

  if ( tempAigua >= 100)
  {
    Serial.print("Aigua supera els 100C, esta bullint!");
  }
  else if ((tempAigua >=90)&&(tempAigua <100))
  {
  Serial.print ("Aigua apunt de bullir");
  }
  else
  {
  Serial.print("Aigua encara no bull");
  }
  
}

void loop()   // we need this to be here even though its empty
{
}
