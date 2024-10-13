float amplitude = 10;
float frequency = 0.1;
float t = 0;
float timeStep = 0.1;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  float sineValue = amplitude * sin(2 * PI * frequency * t);
  float coseValue = amplitude * cos(2 * PI * frequency * t);
  t += timeStep;
  Serial.print(sineValue);
  Serial.print("  ");
  Serial.print(coseValue);
  
  
}
