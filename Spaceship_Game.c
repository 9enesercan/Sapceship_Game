

#include <U8glib.h>
#include "pitches.h"

byte digit[10] = {0x3F, 0x06, 0x5B, 0x4F, 0x66, 0x6D, 0x7D, 0x07, 0x7F, 0x6F}; // 0-9 rakamları

U8GLIB_SSD1306_128X64 u8g(U8G_I2C_OPT_DEV_0 | U8G_I2C_OPT_NO_ACK | U8G_I2C_OPT_FAST);

// 'icon_3dcube', 16x16px
const unsigned char bitmap_settings[] PROGMEM = {
    0xff, 0xff, 0xff, 0xff, 0xfe, 0x7f, 0xf6, 0x6f, 0xe0, 0x07, 0xf0, 0x0f, 0xf3, 0xcf, 0xc3, 0xc3,
    0xc3, 0xc3, 0xf3, 0xcf, 0xf0, 0x0f, 0xe0, 0x07, 0xf6, 0x6f, 0xfe, 0x7f, 0xff, 0xff, 0xff, 0xff};
// 'icon_Oyun', 16x16px
const unsigned char bitmap_icon_Oyun[] PROGMEM = {
    0xfe, 0x7f, 0xfe, 0x7f, 0xfc, 0x3f, 0xfc, 0x3f, 0xf8, 0x3f, 0xf9, 0x9f, 0xf9, 0x9f, 0xf1, 0x8f,
    0xe0, 0x0f, 0xe0, 0x05, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0xa4, 0x25, 0xfd, 0xbf, 0xff, 0xff};

// Array of all bitmaps for convenience. (Total bytes used to store images in PROGMEM = 384)
const unsigned char *bitmap_icons[2] = {
    bitmap_settings,
    bitmap_icon_Oyun,
};

const unsigned char menu2_selected[] PROGMEM = {
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe3, 0xc7, 0xe1, 0x87, 0xe1, 0x0f, 0xf0, 0x1f, 0xfc, 0x3f,
    0xf8, 0x3f, 0xf0, 0x0f, 0xe1, 0x87, 0xe3, 0x87, 0xe7, 0xc7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff};
const unsigned char menu2_unselected[] PROGMEM = {
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff};

const unsigned char *bitmap2_icons[2] = {

    menu2_selected,
    menu2_unselected

};

// 'scrollbar_background', 8x64px
const unsigned char bitmap_scrollbar_background[] PROGMEM = {
    0x00, 0x02, 0x00, 0x02, 0x00, 0x02, 0x00, 0x02, 0x00, 0x02, 0x00, 0x02, 0x00, 0x02, 0x00, 0x02,
    0x00, 0x02, 0x00, 0x02, 0x00, 0x02, 0x00, 0x02, 0x00, 0x02, 0x00, 0x02, 0x00, 0x02, 0x00, 0x02,
    0x00, 0x02, 0x00, 0x02, 0x00, 0x02, 0x00, 0x02, 0x00, 0x02, 0x00, 0x02, 0x00, 0x02, 0x00, 0x02,
    0x00, 0x02, 0x00, 0x02, 0x00, 0x02, 0x00, 0x02, 0x00, 0x02, 0x00, 0x02, 0x00, 0x02, 0x00, 0x00};

// 'item_sel_outline', 128x21px
const unsigned char bitmap_item_sel_outline[] PROGMEM = {
    0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20,
    0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30,
    0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30,
    0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30,
    0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30,
    0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30,
    0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30,
    0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30,
    0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30,
    0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30,
    0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30,
    0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30,
    0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30,
    0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30,
    0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30,
    0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30,
    0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30,
    0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30,
    0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0,
    0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0};

#define BUTTON_UP_PIN 14
#define BUTTON_SELECT_PIN 15
#define BUTTON_DOWN_PIN 16

#define Button_Fire_pin 13

#define Buzzer_pin 11
#define LDR_pin 12
#define Pot_A 0

#define Healt_led_1 5
#define Healt_led_2 6
#define Healt_led_3 7

#define Bullet_led_1 8
#define Bullet_led_2 9
#define Bullet_led_3 10

#define Shield_led 17

#define LATCH 4
#define CLK 3
#define DATA 2

const int NUM_ITEMS = 2;
const int MAX_ITEM_LENGTH = 15;
const int NUM2_ITEMS = 3;

char menu_items[NUM_ITEMS][MAX_ITEM_LENGTH] = {
    {"Ayarlar"},
    {"Oyun"},

};
char menu2_items[NUM2_ITEMS][MAX_ITEM_LENGTH] = {
    {"Zorluk lvl1"},
    {"Zorluk lvl2"},
    {"Geri Don"},

};

int button_up_clicked = 0; // yukari tusuna basilmasina gore islem
int button_select_clicked = 0;
int button_down_clicked = 0;

int item_selected = 0; // menude hangisi secildi

int item_sel_previous;
int item_sel_next;

int button2_up_clicked = 0; // yukari tusuna basilmasina gore islem
int button2_select_clicked = 0;
int button2_down_clicked = 0;
int Button_Fire_clicked = 1;

int item2_selected = 0; // menude hangisi secildi

int item2_sel_previous;
int item2_sel_next;

int current_screen = 0; // 0 = menu, 1 = ayarlar , 2 = oyun

int difficulty = 0;
int game_speed = 1000;
int healt = 3;
int bullet_count = 3;
int score = 0;
int ship_y;
int shield = 0;
int obs_count = 0;

const unsigned char bitmap_meteor[] PROGMEM = {
    0x00, 0x00, 0x3c, 0x00, 0x7f, 0xe0, 0xc7, 0x00, 0xd7, 0x80, 0x83, 0xe0, 0xab, 0xf0, 0x83, 0x00,
    0xc6, 0x00, 0x7f, 0xc0, 0x38, 0x00, 0x00, 0x00};
const unsigned char bitmap_trash[] PROGMEM = {
    0x0e, 0x00, 0x1f, 0x00, 0x3f, 0x80, 0x73, 0xc0, 0xe1, 0xe0, 0xe0, 0xf0, 0xe0, 0x70, 0x70, 0x70,
    0x38, 0xe0, 0x1f, 0xc0, 0x0f, 0x80, 0x07, 0x00};

const unsigned char *bitmap_obs[2] = {

    bitmap_trash,
    bitmap_meteor

};

const unsigned char bitmap_spaceship[] PROGMEM = {
    0x00, 0x00, 0x38, 0x00, 0x3c, 0x00, 0x3e, 0x00, 0x1f, 0x80, 0x78, 0xf0, 0x78, 0xf0, 0x1f, 0x80,
    0x3e, 0x00, 0x3c, 0x00, 0x38, 0x00, 0x00, 0x00};

unsigned long previousMillis = 0;
unsigned long previousMillis2 = 0;
unsigned long previousMillis3 = 0;
unsigned long previousMillis4 = 0;

class Obstacle
{
public:
    Obstacle(int x, int y, int type)
    {
        this->x = x;
        this->y = y;
        this->type = type;

        if (type == 0)
            this->health = 1;
        else
            this->health = 2;
    }

    void move()
    {
        this->x -= 1;
    }

    void hit()
    {
        this->health -= 1;
    }

    int x;
    int y;
    int health;
    int type;
};

struct Node
{
    Obstacle obstacle;
    Node *next;
};

class ObsList
{
public:
    Node *head;

    ObsList()
    {
        head = nullptr;
    }

    void insert(Obstacle obstacle)
    {
        Node *node = new Node{obstacle, nullptr};
        if (head == nullptr)
        {
            head = node;
        }
        else
        {
            Node *curr = head;
            while (curr->next != nullptr)
            {
                curr = curr->next;
            }
            curr->next = node;
        }
    }

    void remove(Node *node)
    {
        if (node == head)
        {
            head = head->next;
        }
        else
        {
            Node *curr = head;
            while (curr->next != node)
            {
                curr = curr->next;
            }
            curr->next = node->next;
        }
        delete node;
    }

    void check()
    {
        Node *curr = head;
        while (curr != nullptr)
        {
            if (curr->obstacle.health <= 0 || curr->obstacle.x < -12)
            {
                remove(curr);
            }
            else
            {
                curr = curr->next;
            }
        }
    }

    void moveAll()
    {
        Node *curr = head;
        while (curr != nullptr)
        {
            curr->obstacle.x -= 1;
            curr = curr->next;
        }
        check();
    }

    Node *getFirst()
    {
        return head;
    }

    void deleteNode(Obstacle obstacle)
    {
        Node *prev = nullptr;
        Node *curr = head;

        while (curr != nullptr)
        {
            if (curr->obstacle.x == obstacle.x && curr->obstacle.y == obstacle.y)
            {
                if (prev == nullptr)
                {
                    head = curr->next;
                }
                else
                {
                    prev->next = curr->next;
                }
                delete curr;
                return;
            }
            prev = curr;
            curr = curr->next;
        }
    }
};

class BulletList
{
public:
    Node *head;

    BulletList()
    {
        head = nullptr;
    }

    void insert(Obstacle bullet)
    {
        Node *node = new Node{Obstacle(bullet.x, bullet.y, 0), nullptr};
        if (head == nullptr)
        {
            head = node;
        }
        else
        {
            Node *curr = head;
            while (curr->next != nullptr)
            {
                curr = curr->next;
            }
            curr->next = node;
        }
    }

    void remove(Node *node)
    {
        if (node == head)
        {
            head = head->next;
        }
        else
        {
            Node *curr = head;
            while (curr->next != node)
            {
                curr = curr->next;
            }
            curr->next = node->next;
        }
        delete node;
    }

    void moveAll()
    {
        Node *curr = head;
        while (curr != nullptr)
        {
            curr->obstacle.x += 1;
            curr = curr->next;
        }
        check();
    }

    void check()
    {
        Node *curr = head;
        while (curr != nullptr)
        {
            if (curr->obstacle.health <= 0 || curr->obstacle.x > 128)
            {
                remove(curr);
            }
            else
            {
                curr = curr->next;
            }
        }
    }

    Node *getFirst()
    {
        return head;
    }
    void deleteNode(Obstacle obstacle)
    {
        Node *prev = nullptr;
        Node *curr = head;

        while (curr != nullptr)
        {
            if (curr->obstacle.x == obstacle.x && curr->obstacle.y == obstacle.y)
            {
                if (prev == nullptr)
                {
                    head = curr->next;
                }
                else
                {
                    prev->next = curr->next;
                }
                delete curr;
                return;
            }
            prev = curr;
            curr = curr->next;
        }
    }
};

ObsList obstacles;
BulletList bullets;

void add_obs()
{
    randomSeed(analogRead(1));        // Rastgele sayılar için seed oluştur
    int num_obstacles = random(1, 3); // rastgele sayıda engel oluştur
    for (int i = 0; i < num_obstacles; i++)
    {
        int y = random(0, 5);

        int typ = random(0, 2);
        Obstacle obstacle(128, y * 12, typ);
        obstacles.insert(obstacle);
        obs_count++;
    }
}
void add_bullet(int y)
{
    Obstacle bult_tmp(13, y, 0);
    bullets.insert(bult_tmp);
}

void setup()
{

    game_set();

    u8g.setColorIndex(1);

    pinMode(BUTTON_UP_PIN, INPUT_PULLUP);
    pinMode(BUTTON_SELECT_PIN, INPUT_PULLUP);
    pinMode(BUTTON_DOWN_PIN, INPUT_PULLUP);

    pinMode(LATCH, OUTPUT);
    pinMode(CLK, OUTPUT);
    pinMode(DATA, OUTPUT);

    pinMode(Healt_led_1, OUTPUT);
    pinMode(Healt_led_2, OUTPUT);
    pinMode(Healt_led_3, OUTPUT);

    pinMode(Bullet_led_1, OUTPUT);
    pinMode(Bullet_led_2, OUTPUT);
    pinMode(Bullet_led_3, OUTPUT);
    pinMode(Shield_led, OUTPUT);

    pinMode(LDR_pin, INPUT);
    pinMode(Buzzer_pin, OUTPUT);
}

void loop()
{

    upd_led();

    if (current_screen == 0)
    {
        MENU();
    }
    else if (current_screen == 1)
    {
        SETTINGS();
    }
    // GAME AND DRAW-------------------------------
    u8g.firstPage();
    do
    {

        if (current_screen == 0)
        { // MENU SCREEN

            u8g.drawBitmapP(0, 22, 128 / 8, 21, bitmap_item_sel_outline);

            u8g.setFont(u8g_font_7x14);
            u8g.drawStr(25, 15, menu_items[item_sel_previous]);
            u8g.drawBitmapP(4, 2, 16 / 8, 16, bitmap_icons[item_sel_previous]);

            u8g.setFont(u8g_font_7x14B);
            u8g.drawStr(25, 15 + 20 + 2, menu_items[item_selected]);
            u8g.drawBitmapP(4, 24, 16 / 8, 16, bitmap_icons[item_selected]);

            u8g.setFont(u8g_font_7x14);
            u8g.drawStr(25, 15 + 20 + 20 + 2 + 2, menu_items[item_sel_next]);
            u8g.drawBitmapP(4, 46, 16 / 8, 16, bitmap_icons[item_sel_next]);

            u8g.drawBitmapP(128 - 8, 0, 8 / 8, 64, bitmap_scrollbar_background);

            u8g.drawBox(125, 64 / NUM_ITEMS * item_selected, 3, 64 / NUM_ITEMS);
        }
        else if (current_screen == 1)
        {
            u8g.drawBitmapP(0, 22, 128 / 8, 21, bitmap_item_sel_outline);

            int tmp = 1;
            int tmp2 = 1;
            int tmp3 = 1;

            if (difficulty == item2_sel_previous)
            {
                tmp = 0;
            }
            else if (difficulty == item2_selected)
            {
                tmp2 = 0;
            }
            else
            {
                tmp3 = 0;
            }

            u8g.setFont(u8g_font_7x14);
            u8g.drawStr(25, 15, menu2_items[item2_sel_previous]);

            u8g.drawBitmapP(4, 2, 16 / 8, 16, bitmap2_icons[tmp]);

            u8g.setFont(u8g_font_7x14B);
            u8g.drawStr(25, 15 + 20 + 2, menu2_items[item2_selected]);
            u8g.drawBitmapP(4, 24, 16 / 8, 16, bitmap2_icons[tmp2]);

            u8g.setFont(u8g_font_7x14);
            u8g.drawStr(25, 15 + 20 + 20 + 2 + 2, menu2_items[item2_sel_next]);
            u8g.drawBitmapP(4, 46, 16 / 8, 16, bitmap2_icons[tmp3]);

            u8g.drawBitmapP(128 - 8, 0, 8 / 8, 64, bitmap_scrollbar_background);

            u8g.drawBox(125, 64 / NUM2_ITEMS * item2_selected, 3, 64 / NUM2_ITEMS);
        }
        else if (current_screen == 2)
        {
            GAME();
        }
        else if (current_screen == 3)
        {
            u8g.setFont(u8g_font_7x14);
            u8g.drawStr(25, 15 + 20, "GAME OVER!");
            if ((digitalRead(BUTTON_SELECT_PIN) == LOW) && (button_select_clicked == 0))
            {
                sound(2);
                button_select_clicked = 1;
                current_screen = 0;
                game_set();
            }
            if ((digitalRead(BUTTON_SELECT_PIN) == HIGH) && (button_select_clicked == 1))
            {
                button_select_clicked = 0;
            }
        }

    } while (u8g.nextPage()); // required for page drawing mode with u8g library
}

void show_score(int num)
{
    int ones = num % 10;
    int tens = (num / 10) % 10;
    int hundreds = (num / 100) % 10;

    digitalWrite(LATCH, LOW);
    shiftOut(DATA, CLK, MSBFIRST, ~digit[ones]);     // birinci basamak
    shiftOut(DATA, CLK, MSBFIRST, ~digit[tens]);     // ikinci basamak
    shiftOut(DATA, CLK, MSBFIRST, ~digit[hundreds]); // üçüncü basamak
    digitalWrite(LATCH, HIGH);
}

void speed_set()
{
    if (difficulty == 0)
    {
        game_speed = 1000;
    }
    else if (difficulty == 1)
    {
        game_speed = game_speed - (game_speed / 5);
    }
}

void upd_led()
{

    if (healt == 3)
    {
        digitalWrite(Healt_led_1, HIGH);
        digitalWrite(Healt_led_2, HIGH);
        digitalWrite(Healt_led_3, HIGH);
    }
    else if (healt == 2)
    {
        digitalWrite(Healt_led_1, HIGH);
        digitalWrite(Healt_led_2, HIGH);
        digitalWrite(Healt_led_3, LOW);
    }
    else if (healt == 1)
    {
        digitalWrite(Healt_led_1, HIGH);
        digitalWrite(Healt_led_2, LOW);
        digitalWrite(Healt_led_3, LOW);
    }
    else
    {
        digitalWrite(Healt_led_1, LOW);
        digitalWrite(Healt_led_2, LOW);
        digitalWrite(Healt_led_3, LOW);
    }

    if (bullet_count == 3)
    {
        digitalWrite(Bullet_led_1, HIGH);
        digitalWrite(Bullet_led_2, HIGH);
        digitalWrite(Bullet_led_3, HIGH);
    }
    else if (bullet_count == 2)
    {
        digitalWrite(Bullet_led_1, HIGH);
        digitalWrite(Bullet_led_2, HIGH);
        digitalWrite(Bullet_led_3, LOW);
    }
    else if (bullet_count == 1)
    {
        digitalWrite(Bullet_led_1, HIGH);
        digitalWrite(Bullet_led_2, LOW);
        digitalWrite(Bullet_led_3, LOW);
    }
    else
    {
        digitalWrite(Bullet_led_1, LOW);
        digitalWrite(Bullet_led_2, LOW);
        digitalWrite(Bullet_led_3, LOW);
    }

    show_score(score);
}

void game_set()
{
    difficulty = 0;
    game_speed = 1000;
    healt = 3;
    bullet_count = 3;
    score = 0;
    obs_count = 0;
    obstacles.head = nullptr;
    bullets.head = nullptr;
}

void sound(int mode)
{

    if (mode == 1)
    {
        tone(Buzzer_pin, NOTE_C4, 100);
    }
    else if (mode == 2)
    {
        tone(Buzzer_pin, NOTE_B4, 100);
    }
    else if (mode == 3)
    {
        tone(Buzzer_pin, NOTE_C7, 100);
    }
    else if (mode == 4)
    {
        tone(Buzzer_pin, NOTE_C2, 100);
    }
    else if (mode == 5)
    {
        tone(Buzzer_pin, NOTE_F4, 100);
    }
    else if (mode == 6)
    {
        tone(Buzzer_pin, 261); // Do note
        delay(200);
        noTone(Buzzer_pin);
        delay(100);

        tone(Buzzer_pin, 220); // La note
        delay(200);
        noTone(Buzzer_pin);
        delay(100);

        tone(Buzzer_pin, 196); // Sol note
        delay(200);
        noTone(Buzzer_pin);
        delay(500);
    }
}

void fire(int y)
{
    if (bullet_count > 0)
    {
        bullet_count--;
        add_bullet(y);
        sound(3);
    }
    else
        sound(4);
}

void MENU()
{

    if ((digitalRead(BUTTON_UP_PIN) == LOW) && (button_up_clicked == 0))
    {

        sound(1);

        item_selected = item_selected - 1;
        button_up_clicked = 1;
        if (item_selected < 0)
        {
            item_selected = NUM_ITEMS - 1;
        }
    }
    else if ((digitalRead(BUTTON_DOWN_PIN) == LOW) && (button_down_clicked == 0))
    {

        sound(1);

        item_selected = item_selected + 1;
        button_down_clicked = 1;
        if (item_selected >= NUM_ITEMS)
        {
            item_selected = 0;
        }
    }

    if ((digitalRead(BUTTON_UP_PIN) == HIGH) && (button_up_clicked == 1))
    {
        button_up_clicked = 0;
    }
    if ((digitalRead(BUTTON_DOWN_PIN) == HIGH) && (button_down_clicked == 1))
    {
        button_down_clicked = 0;
    }

    if ((digitalRead(BUTTON_SELECT_PIN) == LOW) && (button_select_clicked == 0))
    {

        sound(2);
        button_select_clicked = 1;
        if (item_selected == 0)
        {
            current_screen = 1;
        }
        else if (item_selected == 1)
        {
            current_screen = 2;
        }
    }
    if ((digitalRead(BUTTON_SELECT_PIN) == HIGH) && (button_select_clicked == 1))
    {
        button_select_clicked = 0;
    }

    item_sel_previous = item_selected - 1;
    if (item_sel_previous < 0)
    {
        item_sel_previous = NUM_ITEMS - 1;
    }
    item_sel_next = item_selected + 1;
    if (item_sel_next >= NUM_ITEMS)
    {
        item_sel_next = 0;
    }
}

void SETTINGS()
{

    if ((digitalRead(BUTTON_UP_PIN) == LOW) && (button2_up_clicked == 0))
    {

        sound(1);

        item2_selected = item2_selected - 1;
        button2_up_clicked = 1;
        if (item2_selected < 0)
        {
            item2_selected = NUM2_ITEMS - 1;
        }
    }
    else if ((digitalRead(BUTTON_DOWN_PIN) == LOW) && (button2_down_clicked == 0))
    {

        sound(1);

        item2_selected = item2_selected + 1;
        button2_down_clicked = 1;
        if (item2_selected >= NUM2_ITEMS)
        {
            item2_selected = 0;
        }
    }

    if ((digitalRead(BUTTON_UP_PIN) == HIGH) && (button2_up_clicked == 1))
    { // unclick
        button2_up_clicked = 0;
    }
    if ((digitalRead(BUTTON_DOWN_PIN) == HIGH) && (button2_down_clicked == 1))
    { // unclick
        button2_down_clicked = 0;
    }

    if ((digitalRead(BUTTON_SELECT_PIN) == LOW) && (button2_select_clicked == 0))
    {

        sound(2);
        button2_select_clicked = 1;
        if (item2_selected == 2)
        {
            current_screen = 0;
        }
        else if (item2_selected == 1)
        {
            difficulty = 1;
        }
        else if (item2_selected == 0)
        {
            difficulty = 0;
        }
    }
    if ((digitalRead(BUTTON_SELECT_PIN) == HIGH) && (button2_select_clicked == 1))
    {
        button2_select_clicked = 0;
    }

    item2_sel_previous = item2_selected - 1;
    if (item2_sel_previous < 0)
    {
        item2_sel_previous = NUM2_ITEMS - 1;
    }
    item2_sel_next = item2_selected + 1;
    if (item2_sel_next >= NUM2_ITEMS)
    {
        item2_sel_next = 0;
    }
}

void GAME()
{

    upd_led();

    unsigned long currentMillis = millis();
    unsigned long currentMillis2 = millis();
    unsigned long currentMillis3 = millis();
    unsigned long currentMillis4 = millis();

    int pot_v = analogRead(Pot_A);

    ship_y = pot_v / 21.31;
    u8g.drawBitmapP(0, ship_y, 2, 12, bitmap_spaceship);

    if (obs_count >= 14)
    {
        obs_count = 0;
        if (healt < 3)
            healt++;
        if (bullet_count < 3)
            bullet_count++;
        upd_led();
    }
    if ((digitalRead(Button_Fire_pin) == LOW) && (Button_Fire_clicked == 0))
    {
        Button_Fire_clicked = 1;
        fire(ship_y + 7);
    }
    if ((digitalRead(Button_Fire_pin) == HIGH) && (Button_Fire_clicked == 1))
    {
        Button_Fire_clicked = 0;
    }
    bullets.moveAll();

    if (currentMillis - previousMillis >= game_speed + 300)
    {
        previousMillis = currentMillis;
        add_obs();
        score++;
    }
    if (currentMillis2 - previousMillis2 >= 10000)
    {
        previousMillis2 = currentMillis2;
        speed_set();
    }
    if (currentMillis3 - previousMillis3 >= game_speed / 12)
    {
        previousMillis3 = currentMillis3;
        obstacles.moveAll();
    }

    if (currentMillis4 - previousMillis4 <= 3500)
    {
        shield = 1;
        digitalWrite(Shield_led, HIGH);
    }
    else
    {
        digitalWrite(Shield_led, LOW);
        shield = 0;
    }

    for (Node *current = obstacles.getFirst(); current != NULL; current = current->next)
    {
        Obstacle obstacle = current->obstacle;
        if (obstacle.type == 0)
        {
            u8g.drawBitmapP(obstacle.x, obstacle.y, 2, 12, bitmap_obs[0]);
        }
        else
        {
            u8g.drawBitmapP(obstacle.x, obstacle.y, 2, 12, bitmap_obs[1]);
        }

        if (shield == 0 && 0 < obstacle.x + 12 && 12 > obstacle.x && ship_y < obstacle.y + 12 && ship_y + 12 > obstacle.y)
        {
            shield = 1;
            healt--;
            previousMillis4 = currentMillis4;
            sound(5);
            delay(100);
            upd_led();

            obstacles.deleteNode(current->obstacle);
            if (healt <= 0)
            {
                sound(6);
                current_screen = 3;
                return;
            }
        }
    }

    for (Node *current = bullets.getFirst(); current != NULL; current = current->next)
    {
        Obstacle bult = current->obstacle;
        u8g.drawStr(bult.x, bult.y, "-");

        for (Node *current_obs = obstacles.getFirst(); current_obs != NULL; current_obs = current_obs->next)
        {
            Obstacle obstacle = current_obs->obstacle;
            if (obstacle.x <= bult.x && obstacle.x + 12 >= bult.x && obstacle.y <= bult.y && obstacle.y + 12 >= bult.y)
            {
                current_obs->obstacle.hit();
                bullets.deleteNode(current->obstacle);

                delay(100);

                if (current_obs->obstacle.health <= 0)
                {
                    obstacles.deleteNode(current_obs->obstacle);
                }
            }
        }
    }
}