// tyroad7.c ���ɽ·
// by Marz

inherit ROOM;

void create()
{
        set("short", "Сé��");
        set("long", @LONG
        ���ǹ�����Ϣ��һ��С�ݡ�
LONG
        );
        set("outdoors", "wudang");

        set("exits", ([
                "east" : __DIR__"hutou",
        ]));
        set("objects", ([
                __DIR__"npc/guest2" : 3]));
        setup();
        replace_program(ROOM);
}
