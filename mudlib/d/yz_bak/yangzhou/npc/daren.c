                                                    inherit KZZNPC;
inherit F_VENDOR;

string query_save_file() { return DATA_DIR + "npc/����"; }

void create()
{
#include <kzznpc.h>

        set("area_name","�����ӻ���");
        set("area_file","/d/yangzhou/zahuopu.c");
        setup();
}

