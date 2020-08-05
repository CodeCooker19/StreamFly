#ifndef GLOBAL_H
#define GLOBAL_H

#include <QString>
#include <QSize>
#include <QColor>

class CSFApplication;
extern CSFApplication  *g_pApp;

enum MEDIA_TYPE{
    NONE_MEDIA = 0,
    PHOTO_MEDIA,
    VIDEO_MEDIA,
    AUDIA_MEDIA,
    CAMERA_MEDIA
};

#define MEDIA_ROW_COUNT         6
#define DEFAULT_SCREEN_WIDTH    1200
#define MIN_SCREEN_WIDTH        900
#define TITLE_FONT_SIZE         31
#define BUTTON_FONT_SIZE        19.5
#define INPUT_BT_FONT_SIZE      14
#define WIDGET_RADIUS_SIZE      10
#define FADE_BAR_MIN            1
#define FADE_BAR_MAX            4

extern QSize   g_sizeScreen;

const QString       STR_MAIN_FONT_FAMILY("Crillee Extra Bold Italic Std");
const QString       STR_TITLE("Stream Fly");
const QString       STR_ADD_INPUT("Add Input");
const QString       STR_CUT("Cut");
const QString       STR_RECORD("Record");
const QString       STR_SAVE("Save");
const QString       STR_MERGE("Merge");
const QString       STR_STREAM("Stream");
const QString       STR_WIPE("Wipe");
const QString       STR_NEW("New");
const QString       STR_PHOTO_TYPE("Images (*.png *.xpm *.jpg)");
const QString       STR_VIDEO_TYPE("Video files (*.avi *.mp4)");
const QString       STR_AUDIO_TYPE("Audio files (*.mp3 *.wav)");

const QColor        PURPLE_COLOR(57, 4, 122);
const QColor        BLACK_COLOR(30, 30, 30);
const QColor        DARK_GRAY_COLOR(70, 70, 70);
const QColor        LIGHT_GRAY_COLOR(245, 245, 245);


#endif // GLOBAL_H
