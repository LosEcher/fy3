// Room: /u/uuui/xuedao/xuedao82.c

inherit ROOM;

void create()
{
	set("short", "��ľ��");
	set("long", @LONG
��ض�����������Ĺ�ľ�ӣ������а��˸ߣ�֦����
�����˼�����С�̣�����������·�˵��·���С������
���߹�ȥ��ǰ���ƺ��Ϳ����ˡ�
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "xuedaomen/1");
	set("exits", ([ /* sizeof() == 2 */
  "southwest" : __DIR__"xuedao81",
  "east" : __DIR__"xuedao84",
]));

	setup();
	replace_program(ROOM);
}
