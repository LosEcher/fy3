// Room: /u/yuki/room/xiaolu.c

inherit ROOM;

void create()
{
	set("short", "С·");
	set("long", @LONG
������ͨ��÷��ͤ��С·������С·��Ҳȫ���ô���ʯ�̵�
��������һЩ�������ټ���ֲ�ʹ�����ﶬ��Ҳ����һ������
�ľ��󡣱�����һ���������С�š�����ǰ������������������
÷��ͤ�ˡ�
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "eastdown" : __DIR__"baiqiao",
  "westdown" : "/d/meizhuang/qingshilu2",
]));

	setup();
	replace_program(ROOM);
}
