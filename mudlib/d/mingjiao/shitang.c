inherit ROOM;

void create()
{
        set("short", "ʳ��");
        set("long", @LONG
����������ʳ�ã�������̵������ŶӴ򷹣�һ�����������ζ
ӭ��Ϯ������Ҳ��ȥ�Ե��.
LONG
        );

        set("resource/water", 1);
        set("objects", ([
                "/d/obj/food/hulu" : 1,
                "/d/obj/food/kaoji":3,
                            ]));
        set("exits", ([
  "east" : __DIR__"tonglu1",
]));

        set("no_clean_up", 0);
        set("outdoors", "xingxiuhai");

        setup();
        replace_program(ROOM);
}
