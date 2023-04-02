void set_frequency(short dir); // Функция изменения частоты валкодером
void set_mod_Key(void); // Функция установки вида модуляции вручную 
void set_mod_Auto(void); // Функция установки вида модуляции в автоматическом режиме 
void set_regime(void); // Функция установки режима работы входа (УВЧ/АТТ/Обход)
void display_frequency(void); // Функция отображения установленной частоты
void set_step(void); // Функция установки шага изменения частоты
void display_radix(void); // Функция отображения шага изменения частоты
int GetPressed_Key(void); // Функция определения номера нажатой кнопки с антидребезгом
int GetButtonNumberByValue(int value); // функция по преобразованию кода нажатой кнопки в её номер   