#include <Keyboard.h>

// Define rows and columns
int rows[] = {6, 7, 8, 9};
int cols[] = {5, 4, 3, 2};
unsigned long debounceTimes[16] = {0};
const int debounceDelay = 667;
const int delayTime = 300;

// Keymap: Each entry represents the keys for [row][col]
const int keyMap[4][4][3] = {
    {{0, 0, 198}, {0, 0, 199}, {0, 0, 100}, {0, 0, 109}},  // Row 1
    {{0, KEY_LEFT_SHIFT, 212}, {0, KEY_LEFT_SHIFT, 210}, {0, KEY_LEFT_SHIFT, 213}, {0, KEY_LEFT_SHIFT, 214}},  // Row 2
    {{0, KEY_LEFT_CTRL, 212}, {0, KEY_LEFT_CTRL, 210}, {0, KEY_LEFT_CTRL, 213}, {0, KEY_LEFT_CTRL, 214}},     // Row 3
    {{0, KEY_LEFT_ALT, 212}, {0, KEY_LEFT_ALT, 210}, {0, KEY_LEFT_ALT, 213}, {0, KEY_LEFT_ALT, 214}}          // Row 4
};

// Function to handle keypress
void pressKey(int mod1, int mod2, int key) {
    if (mod1 != 0) Keyboard.press(mod1);
    if (mod2 != 0) Keyboard.press(mod2);
    Keyboard.press(key);
    delay(delayTime);
    Keyboard.release(key);
    if (mod2 != 0) Keyboard.release(mod2);
    if (mod1 != 0) Keyboard.release(mod1);
}

void setup() {
    Serial.begin(9600); // For debugging
    for (int i = 0; i < 4; i++) {
        pinMode(rows[i], INPUT_PULLUP);
        pinMode(cols[i], OUTPUT);
        digitalWrite(cols[i], HIGH);
    }
    Keyboard.begin();
}

void loop() {
    for (int col = 0; col < 4; col++) {
        digitalWrite(cols[col], LOW);

        for (int row = 0; row < 4; row++) {
            if (digitalRead(rows[row]) == LOW && millis() - debounceTimes[row * 4 + col] > debounceDelay) {
                debounceTimes[row * 4 + col] = millis();

                int mod1 = keyMap[row][col][0];
                int mod2 = keyMap[row][col][1];
                int key = keyMap[row][col][2];

                // Debugging
                Serial.print("Row: ");
                Serial.print(row);
                Serial.print(", Col: ");
                Serial.print(col);
                Serial.print(" => Mod1: ");
                Serial.print(mod1);
                Serial.print(", Mod2: ");
                Serial.print(mod2);
                Serial.print(", Key: ");
                Serial.println(key);

                // Handle keypress
                pressKey(mod1, mod2, key);
            }
        }

        digitalWrite(cols[col], HIGH);
    }
}
