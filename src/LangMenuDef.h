
 /* Generated by script gen_c_from_strings_file.py
    DO NOT EDIT MANUALLY */

#ifndef LANG_MENU_DEF_H__
#define LANG_MENU_DEF_H__

#define LANGS_COUNT 46


typedef struct MenuDef {
    const char *m_title;
    int         m_id;
} MenuDef;

typedef struct LangDef {
    const char* _langName;
    int         _langId;
} LangDef;

extern LangDef g_langs[LANGS_COUNT];
extern MenuDef g_menuDefLang[LANGS_COUNT];

#endif