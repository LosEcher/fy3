// Room: /d/wudang/road1.c

inherit ROOM;

void create()
{
	set("short", "�ٵ�");
	set("long", @LONG
�������ٵ�����ʯ�̳ɡ����治Զ�����ǳɶ��������Ϸ�ͨ��������
����ͨ���䵱�����ϸ��ء�
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "east" :__DIR__"road1",
  "west": __DIR__"road3",
  "southwest" : __DIR__"road4",
]));
set("outdoors","/d/wudang");
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
