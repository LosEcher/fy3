// Room: /d/kaifeng/gulou.c

inherit ROOM;

void create()
{
	set("short", "��¥");
	set("long", @LONG
һ��ľ�ṹ��Сͤ��¥���ϲ���˸���ģ���������ÿ�쳿��ĺ
��ʱ���á���һ��С¥��ͨ���²㡣��¥���Ľǹ����������ҡ����
���⶯����
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"qianyuan",
]));
	set("outdoors", "/d/kaifeng");

	setup();
	replace_program(ROOM);
}
