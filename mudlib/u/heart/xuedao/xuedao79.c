// Room: /u/uuui/xuedao/xuedao79.c

inherit ROOM;

void create()
{
	set("short", "����С��");
	set("long", @LONG
һ��ͨ��Ѫ���ŵĻ���С·��·�Ͽյ����ģ�ʮ�ְ�
�������˾�����Щ�����Ĺ��֡����Ͽӿ����ݵģ�����
��ƽ���������˲����ࡣ
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "xuedaomen/1");
	set("exits", ([ /* sizeof() == 2 */
  "southwest" : __DIR__"xuedao78",
  "east" : __DIR__"xuedao80",
]));

	setup();
	replace_program(ROOM);
}
