/***************************************************************
**                                                            **
**          Repte 4. Control Structures Exercici 4            **
**          Repte 4. Control Structures Exercici 4            **
**                                                            **
** Marc Olmo Rodriguez                       DATA: 06/01/2017 **
****************************************************************/
float valor = 40.0;

void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps

  if ( valor <3.5)
  {
    Serial.print("A");
  }
  else if ((valor>=3.5)&&(valor<=6.5))
  {
  Serial.print("B");
 }
  else if ((valor>=6.5)&&(valor<=11.1))
  {
  Serial.print("C");
}
  else if ((valor>=11.1)&&(valor<=17.7))
  {
  Serial.print("D");
}
  else if ((valor>=17.7)&&(valor<=38.2))
  {
  Serial.print("E");
}
  else if ((valor>=38.2)&&(valor<=43.2))
  {
  Serial.print("F");
}
  else 
  {
  Serial.print("G");
}
}
void loop() 
{
  
}

