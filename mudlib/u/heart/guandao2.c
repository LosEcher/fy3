// Room: /u/uuui/guandao2.c

inherit ROOM;

void create()
{
        set("short", "�ٵ�");
        set("long", @LONG
����ͨ�������޵�Ĺٵ���������˵��һƬ���ָ�
Ϊ���С����ֵ����Ը��м��������ڡ����������ķ���
���ǳ�����������������û�����ܽ�ȥ�ˡ���Ϊ������
�����һ���Ź�������
LONG
        );
        set("exits", ([ /* sizeof() == 2 */
  "southeast" : __DIR__"huihong",
  "north" : __DIR__"workroom",
]));
        set("no_clean_up", 0);

        setup();
        replace_program(ROOM);
}

