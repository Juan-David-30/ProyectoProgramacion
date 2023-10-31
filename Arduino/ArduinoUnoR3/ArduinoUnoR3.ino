// Definiendo constantes con los pines

// Ultrasonido 
const int trigPin = 9;
const int echoPin = 10;

void setup()
{
  // Definiendo pines como entradas o salidas
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  // Estableciendo comunicación con el computador
  Seria.begin(9600);
}

void loop()
{
  // Reiniciando el pin que libera el sonido
  digitalWrite(trigPin, LOW); 
  delay(2);
  // Producinedo sonido
  digitalWrite(trigPin, HIGH);
  delay(10);
  // Obteniendo duración y así la distancia
  long duration = pulseIn(echoPin, HIGH)
  // Velocidad del sonido 340 m/s al ser microsegundos por cada segundo tenemos 0.034 
  // al ser ida y vuelta dividimos en 2
  int distancia = duracion * 0.034 / 2;
  // Escribimos resultados a través de la comunicación serial
  Serial.print("Distancia: ");
  Serial.println(distancia); 
}