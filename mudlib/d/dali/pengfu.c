// Room: /d/dali/pengfu.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
һȦ����Χ��һ����ǽ,������ɢ�Ľл����������й�,��ɫ�Ĵ���
�����,����ʲô�˳���.��ֻ��ü�������Խе�����.
LONG
	);
	set("outdoors", "/d/dali");
	set("exits", ([ /* sizeof() == 2 */
  "in" : __DIR__"inpengfu",
  "northeast" : __DIR__"qingchi",
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
