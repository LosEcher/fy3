// Room: /u/uuui/xuedao/xuedao80.c

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
  "southeast" : __DIR__"xuedao81",
  "west" : __DIR__"xuedao79",
]));

	setup();
	replace_program(ROOM);
}
