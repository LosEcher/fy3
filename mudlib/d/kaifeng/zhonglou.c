// Room: /d/kaifeng/zhonglou.c

inherit ROOM;

void create()
{
	set("short", "��¥");
	set("long", @LONG
һ��С�ɶ����ʵĸ�¥�����Ϻõ���ľ�������йɵ��������㡣¥
�ϵ����Ӿ���һ���ǧ��ǵ�������¸�ɮ�������£���ʩ���ɵģ�
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"qianyuan",
]));
	set("outdoors", "/d/huanggon");

	setup();
	replace_program(ROOM);
}
