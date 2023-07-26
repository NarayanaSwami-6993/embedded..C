#include <stdio.h>
#include <string.h>

typedef struct SensorData {
    char sensorID[10];
    float temperature;
    int humidity;
    int lightIntensity;
} SensorData;

void parseData(const char* data, SensorData* sensor) {
    sscanf(data, "S%[^-]-T:%f-H:%d-L:%d", sensor->sensorID, &sensor->temperature, &sensor->humidity, &sensor->lightIntensity);
}

int main() {
    char data[] = "S1-T:36.5-H:100-L:50";
    SensorData sensor;

    parseData(data, &sensor);

    printf("Sensor Info:\n");
    printf("_______\n");
    printf("Sensor ID: %s\n", sensor.sensorID);
    printf("Temperature: %.1f C\n", sensor.temperature);
    printf("Humidity: %d\n", sensor.humidity);
    printf("Light Intensity: %d%%\n", sensor.lightIntensity);

    return 0;
}