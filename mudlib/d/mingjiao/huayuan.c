inherit ROOM;
void create()
{
        set("short", "��԰");
        set("long", @LONG
     �����ǹ������ĺ�԰�������˻��ݡ�����Сͯ���ڽ���
������һ�����ŵ�С�ݡ�

LONG
        );

        set("exits", ([
                "south" : __DIR__"dadian",
                 "north":__DIR__"guifang.c",
              "west": __DIR__"tan",
                ]));

        setup();
        replace_program(ROOM);
}
