// Room: /d/new/huanhua/lshanguan.c

inherit ROOM;

void create()
{
	set("short", "¦ɽ��");
	set("long", @LONG
��¦ɽ��¦ɽ��,�Ǵ�ǭ��Ҫ��,�˹���ɽ����,����ɽ��֮��,ֱ��
һ�򵱹�,���Ī��֮��.̧ͷ����,һ��ɽ��ֱ�����Ʋ���ȥ.
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "northwest" : __DIR__"road2",
  "southup" : __DIR__"road4",
]));
	set("no_clean_up", 0);
	set("outdoors", "/d/new");

	setup();
	replace_program(ROOM);
}
