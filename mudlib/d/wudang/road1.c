// Room: /d/wudang/road1.c

inherit ROOM;

void create()
{
	set("short", "�ٵ�");
	set("long", @LONG
�������ٵ�����ʯ�̳ɡ��������Ǹ���·�ڣ��ֱ�ͨ���䵱�뽭�ϸ��ء�
���ߵĲ�·��ͨ��ɶ������
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "west" :__DIR__"road2",
  "northeast" : __DIR__"shilu1",
]));
set("outdoors","/d/wudang");
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
