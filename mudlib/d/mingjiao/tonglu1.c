inherit ROOM;
void create()
{
        set("short", "����");
        set("long", @LONG
���������ȡ����ȱ����ͨ�����̵�����Ϣ�ĵط���������Ƿ�
�ã������������˲��࣬���Ե������˶����䡣
LONG
        );

        set("exits", ([
                "west" : __DIR__"shitang",
                "north" : __DIR__"workroom",
                "east" : __DIR__"dadian",
                ]));

        setup();
        replace_program(ROOM);
}
