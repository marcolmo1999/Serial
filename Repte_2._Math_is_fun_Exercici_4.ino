/***************************************************************
**                                                            **
**              Repte 2. Math is fun Exercici 5               **
**              Repte 2. Math is fun Exercici 5               **
**                                                            **
** Marc Olmo Rodriguez                       DATA: 06/01/2017 **
****************************************************************/
int drive_gb = 100;
long drive_mb;     // we changed the type from "int" to "long"

void setup()             // run once, when the sketch starts
{
  Serial.begin(9600);    // set up Serial library at 9600 bps

  Serial.print("Your HD is ");
  Serial.print(drive_gb);
  Serial.println(" GB large.");

  drive_mb = 1024 * drive_gb;

  Serial.print("It can store ");
  Serial.print(drive_mb);
  Serial.println(" Megabytes!");
}

void loop()   // we need this to be here even though its empty
{
}


