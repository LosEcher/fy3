// Room: /u/yuki/room/shangfang.c

inherit ROOM;

void create()
{
        set("short", "ͤ�Ӷ�");
        set("long", @LONG
������Ȼ��ͤ�Ӷ��ˣ�����ȴ�Ƿǳ��ɾ�����������������
���ϵ���������»��ϲ��������¹�����ң�ĵ��ͼ����������
�㷢����һ��ָ����
LONG
        );
        set("no_clean_up", 0);
        set("exits", ([ /* sizeof() == 1 */
  "down" : __DIR__"meihuating",
]));
        set("objects", ([
                 __DIR__"obj/huan": 1,
        ]));

        setup();
        replace_program(ROOM);
}
