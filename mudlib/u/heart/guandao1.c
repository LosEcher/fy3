// Room: /u/uuui/guandao1.c

inherit ROOM;

void create()
{
        set("short", "�ٵ�");
        set("long", @LONG
���������޵���һ�ַǳ����ݵĸо����ٵ�Ҳ��
�ô���ʯ�̵ء���������һЩ�ɰء�ʹ�����ﶬ��Ҳ
����һ�������ľ��󡣱�����һ���������С�š���
��ǰ���ǻ�԰�ˡ�
LONG
        );
        set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"shiqiao",
  "south" : __DIR__"workroom",
]));
        set("no_clean_up", 0);

        setup();
        replace_program(ROOM);
}
