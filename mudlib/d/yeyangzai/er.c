// Room: /open/stst/sazai/er.c

inherit ROOM;

void create()
{
        set("short", "��կ������");
        set("long", @LONG
        ���Ƕ�կ�����ң�ǽ�Ϲ���һ�����δ󵶣������ǳ������������
����һЩ����������Ƕ�կ���մ����������ġ�

LONG

        );
        set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"dating",
]));
        set("no_clean_up", 0);

        setup();
        replace_program(ROOM);
}

