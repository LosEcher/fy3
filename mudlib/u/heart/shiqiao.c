// Room: /u/uuui/shiqiao.c

inherit ROOM;

void create()
{
        set("short", "Сʯ��");
        set("long", @LONG
����һ���������Сʯ�ţ���Ϊ����Сʱ����ȥ
�ྩ�������ţ����Իظ��������������һ��Сʯ��
�����һض��ǵ���Ȥ��
LONG
        );
        set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"guandao",
  "south" : __DIR__"guandao1",
]));
        set("no_clean_up", 0);

        setup();
        replace_program(ROOM);
}

