// Room: /u/yuki/room/taoyuan.c

inherit ROOM;

void create()
{
        set("short", "������԰");
        set("long", @LONG
��ǰ��Ȼ���ʣ�������һ�����´��ܶ������ǲ�֪��Ϊʲô��
�ߺܳ��㡣�ı�ȫ������ʯ�����ϳ��������ߵĴ���û������ֲ�
�������де�ֲ���м䣬��Լ�и�ʮ��������Ů������ӯ�ĺ�һֻ
С��è��ˣ��
LONG
        );
        set("no_clean_up", 0);
        set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"taoyuan1",
]));
        set("objects", ([
                "/u/yuki/npc/girl" : 1,
                  "/u/yuki/npc/cat" : 1,
        ]));

        setup();
        replace_program(ROOM);
}
