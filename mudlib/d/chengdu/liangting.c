// Room: /chengdu/liangting.c
// oooc: 1998/06/20 

inherit ROOM;

void create()
{
        set("short", "��ͤ");
	set("long", @LONG
����һ��ľ�Ƶ���ͤ��ͤǰ����һ��ʯ����ʯ������������д
�š�����ͤ���������֣����������ˡ��οʹ���ڴ˴�פ��Ъ�ţ�
ͤ��ֲ�Ŵ����Ļ�ľ��������һЩ������������Ϸ��
LONG
	);
        set("outdoors", "chengdu");

	set("exits", ([
                "north" : __DIR__"guandao1",
	]));
        set("objects", ([
            "/d/yangzhou/npc/xiaofan" : 1,     
            __DIR__"npc/youke" : 1,
        ]));

	setup();
	replace_program(ROOM);
}

