// Room: /d/hangzhou/wanghu.c

inherit ROOM;

void create()
{
	set("short", "����ͤ");
	set("long", @LONG
һ���Ľ�С��ͤ,��ɫ�����̶�,ˮĥ��ש�̵�,ͤ��һ�ߵ�������
���˼������,õ��֮��Ļ�.��ͤ�п�ȥ,��ǰ��ƽ��������.�����Ǳ�
��ɽ,�򶫱�������С·��������.
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "northeast" : __DIR__"santan",
  "southwest" : __DIR__"pinghu",
]));
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/dongpo.c" : 1,
]));

	setup();
	replace_program(ROOM);
}
