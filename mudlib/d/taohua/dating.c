#include <ansi.h>
inherit ROOM;

void create()
{
    set("short", "�һ�ɽׯ����");
    set("long", 
"�������һ�ɽׯ����������������ʮ�ֿ��������й����˸���\n"
"���ҵ��鷨�漣���������۵��������йҵ�һ��������\n\n"
   
BLU "            �һ�Ӱ�����\n"
    "            �̺�����������\n\n"
NOR

"�����پ�ͦ�Σ����ƺ�ΰ��\n"
);
        set("exits", ([
            "north" : __DIR__"qianyuan",
            "south" : __DIR__"houyuan",
            "east"  : __DIR__"daojufang",
            "west"  : __DIR__"wofang" ,
        ]));
        set("objects", ([
                __DIR__"npc/huang" : 1,
        ]));

  
        setup();   
        replace_program(ROOM);
}

