// Room: /d/huanggon/shulin.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
����ƬС����,��ֻС���֦ͷ����,��������һ����Ҷ,�����м���
��ӡ,���������˾���,���ֱ����ж�ׯԺ,��Ϊ����Զ���ܿ�������ǰ��
�ҵĵ���.�ϱ������ӻ���;��ǵĴ��.
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"wyshanzhuang",
  "south" : "/d/huizhu/guandao4",
]));
	set("outdoors", "/d/huanggon");

	setup();
	replace_program(ROOM);
}
