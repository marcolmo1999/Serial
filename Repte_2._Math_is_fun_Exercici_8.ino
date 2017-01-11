/***************************************************************
**                                                            **
**              Repte 2. Math is fun Exercici 8               **
**              Repte 2. Math is fun Exercici 8               **
**                                                            **
** Marc Olmo Rodriguez                       DATA: 06/01/2017 **
****************************************************************/
int drive_gb = 100;
long drive_mb;
long drive_kb;
long real_drive_mb;
long real_drive_kb;
long resta;


void setup() {
   Serial.begin(9600);  
  drive_mb= drive_gb*1024;
  drive_kb=drive_mb*1024;
  real_drive_mb=drive_gb*1000;
  real_drive_kb=real_drive_mb*1000;
  resta= drive_kb-real_drive_kb;
  Serial.print("Your HD is ");
  Serial.print(drive_gb);
  Serial.println(" GB large.");
  Serial.print("In theory, it can store");
  Serial.print(drive_mb);
  Serial.print(" Megabytes,");
  Serial.print(drive_kb);
  Serial.println(" Kilobytes.");
   Serial.print("But it really only stores ");
  Serial.print(real_drive_mb);
  Serial.print(" Megabytes,");
  Serial.print(real_drive_kb);
  Serial.println(" Kilobytes.");
   Serial.print("You are missing ");
    Serial.print(resta);
    Serial.println(" Kilobytes.");
}

void loop() {
  // put your main code here, to run repeatedly:

}
