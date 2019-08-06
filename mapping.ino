char keysNumbers[77] = { 0,
  KEY_CHAR_A,
  KEY_CHAR_B,
  KEY_CHAR_C,
  KEY_CHAR_D,
  KEY_CHAR_E,
  KEY_CHAR_F,
  KEY_CHAR_G,
  KEY_CHAR_H,
  KEY_CHAR_I,
  KEY_CHAR_J,
  KEY_CHAR_K,
  KEY_CHAR_L,
  KEY_CHAR_M,
  KEY_CHAR_N,
  KEY_CHAR_O,
  KEY_CHAR_P,
  KEY_CHAR_Q,
  KEY_CHAR_R,
  KEY_CHAR_S,
  KEY_CHAR_T,
  KEY_CHAR_U,
  KEY_CHAR_W,
  KEY_CHAR_X,
  KEY_CHAR_Y,
  KEY_CHAR_Z,
  KEY_CHAR_V,
  KEY_CHAR_1,
  KEY_CHAR_2,
  KEY_CHAR_3,
  KEY_CHAR_4,
  KEY_CHAR_5,
  KEY_CHAR_6,
  KEY_CHAR_7,
  KEY_CHAR_8,
  KEY_CHAR_9,
  KEY_CHAR_0,
  KEY_CHAR_S1,
  KEY_CHAR_S2,
  KEY_CHAR_S3,
  KEY_CHAR_S4,
  KEY_CHAR_S5,
  KEY_CHAR_S6,
  KEY_CHAR_S7,
  KEY_CHAR_S8,
  KEY_CHAR_S9,
  KEY_CHAR_S10,
  KEY_CHAR_S11,
  KEY_CHAR_F1,
  KEY_CHAR_F2,
  KEY_CHAR_F3,
  KEY_CHAR_F4,
  KEY_CHAR_F5,
  KEY_CHAR_F6,
  KEY_CHAR_F7,
  KEY_CHAR_F8,
  KEY_CHAR_F9,
  KEY_CHAR_F10,
  KEY_CHAR_F11,
  KEY_CHAR_F12,
  KEY_CHAR_SPACE,
  KEY_CHAR_ENTER,
  KEY_CHAR_UP,
  KEY_CHAR_DOWN,
  KEY_CHAR_LEFT,
  KEY_CHAR_RIGHT,
  KEY_CHAR_ESC,
  KEY_CHAR_DEL,
  KEY_CHAR_BACKSPACE,
  KEY_CHAR_TAB,
  KEY_CHAR_CAPSLOCK,
  KEY_CHAR_SHIFT,
  KEY_CHAR_CTRL,
  KEY_CHAR_WIN,
  KEY_CHAR_ALT_L,
  KEY_CHAR_ALT_R,
  KEY_CHAR_FN
};

unsigned int defaultMapping[77] = {
  0,
  KEY_A,
  KEY_B,
  KEY_C,
  KEY_D,
  KEY_E,
  KEY_F,
  KEY_G,
  KEY_H,
  KEY_I,
  KEY_J,
  KEY_K,
  KEY_L,
  KEY_M,
  KEY_N,
  KEY_O,
  KEY_P,
  KEY_Q,
  KEY_R,
  KEY_S,
  KEY_T,
  KEY_U,
  KEY_W,
  KEY_X,
  KEY_Y,
  KEY_Z,
  KEY_V,  
  KEY_1,
  KEY_2,
  KEY_3,
  KEY_4,
  KEY_5,
  KEY_6,
  KEY_7,
  KEY_8,
  KEY_9,
  KEY_0,
  KEY_MINUS,
  KEY_EQUAL,
  KEY_RIGHT_BRACE,
  KEY_LEFT_BRACE,
  KEY_BACKSLASH,
  KEY_SLASH,
  KEY_QUOTE,
  KEY_SEMICOLON,
  KEY_COMMA,
  KEY_PERIOD,
  KEY_TILDE,
  KEY_F1,
  KEY_F2,
  KEY_F3,
  KEY_F4,
  KEY_F5,
  KEY_F6,
  KEY_F7,
  KEY_F8,
  KEY_F9,
  KEY_F10,
  KEY_F11,
  KEY_F12,
  KEY_SPACE,
  KEY_ENTER,
  KEY_UP,
  KEY_DOWN,
  KEY_LEFT,
  KEY_RIGHT,
  KEY_ESC,
  KEY_DELETE,
  KEY_BACKSPACE,
  KEY_TAB,
  KEY_CAPS_LOCK,
  MODIFIERKEY_SHIFT,
  MODIFIERKEY_CTRL,
  MODIFIERKEY_GUI,
  MODIFIERKEY_ALT,
  MODIFIERKEY_RIGHT_ALT,
  0
};

unsigned int fnMapping[77] = {
  0,
  0,  //  KEY_A,
  0,  //  KEY_B,
  0,  //  KEY_C,
  0,  //  KEY_D,
  0,  //  KEY_E,
  0,  //  KEY_F,
  0,  //  KEY_G,
  0,  //  KEY_H,
  KEYPAD_5,  //  KEY_I,
  KEYPAD_1,  //  KEY_J,
  KEYPAD_2,  //  KEY_K,
  KEYPAD_3,  //  KEY_L,
  KEYPAD_0,  //  KEY_M,
  0,  //  KEY_N,
  KEYPAD_6,  //  KEY_O,
  KEYPAD_MINUS,  //  KEY_P,
  0,  //  KEY_Q,
  0,  //  KEY_R,
  0,  //  KEY_S,
  0,  //  KEY_T,
  KEYPAD_4,  //  KEY_U,
  0,  //  KEY_W,
  0,  //  KEY_X,
  0,  //  KEY_Y,
  0,  //  KEY_Z,
  0,  //  KEY_V,  
  0,  //  KEY_1,
  0,  //  KEY_2,
  0,  //  KEY_3,
  0,  //  KEY_4,
  0,  //  KEY_5,
  0,  //  KEY_6,
  KEYPAD_7,  //  KEY_7,
  KEYPAD_8,  //  KEY_8,
  KEYPAD_9,  //  KEY_9,
  KEYPAD_ASTERIX,  //  KEY_0,
  0,  //  KEY_MINUS,
  0,  //  KEY_EQUAL,
  0,  //  KEY_RIGHT_BRACE,
  0,  //  KEY_LEFT_BRACE,
  0,  //  KEY_BACKSLASH,
  KEYPAD_SLASH,  //  KEY_SLASH,
  0,  //  KEY_QUOTE,
  KEYPAD_PLUS,  //  KEY_SEMICOLON,
  KEYPAD_PERIOD,  //  KEY_COMMA,
  KEYPAD_PERIOD,  //  KEY_PERIOD,
  0,  //  KEY_TILDE,
  KEY_INSERT,  //  KEY_F1,
  KEY_PRINTSCREEN,  //  KEY_F2,
  KEY_SCROLL_LOCK,  //  KEY_F3,
  0,  //  KEY_F4,
  0,  //  KEY_F5,
  0,  //  KEY_F6,
  0,  //  KEY_F7,
  0,  //  KEY_F8,
  KEY_MEDIA_PLAY_PAUSE,  //  KEY_F9,
  KEY_MEDIA_MUTE,  //  KEY_F10,
  KEY_MEDIA_VOLUME_DEC,  //  KEY_F11,
  KEY_MEDIA_VOLUME_INC,  //  KEY_F12,
  0,  //  KEY_SPACE,
  0,  //  KEY_ENTER,
  KEY_PAGE_UP,  //  KEY_UP,
  KEY_PAGE_DOWN,  //  KEY_DOWN,
  KEY_HOME,  //  KEY_LEFT,
  KEY_END,  //  KEY_RIGHT,
  0,  //  KEY_ESC,
  0,  //  KEY_DELETE,
  0,  //  KEY_BACKSPACE,
  0,  //  KEY_TAB,
  0,  //  KEY_CAPS_LOCK,
  KEY_NUM_LOCK,  //  MODIFIERKEY_SHIFT,
  0,  //  MODIFIERKEY_CTRL,
  0,  //  MODIFIERKEY_GUI,
  0,  //  MODIFIERKEY_ALT,
  0,  //  MODIFIERKEY_RIGHT_ALT,
  0,  //  9999
};

int getKeyId(char key){
  for(unsigned int i=0; i < sizeof(keysNumbers); i++){
    if(keysNumbers[i] == key){
      return i;
    }
  }

  return 0;
}

int getKeyMapping(int schema, char key){
  int id = getKeyId(key);
  if(debug){
    Serial.print("(key id - ");
    Serial.print(id);
    Serial.print(" - ");
    Serial.print(fnMapping[id]);
    Serial.print(")");
  }
  if(schema == KEY_SCHEMA_DEFAULT){
    return defaultMapping[id];
  }

  if(schema == KEY_SCHEMA_FN){
    return fnMapping[id];
  }

  return 0;
}