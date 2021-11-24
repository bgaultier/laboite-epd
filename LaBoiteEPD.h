/*
  LaBoiteEPD.h - Library for laboite EPD edition.
  Created by Baptiste Gaultier, November 24, 2021.
  Released under GPLv3
*/
#ifndef LaBoiteEPD_h
#define LaBoiteEPD_h

#include "Arduino.h"

#define ITEMS_ARRAY_SIZE 32
// uncomment if you want to debug
//#define DEBUG

class Item
{
  public:
    Item();
    Item(
      byte type,
      int x,
      int y,
      byte color,
      String content
    );
    byte getType() {return _type;};
    void setType(const char * type);
    byte getColor() {return _color;};
    void setColor(byte color) {_color = color;};
    byte getX() {return _x;};
    void setX(byte x) {_x = x;};
    byte getY() {return _y;};
    void setY(byte y) {_y = y;};
    String getContent() {return _content;};
    void setContent(String content) {_content = content;};
    String asString();
  private:
    byte    _type;
    byte    _x;
    byte    _y;
    byte    _color;
    String  _content;
};


class Tile
{
  public:
    Tile();
    Tile(
      unsigned int id,
      unsigned long last_activity
    );
    unsigned int getId() {return _id;};
    void setId(unsigned int id) {_id = id;};
    unsigned long getLastActivity() {return _last_activity;};
    void setLastActivity(unsigned long last_activity) {_last_activity = last_activity;};
    String asString();
    Item items[TILES_ARRAY_SIZE];
  private:
    unsigned int  _id;
    unsigned long _last_activity;
};

class BoiteEPD
{
  public:
    BoiteEPD();
    void    begin(String server);
    boolean getTiles();
    boolean updateTiles();
    boolean updateTile(unsigned int id);
    void    drawTiles();
    void    drawTile(int id);
    void    drawTile(int id, int x, int y);
    String  getSSID() {return _ssid;};
    String  getPass() {return _pass;};
  private:
    String  _server;
    String  _apikey;
    String  _ssid;
    String  _pass;
    Tile    _tiles[TILES_ARRAY_SIZE];
    String  _makePage(String title, String contents);
    String  _urlDecode(String input);
    void    _startWebServer();
};

#endif
