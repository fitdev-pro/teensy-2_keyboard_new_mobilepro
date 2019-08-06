#include <Keypad.h>

const byte ROWS = 8; 
const byte COLS = 12; 

#define KEY_SCHEMA_DEFAULT   1
#define KEY_SCHEMA_FN   2
#define KEY_CHAR_A   'a'
#define KEY_CHAR_B   'b'
#define KEY_CHAR_C   'c'
#define KEY_CHAR_D   'd'
#define KEY_CHAR_E   'e'
#define KEY_CHAR_F   'f'
#define KEY_CHAR_G   'g'
#define KEY_CHAR_H   'h'
#define KEY_CHAR_I   'i'
#define KEY_CHAR_J   'j'
#define KEY_CHAR_K   'k'
#define KEY_CHAR_L   'l'
#define KEY_CHAR_M   'm'
#define KEY_CHAR_N   'n'
#define KEY_CHAR_O   'o'
#define KEY_CHAR_P   'p'
#define KEY_CHAR_Q   'q'
#define KEY_CHAR_R   'r'
#define KEY_CHAR_S   's'
#define KEY_CHAR_T   't'
#define KEY_CHAR_U   'u'
#define KEY_CHAR_W   'w'
#define KEY_CHAR_X   'x'
#define KEY_CHAR_Y   'y'
#define KEY_CHAR_Z   'z'
#define KEY_CHAR_V   'v'
#define KEY_CHAR_1   '1'
#define KEY_CHAR_2   '2'
#define KEY_CHAR_3   '3'
#define KEY_CHAR_4   '4'
#define KEY_CHAR_5   '5'
#define KEY_CHAR_6   '6'
#define KEY_CHAR_7   '7'
#define KEY_CHAR_8   '8'
#define KEY_CHAR_9   '9'
#define KEY_CHAR_0   '0'
#define KEY_CHAR_S1   '-'
#define KEY_CHAR_S2   '='
#define KEY_CHAR_S3   ']'
#define KEY_CHAR_S4   '['
#define KEY_CHAR_S5   '\\'
#define KEY_CHAR_S6   '/'
#define KEY_CHAR_S7   '"'
#define KEY_CHAR_S8   ';'
#define KEY_CHAR_S9   ','
#define KEY_CHAR_S10   '.'
#define KEY_CHAR_S11   '~'
#define KEY_CHAR_F1   '!'
#define KEY_CHAR_F2   '@'
#define KEY_CHAR_F3   '#'
#define KEY_CHAR_F4   '$'
#define KEY_CHAR_F5   '%'
#define KEY_CHAR_F6   '^'
#define KEY_CHAR_F7   '&'
#define KEY_CHAR_F8   '*'
#define KEY_CHAR_F9   '('
#define KEY_CHAR_F10   ')'
#define KEY_CHAR_F11   '_'
#define KEY_CHAR_F12   '+'
#define KEY_CHAR_SPACE   'A'
#define KEY_CHAR_ENTER   'B'
#define KEY_CHAR_UP      'C'
#define KEY_CHAR_DOWN    'D'
#define KEY_CHAR_LEFT    'E'
#define KEY_CHAR_RIGHT   'F'
#define KEY_CHAR_ESC     'G'
#define KEY_CHAR_DEL     'H'
#define KEY_CHAR_BACKSPACE  'I'
#define KEY_CHAR_TAB     'J'
#define KEY_CHAR_CAPSLOCK   'K'

#define KEY_CHAR_SHIFT   'L'
#define KEY_CHAR_CTRL    'M'
#define KEY_CHAR_WIN     'N'
#define KEY_CHAR_ALT_L   'O'
#define KEY_CHAR_ALT_R   'P'
#define KEY_CHAR_FN      'Q'


char keys[ROWS][COLS] = {
  //   3               4                  5           6              7                 8            10              12            15              16              17                  18
   {  KEY_CHAR_CTRL,  '|',             KEY_CHAR_6,  KEY_CHAR_S1,  KEY_CHAR_Y,         KEY_CHAR_H,  KEY_CHAR_S5,    '|',           KEY_CHAR_N,   KEY_CHAR_S7,     '|',                 '|'}, //1
   {  KEY_CHAR_F5,    KEY_CHAR_F1,     KEY_CHAR_Q,  KEY_CHAR_A,   KEY_CHAR_ESC,       KEY_CHAR_1,  KEY_CHAR_L,     KEY_CHAR_Z,    KEY_CHAR_9,   KEY_CHAR_O,      KEY_CHAR_FN,                 KEY_CHAR_F9}, //2
   {  KEY_CHAR_F6,    KEY_CHAR_F2,     KEY_CHAR_W,  KEY_CHAR_S,   KEY_CHAR_DEL,       KEY_CHAR_2,  KEY_CHAR_ENTER, KEY_CHAR_X,    KEY_CHAR_0,   KEY_CHAR_S10,    KEY_CHAR_TAB,        KEY_CHAR_F10}, //4
   {  '|',            KEY_CHAR_SHIFT,  KEY_CHAR_5,  KEY_CHAR_S11, KEY_CHAR_T,         KEY_CHAR_G,  KEY_CHAR_UP,    KEY_CHAR_WIN,  KEY_CHAR_B,   KEY_CHAR_S8,     '|',                 '|'}, //5
   {  KEY_CHAR_F7,    KEY_CHAR_F3,     KEY_CHAR_E,  KEY_CHAR_D,   KEY_CHAR_CAPSLOCK,  KEY_CHAR_3,  KEY_CHAR_S6,    KEY_CHAR_C,    '|',          KEY_CHAR_RIGHT,  KEY_CHAR_P,          KEY_CHAR_F11}, //6
   {  KEY_CHAR_F8,    KEY_CHAR_F4,     KEY_CHAR_R,  KEY_CHAR_F,  '|',                 KEY_CHAR_4,  KEY_CHAR_LEFT,  KEY_CHAR_V,    '|',          KEY_CHAR_DOWN,   KEY_CHAR_BACKSPACE,  KEY_CHAR_F12}, //7
   {  '|',            '|',             KEY_CHAR_7,  KEY_CHAR_S2,  KEY_CHAR_U,         KEY_CHAR_J,  KEY_CHAR_S3,    '|',           KEY_CHAR_M,   KEY_CHAR_S4,     '|',                 KEY_CHAR_ALT_L}, //8
   {  '|',            '|',             KEY_CHAR_8,  '|',          KEY_CHAR_I,         KEY_CHAR_K,  KEY_CHAR_SPACE, '|',           KEY_CHAR_S9,  '|',             KEY_CHAR_ALT_R,      '|'}  //9
};

byte rowPins[ROWS] = {23,2,1,24,0,25,27,26}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {17,44,16,43,15,42,41,40,14,39,13,38}; //connect to the column pinouts of the keypad

Keypad kpd = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

bool debug = false;
unsigned long loopCount;
unsigned long startTime;

char schema = KEY_SCHEMA_DEFAULT;
unsigned int prasedModifierKeys[5] = {0,0,0,0,0};

void setup() {
  if(debug){
    Serial.begin(9600);
    loopCount = 0;
    startTime = millis();
  }
}


void loop() {
  if(debug){
    loopCount++;
    if ( (millis()-startTime)>5000 ) {
        Serial.print("Average loops per second = ");
        Serial.println(loopCount/5);
        startTime = millis();
        loopCount = 0;
    }
  }
    
    
    // Fills kpd.key[ ] array with up-to 10 active keys.
    // Returns true if there are ANY active keys.

    if (kpd.getKeys())
    {
        for (int i=0; i<LIST_MAX; i++)   // Scan the whole key list.
        {
            if ( kpd.key[i].stateChanged )   // Only find keys that have changed state.
            {
                switch (kpd.key[i].kstate) {  // Report active key state : IDLE, PRESSED, HOLD, or RELEASED
                  case PRESSED:
                    handlKey(kpd.key[i].kchar);             
                    break;
                 
                  case HOLD:
                    if(debug){
                      Serial.print("Key ");
                      Serial.print(kpd.key[i].kchar);
                      Serial.println(" HOLD.");
                    }
                    break;
                  case RELEASED:
                    releaseKey(kpd.key[i].kchar);
                    break;
                  case IDLE:
                    break;
                }
            }
        }
    }
} 

bool isModifierKey(char key){
  if(schema == KEY_SCHEMA_FN){
    return false;
  }
  char modifierKeys[] = {KEY_CHAR_SHIFT, KEY_CHAR_CTRL, KEY_CHAR_WIN, KEY_CHAR_ALT_L, KEY_CHAR_ALT_R};
  for(unsigned int i=0; i < sizeof(modifierKeys); i++){
    if(modifierKeys[i] == key){
      return true;
    }
  }

  return false;
}

bool isMediaKey(char key){
  if(schema != KEY_SCHEMA_FN){
    return false;
  }
  char madiaKeys[] = {KEY_CHAR_F9, KEY_CHAR_F10, KEY_CHAR_F11, KEY_CHAR_F12};
  for(unsigned int i=0; i < sizeof(madiaKeys); i++){
    if(madiaKeys[i] == key){
      return true;
    }
  }

  return false;
}

void handlKey(char key){
  if(key == KEY_CHAR_FN){
    schema = KEY_SCHEMA_FN;
  }else{
    if(isModifierKey(key)){
      if(debug){
        Serial.print("Modifier key ");
        Serial.print(key);
        Serial.println(" PRESSED ");
      }

      pressModifierKey(key);
      sendModifierKey();
    }
    else if(isMediaKey(key)){
      if(debug){
        Serial.print("Media key ");
        Serial.print(key);
        Serial.println(" PRESSED ");
      }
      Keyboard.press(getKeyMapping(schema, key));
    }
    else{
      if(debug){
        Serial.print("Key ");
        Serial.print(key);
        Serial.println(" PRESSED ");
      }
      Keyboard.set_key1(getKeyMapping(schema, key));
      Keyboard.send_now();
    }                  
  }
}

void releaseKey(char key){
  if(key == KEY_CHAR_FN){
    schema = KEY_SCHEMA_DEFAULT;
  }else{
    if(isModifierKey(key)){
      if(debug){
        Serial.print("Modifier key ");
        Serial.print(key);
        Serial.println(" RELEASED ");
      }
      releaseModifierKey(key);
      sendModifierKey();
    }
    else if(isMediaKey(key)){
      if(debug){
        Serial.print("Media key ");
        Serial.print(key);
        Serial.println(" RELEASED ");
      }
      Keyboard.release(getKeyMapping(schema, key));
    }
    else{
      if(debug){
        Serial.print("Key ");
        Serial.print(key);
        Serial.println(" RELEASED ");
      }
      Keyboard.set_key1(0);
      Keyboard.send_now();
    }
  }
}

void pressModifierKey(char key){
  unsigned int keyValue = getKeyMapping(schema, key);
  switch (key) {
   case KEY_CHAR_SHIFT:
    prasedModifierKeys[0] = keyValue;
     break;
   case KEY_CHAR_CTRL:
    prasedModifierKeys[1] = keyValue;
     break;
   case KEY_CHAR_WIN:
    prasedModifierKeys[2] = keyValue;
     break;
   case KEY_CHAR_ALT_L:
    prasedModifierKeys[3] = keyValue;
     break;
   case KEY_CHAR_ALT_R:
    prasedModifierKeys[4] = keyValue;
     break;
 }
}

void releaseModifierKey(char key){
   switch (key) {
     case KEY_CHAR_SHIFT:
      prasedModifierKeys[0] = 0;
       break;
     case KEY_CHAR_CTRL:
      prasedModifierKeys[1] = 0;
       break;
     case KEY_CHAR_WIN:
      prasedModifierKeys[2] = 0;
       break;
     case KEY_CHAR_ALT_L:
      prasedModifierKeys[3] = 0;
       break;
     case KEY_CHAR_ALT_R:
      prasedModifierKeys[4] = 0;
       break;
 }
}

void sendModifierKey(){
  Keyboard.set_modifier(prasedModifierKeys[0] | prasedModifierKeys[1] | prasedModifierKeys[2] | prasedModifierKeys[3] | prasedModifierKeys[4]);
  Keyboard.send_now();
}
