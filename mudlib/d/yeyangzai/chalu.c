// Room: /d/yeyangzai/chalu.c

inherit ROOM;

void create()
{
	set("short", "��·��");
	set("long", @LONG
����Ǹ���·�ڣ����������ͨ���ϱ���Ҫ�����������˶�����������
��ͨ���䵱�������ǡ����ݸ������������������ݡ�
LONG
	);
	set("exits", ([ /* sizeof() == 4 */
  "east" : "/d/suzhou/guandao4",
  "southwest" : "/d/wudang/towudang",
  "north" : __DIR__"xiaolu",
]));
	set("outdoors", "Ұ��կ");
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
