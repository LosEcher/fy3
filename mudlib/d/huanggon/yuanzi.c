// Room: /d/huanggon/yuanzi.c

inherit ROOM;

void create()
{
	set("short", "��Ժ");
	set("long", @LONG
Ժ�Ӽ���,������ש�ö��Ѿ�����,����ǽ��һ��,��һ�㰵��ɫ��
̦޺,����С�ݴ�ǽ�ڵķ�϶��̽������,ǽͷ�ϵĸ����м����������.
����һ�ų���,���Ǻ���.
LONG
	);
	set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"qingmutang",
  "north" : __DIR__"houtang",
  "west" : __DIR__"xiangfang",
]));
	set("outdoors", "/d/huanggon");
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
