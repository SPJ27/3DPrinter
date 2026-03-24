#Include <WiFi.h>

const char* ssid = "FB..";
const char* password = "sal.....";

WifiServer server(23);
HardwareSerial printer(1);
WifiClient client;

void setup() {
    Serial.begin(115200);
    printer.begin(115200, SERIAL_8N1, 16, 17);
    WiFi.begin(ssid, password);
    Serial.println("Starting the print server...");
    while ( WiFi.status() != WL_CONNECTED ){
        delay(500);
        Serial.print(".");
    }
    Serial.println("Connected...");
    Serial.println(WiFi.localIP());
    server.begin();
}

void loop() {
    if (server.hasClient()){
        client = server.available();
        Serial.println("Connected to the server");

    }
    if (client && client.connected()){
        while (client.available()){
            char c = client.read();
            printer.write(c);
        }
    }
    while (printer.available()){
        char c = printer.read();
        if (client && client.connected()){
            client.write(c);
        }
        Serial.write(c);
    }
}